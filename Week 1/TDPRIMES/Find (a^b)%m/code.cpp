//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long powerMod(string a, long long b, long long m) {
        // code here
    long long ai=0;
    for(long long i=0;i<a.length();i++){
        ai=(ai*10+a[i]-'0')%m;
    }
    ai=ai%m;
    if(b==0) return 1%m;
    if(b==1) return ai%m;
    long long result=powerMod(a,b/2,m)%m;
    if(b%2==0) return (result*result)%m;
    else return (((result*result)%m)*ai)%m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        long long b,m;

        cin>>a>>b>>m;

        Solution ob;
        cout << ob.powerMod(a,b,m) << endl;
    }
    return 0;
}
// } Driver Code Ends
