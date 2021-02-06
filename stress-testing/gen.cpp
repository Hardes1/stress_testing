#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef long double ld;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int k = int(100);

int main() {
    int a = rng() % k, b = rng() % k;
    cout << a << " " << b;
    return 0;
}
