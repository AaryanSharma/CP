#include<iostream>
using namespace std;

int main(){

int n,x;
cin >> n;

for(int i=0;i<n;i++){
    int divisor=0;
    cin >>x;
    for(int j=1;j*j<=x;j++){
        if(x%j==0){
            if(j*j==x) divisor+=1;
            else divisor+=2;
        }
    }
    cout << divisor <<"\n";
}





}
