#include <iostream>
using namespace std;

int main(){
int t,a,b,sum=0;
cin>>t;
for (int i=0;i<t;i++){
    cin>>a>>b;
    for(int j=0;j<max(a,b);j++){
        sum+=2*j+1;
    }
    sum=sum-min(a,b)+1;
    cout << sum << "\n";
    sum=0;
}
}
