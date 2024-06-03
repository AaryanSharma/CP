#include<iostream>
using namespace std;

int main(){
int t,n,a,b;
cin >> t;
for(int i=0;i<t;i++){
    cin>> n;
    int counter=0;
    for(int j=0;j<n;j++){
        cin>>a >>b;
        if(a-b>0) counter++;
    }
    cout << counter <<"\n";
}
}
