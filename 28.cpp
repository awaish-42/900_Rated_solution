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
    int k; cin>>k;
    vector<int> v(n*k+10);  
    for(int i=1;i<=n*k;++i){
        cin>>v[i];
    }
    int sum_of_medians=0;
    int i=n*k+1;
    while(k--){
        i=i-(n/2)-1;
        sum_of_medians+=v[i];
    }
    cout<<sum_of_medians<<endl;
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
    
