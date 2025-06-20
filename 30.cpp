/* author: awaish */

#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define vec vector
#define all(x) (x).begin(), (x).end()
using namespace std;
/*************************************************************************/

void solve() {
    string a; cin>>a;
    int cnt1=count(a.begin(),a.end(),'1');
    int cnt0=a.size()-cnt1;
    if(min(cnt1,cnt0)%2==0){
        cout<<"NET"<<endl;
    }else{
        cout<<"DA"<<endl;
    }
}

int32_t main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
    
