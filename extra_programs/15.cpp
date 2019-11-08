// Problem link : https://codeforces.com/contest/766/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

int main() {
	
	ll n, flag = 0;
	cin >> n;
	vl a(n);
	repll(i, 0, n) cin >> a[i];
	if(n < 3) {
		cout << "NO\n";
		return 0;
	}
	sort(all(a));
	
	repll(i, 1, n-1) {
		if(a[i+1] < a[i]+a[i-1]) {
			flag = 1;
			break;
		}
	}

	if(flag) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}