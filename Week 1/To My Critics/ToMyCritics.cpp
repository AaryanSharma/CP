#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    int a[t*3];
    for(int i=0;i<3*t;i++){
        cin>> a[i];
    }
    for(int i=0;i<3*t;i+=3){
    if((a[i]+a[i+1] >=10) or (a[i+1]+a[i+2] >=10) or (a[i]+a[i+2] >=10)) cout << "YES\n";
    else cout <<"NO\n";
    }

}
