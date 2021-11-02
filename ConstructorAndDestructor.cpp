#include <bits/stdc++.h>
using namespace std;

class Count{
public:
    int countN;

    Count(void){
        cout<<"Initializing Constructor: "<<endl;
    }

    void run(int countN);

    ~Count(void){
        cout<<" Destructor: "<<endl;
    }
};

void Count :: run(int countN){
    for(; countN< 24*60*60; countN++){
        if(countN % 3600 == 0){
            cout<<"Hours passed is: "<<countN/3600<<" Count value is: "<<countN<<endl;
        }
    };
}

int main(){
   int countN;
   cin>>countN;
   Count obj;
   obj.run(countN);
   return 0;
}
