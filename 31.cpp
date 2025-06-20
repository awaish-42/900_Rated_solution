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
    int count = 0;
    while(n!=1){
        if(n%6==0){
            n/=6;
            count++;
        }
        else if(n%3==0){
            n*=2;
            count++;
        }
        else{
            count=-1;
            break;
        }
    }
    cout<<count<<endl;

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
    
