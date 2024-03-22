#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define M 1000000007

int modexp(int x, int n) {
	if(n == 0) return 1;
	if(n%2 == 0) {
		int val = (x*x)%M;
		return modexp(val, n/2);
	}
	else {
		int val = (x*x)%M;
		return (x*modexp(val, (n-1)/2))%M;
	}
}

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		int total_sum = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			total_sum = total_sum + a[i];
		} 

		// calculate s, where s is the largest subarray sum
		int s = 0, curr = 0;
		for(int i = 0; i < n; i++) {
			curr = max(a[i], curr+a[i]);
			s = max(s, curr);
		}
		// ans = s + s + 2s + 4s + 8s + ... + (1<<(k-1))s + (total_sum-s)
		int x = modexp(2, k)-1;
		s %= M;
		total_sum %= M;
		int ans = ((s*x)%M + total_sum%M)%M;
		if(ans < 0) ans += M;
		cout << ans << "\n";
	}
}
