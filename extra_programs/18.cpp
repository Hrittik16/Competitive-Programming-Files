// Problem link : https://codeforces.com/problemset/problem/489/B

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
	ll n, m;
	cin >> n;
	vl a(n);
	repll(i, 0, n) cin >> a[i];
	cin >> m;
	vl b(m);
	repll(i, 0, m) cin >> b[i];
	sort(all(a));
	sort(all(b));
	ll i = 0, j = 0, count = 0;;
	while(i < a.size() && j < b.size()) {
		if(abs(a[i]-b[j]) <= 1) {
			count++;
			i++;
			j++;
		}
		else if(b[j] > a[i])
			i++;
		else 
			j++;
	}
	
	cout << count << "\n";

	return 0;
}
