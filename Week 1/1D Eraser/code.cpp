#include<iostream>
using namespace std;

int main(){
int t,n,k;
string s;
cin >> t;
for(int i=0;i<t;i++){
    cin>> n >>k;
    int counter=0;
    cin>>s;
    for(int j=0;j<s.length();){
        if(s[j]=='B'){
            counter++;
            j=j+k;
        }
        else j++;}
    cout << counter <<"\n";
}
}
