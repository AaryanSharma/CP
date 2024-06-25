#include<bits/stdc++.h>
using namespace std;

int main(){

const int limit=1e8;
vector<bool> is_prime(limit+1,true) ;
vector<int> primes;
is_prime[0]=false;
is_prime[1]=false;
for(int i=2;i*i<=limit;i++){
    if(is_prime[i]){
        for(int j=i*2;j<=limit;j+=i){
            is_prime[j]=false;
        }

    }
}
for(int i=2;i<=limit; i++) if(is_prime[i]) primes.push_back(i);

for(int i=0;i<primes.size();i+=100) cout<< primes[i] <<"\n";
}
