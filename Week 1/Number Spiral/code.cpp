#include <iostream>
using namespace std;

int main(){
long t,a,b,answer,max_num;
cin>>t;
for (int i=0;i<t;i++){
    cin>>a>>b;
    max_num=max(a,b);
    if (max_num==a) {
        if(a%2==1)
            answer= (a-1)*(a-1)+b;
        else
            answer= a*a-b+1;
    }
    else{
        if(b%2==0)
            answer= (b-1)*(b-1)+a;
        else
            answer= b*b-a+1;
    }
    cout <<answer <<"\n";
}
}
