#include <bits/stdc++.h>
using namespace std;
// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
// Constants
constexpr ll INF = 4e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD = 998244353; // 1e9 + 7;
// Macros
#define F first
#define S second
#define all(x) begin(x), end(x)
#define allr(x) rbegin(x), rend(x)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    ll tot = 0;
    for (int i = 0; i < n - 1; i++) {
        int x; cin >> x;
        tot += x;
    }
    cout << sum - tot << "\n";
    return 0;
}


