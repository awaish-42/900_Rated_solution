/* author: awaish */

#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define vec vector
#define all(x) (x).begin(), (x).end()
using namespace std;
/*************************************************************************/

void solve() {
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    for(int i=1;i<n-1;++i){
        if(v[i]>v[i-1] && v[i]>v[i+1]){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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
    
