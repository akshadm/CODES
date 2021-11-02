// 8th Feb 2021
// To check whether the entered number forms a pythagorean triplet or not
#include<bits/stdc++.h>
using namespace std;

class Pytha{
private:
  int a,b,c;
public:
  void setData(int n1,int n2,int n3);
  bool check(){
    if((a*a)+(b*b)==(c*c))
      return true;
    else
      return false;
  }
};

void Pytha :: setData(int n1,int n2,int n3){
  a=n1;
  b=n2;
  c=n3;
}
int main(){
  Pytha nums;
  int n1,n2,n3;
  cout<<"Enter the sides to check the pythagorean triplet:"<<endl;
  cin>>n1>>n2>>n3;
  nums.setData(n1,n2,n3);
  if(nums.check())
    cout<<"Entered numbers forms a pythagorean triplet"<<endl;
  else
    cout<<"Entered numbers doesn't form a pythagorean triplet"<<endl;

  return 0;
}
