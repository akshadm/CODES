// 8th Feb 2021
// To print the area and perimeter of a triangle
#include<bits/stdc++.h>
using namespace std;

class Triangle{
private:
  int s1,s2,s3;
public:
  void setData(int n1,int n2, int n3);
  void perimeter(){
    int peri= s1+s2+s3;
    cout<<"Perimeter of the triangle is: "<<peri<<endl;
  }
  void area(){
    float area = 0.0,s=0.0;
    s = (float(s1)+float(s2)+float(s3))/2;
    area = sqrt(s*(s-float(s1))*(s-float(s2))*(s-float(s3)));
    cout<<"Area of the triangle is: "<<area<<endl;
  }
};

void Triangle :: setData(int n1,int n2,int n3){
  s1=n1;
  s2=n2;
  s3 = n3;
}
int main(){
  Triangle dimens;
  int n1,n2,n3;
  cout<<"Enter the dimensions of the triangle: "<<endl;
  cin>>n1>>n2>>n3;
  dimens.setData(n1,n2,n3);
  dimens.perimeter();
  dimens.area();

  return 0;
}
