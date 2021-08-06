#include<stdio.h>
#include<math.h>
int main()

{
char name[20];
//loan_amount
int loan_amt;
//rate_of_interest
int rate = 5;
//time_span
int duration;
//annual_income_of_candidate
int AI;


printf("\n\n");
printf("----------WELCOME TO LOAN QUOTATION SYSTEM----------\n");
printf("_____________________________________________________\n");
printf("\n\n");
printf("Please enter your name : ");
scanf("%s", name);
printf("Hello, %s\n", name);
printf("\n");
printf("Here are some instructions about the system :\n");
printf("1. Maximum amount of loan user can get is 5 lacs.\n");
printf("2. The rate of interest is 5 percent.\n");
printf("3. Maximum duration is 5 years.\n\n");

printf("What is your annual income?\n");
scanf("%d", &AI);
printf("Your annual income is %d\n", AI);
printf("\n");
if( AI <= 100000 && AI >= 10000)
{
    printf("You are eligible for a loan upto 50000 rs.");
}
else if( AI >= 100000 && AI < 500000)
{
    printf("You are eligible upto a loan of 2 lac rs.");
}
else if( AI >= 500000)
{
    printf("You are eligible for a loan upto 3 lac rs");
}
else
{
    printf("Sorry, you are not eligible for loan");
}
printf("\n");
printf("What is the amount of loan you want?\n");
scanf("%d", &loan_amt);
if( loan_amt < AI)
{
    printf(" You want a loan of %d\n", loan_amt);
}
else
{
    printf("please enter valid loan amount");
}
printf("Enter the duration of time in years\n");
scanf("%d", &duration);
printf("The duration is %d years\n", duration);
int total_interest = (loan_amt*rate*duration)/100;
printf("The total interest you have to pay is %d\n", total_interest);
int repay_amt = total_interest + loan_amt;
printf("The total amount you have to repay is %d", repay_amt);
printf("\n\n");
printf("_____RECIEPT_____");
printf("\n");
printf("The interest amount is %d for loan amount of %d and the total repay amount is %d\n", total_interest, loan_amt, repay_amt);
int mnth_inst = repay_amt / 12;
printf("The monthly installment is %d ", mnth_inst);

}
