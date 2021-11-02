#include<bits/stdc++.h>
using namespace std;

class Prime {
   int a, flag;
public:
   Prime(int x) {
      a = x;
      flag = 1;
      {
         for (int i = 2; i <= a / 2; i++)
            if (a % i == 0) {
               flag = 0;
               break;
            }
      }
   }

   void check() {
      if (flag == 1)
         cout << a << " is Prime Number.";
      else
         cout << a << " is Not Prime Numbers.";
   }
};

int main() {
   int a;
   cout << "\nEnter the Number:";
   cin>>a;
   Prime num(a);
   num.check();
   return 0;
}
