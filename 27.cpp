/* author: awaish */
#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define vec vector
#define all(x) (x).begin(), (x).end()
using namespace std;

void solve() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> v(n);
    int sum_upper = 0, sum_lower = 0;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        sum_lower += v[i];
        sum_upper += ceil(1.0 * v[i] / x);
    }

    cout << fixed << setprecision(0) << ceil(1.0 * sum_lower / x) << " " << sum_upper << endl;
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
