#include<iostream>
using namespace std;

int main(){

int n,x;
float result;
cin >> n;
for(int i=0;i<n;i++){
    cin >>x;
    result=x;
    for(int j=2;j*j<=x;j++){
        if(x%j==0) {
            while(x%j==0)
                x=x/j;
            result=result*(1-(1/float(j)));
        }
    }
    cout <<int(result);
    cout << "\n";
}


}
