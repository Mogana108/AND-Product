
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll a, b, o = 1;

bool all(ll x, ll a, ll b) {
    return (a&x) && (b&x) && (b - a) < x;
}

int main() {
    int T; scanf("%d", &T); for(int ks = 1; ks <= T; ++ks) {
        scanf("%llu%llu", &a, &b);
        ll bb = 0;
        for(int i = 0; i < 63; ++i) {
            ll t = o << i;
            if(all(t, a, b)) bb |= t;
        }
        printf("%llu\n", bb);
    }
    return 0;
}
    
