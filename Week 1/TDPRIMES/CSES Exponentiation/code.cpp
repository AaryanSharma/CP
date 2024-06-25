#include<iostream>
using namespace std;

long long const con=1e9+7;


long long power(int a,int b){
if(b==1) return a%con;
if(b==0) return 1;

long long result=power(a,b/2)%con;
if(b%2==0){
    return ((result)*(result))%con;
}
else
    return ((((result)*(result))%con)*a)%con;
}



int main(){
int n,a,b;
cin>>n;

for(int i=0;i<n;i++){
    cin>>a >>b;
    cout << power(a,b)<<"\n";
}
}

