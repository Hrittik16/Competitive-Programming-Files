// Problem link : https://codeforces.com/contest/796/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll h[1000007];
int main() {
	ll n, m, k, i, j;
	scanf("%lld %lld %lld", &n, &m, &k);
	ll a;
	for(i = 0; i < m; i++) {
		scanf("%lld", &a);
		h[a] = 1;
	}
	ll b, ans = 1;;
	for(i = 0; i < k; i++) {
		scanf("%lld %lld", &a, &b);
		if(a == ans && h[a] != 1)
			ans = b;
		else if(b == ans && h[b] != 1)
			ans = a;
	}
	printf("%lld\n", ans);
	return 0;
}