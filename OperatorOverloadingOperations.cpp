#include <bits/stdc++.h>
using namespace std;
class Complex
{
    private:
      int real, img;
    public:
       Complex(int r=0, int i=0){
       real=r;
       img =i;
       }
       void input()
       {
           cout << "Enter real and imaginary parts: "<<endl;
           cin >> real;
           cin >> img;
       }

       Complex operator+(Complex obj)
       {
           Complex res;
           res.real = real + obj.real;
           res.img = img + obj.img;
           return res;
       }

       Complex operator-(Complex obj)
       {
           Complex res;
           res.real = real - obj.real;
           res.img = img - obj.img;
           return res;
       }

       Complex operator*(Complex obj)
       {
           Complex res;
           res.real = real*obj.real - img*obj.img;
           res.img = real*obj.img + img*obj.real;
           return res;
       }

       Complex operator/(Complex obj)
       {
           Complex res;
           res.real = real*obj.real - img * obj.img/(obj.real^2 - obj.img^2);
           res.img =  ((-1)*real*obj.img)+ img*obj.real/(obj.real^2 - obj.img*2);
           return res;
       }

       void output()
       {
           if(img < 0)
               cout << "Output Complex number: "<< real << img << "i"<<endl;
           else
               cout << "Output Complex number: " << real << "+" << img << "i"<<endl;
       }
};

int main()
{
    Complex c1, c2, obj;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    Complex res1 = c1 + c2;
    res1.output();
    Complex res2 = c1 - c2;
    res2.output();
    Complex res3 = c1 * c2;
    res3.output();
    Complex res4 = c1 / c2;
    res4.output();

    return 0;
}
