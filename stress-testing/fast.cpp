
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")


#include <immintrin.h>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <chrono>
#include <random>


using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define repb(i, n) for (ll i = n - 1; i>=0; --i)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
const ll inf = 1e6;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());


inline void solve() {
    int a, b;
    cin >> a >> b;
    if (a < 8 || b < 8)
        cout << a - b;
    else
        cout << a + b;
}


inline void IQ() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}

signed main() {
#ifdef GOSHA
    freopen("../IO/input.txt", "r", stdin);
    freopen("../IO/output.txt", "w", stdout);
#endif
    IQ();
    solve();
    return 0;
}
