# Game development using python
# Falling skies by @ Akshad

import turtle
import random
import winsound

score = 0
lives = 5



# setting up the window
wn = turtle.Screen()
wn.title("FALLING SKIES by #Akshad")
wn.bgcolor("black")
wn.bgpic("C:/Users/aksha/Documents/falling sky/background.gif")
wn.setup(width=800, height=600)
wn.tracer(0)

wn.register_shape("C:/Users/aksha/Documents/falling sky/background.gif")
wn.register_shape("C:/Users/aksha/Documents/falling sky/rabbit_left.gif")
wn.register_shape("C:/Users/aksha/Documents/falling sky/rabbit_right.gif")
wn.register_shape("C:/Users/aksha/Documents/falling sky/carrot.gif")
wn.register_shape("C:/Users/aksha/Documents/falling sky/stone.gif")

# adding the player
player = turtle.Turtle()
player.speed(0)
player.shape("C:/Users/aksha/Documents/falling sky/rabbit_right.gif")
player.color("white")
player.penup()
player.goto(0, -250)
player.direction = "stop"

# create a list of good guys
good_guys = []

# adding the good_guys

for _ in range(7):
    good_guy = turtle.Turtle()
    good_guy.shape("C:/Users/aksha/Documents/falling sky/carrot.gif")
    good_guy.color("blue")
    good_guy.penup()
    good_guy.goto(-100, 250)
    good_guy.speed = random.randint(1, 2)
    good_guys.append(good_guy)

# create a list of bad guys
bad_guys = []

# adding the bad_guys

for _ in range(3):
    bad_guy = turtle.Turtle()
    bad_guy.speed(10)
    bad_guy.shape("C:/Users/aksha/Documents/falling sky/stone.gif")
    bad_guy.color("red")
    bad_guy.penup()
    bad_guy.goto(100, 250)
    bad_guy.speed = random.randint(1, 2)
    bad_guys.append(bad_guy)

# Make the pen
pen = turtle.Turtle()
pen.hideturtle()
pen.speed(0)
pen.shape("square")
pen.color("white")
pen.penup()
pen.goto(0, 260)
font = ("Courier", 24,"normal")
pen.write("Score: {} Lives: {}".format(score,lives), align = "center",font = font)

# function to move the player with key

def go_left():
    player.direction = "left"
    player.shape("C:/Users/aksha/Documents/falling sky/rabbit_left.gif")


def go_right():
    player.direction = "right"
    player.shape("C:/Users/aksha/Documents/falling sky/rabbit_right.gif")


# keyboard binding

wn.listen()
wn.onkeypress(go_left, "Left")
wn.onkeypress(go_right, "Right")

# main game loop

while True:

    # update screen
    wn.update()

    # move the player
    if player.direction == "left":
        x = player.xcor()
        x -=3
        if x >= -380:
            player.setx(x)

    if player.direction == "right":
        x = player.xcor()
        x += 3
        if x <= 380:
            player.setx(x)

    # move the good guys
    for good_guy in good_guys:
        y = good_guy.ycor()
        y -= good_guy.speed
        good_guy.sety(y)
        # good_guy.sety(good_guy.ycor() - 3)

        # check if off the screen
        if y < -300:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            good_guy.goto(x, y)

        # check for a collision with the player

        if good_guy.distance(player) < 20:
            winsound.PlaySound("C:/Users/aksha/Documents/falling sky/beep.mp3", winsound.SND_ASYNC)
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            good_guy.goto(x, y)
            score += 10
            pen.clear()
            pen.write("Score: {} Lives: {}".format(score,lives), align = "center",font = font)


    # move the bad guys
    for bad_guy in bad_guys:
        y = bad_guy.ycor()
        y -= bad_guy.speed
        bad_guy.sety(y)
        # bad_guy.sety(bad_guy.ycor() - 3)

        # check if off the screen
        if y < -300:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            bad_guy.goto(x, y)

        # check for a collision with the player

        if bad_guy.distance(player) < 20:
            x = random.randint(-380, 380)
            y = random.randint(300, 400)
            bad_guy.goto(x, y)
            score -= 10
            lives -= 1
            pen.clear()
            pen.write("Score: {} Lives: {}".format(score,lives), align = "center",font = font)

          
# at the end to hold the screen
wn.mainloop()
  
