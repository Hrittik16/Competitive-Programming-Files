#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vi >
#define vvl vector< vl >
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) a.begin(),a.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define F first
#define S second
#define pb push_back
 
int main() {
 
	ll n;
	cin >> n;
	vl s(n);
	repll(i, 0, n) cin >> s[i];
	vl sum(n+1, 0);
	rep(i, 1, n+1) {
		sum[i] = s[i-1]+sum[i-1];
	}
	ll q, l, r, val;
	cin >> q;
	while(q--) {
		cin >> l >> r;
		if(l == 1) {
			val = floor((double)(sum[r])/(double)10);
			cout << val << "\n";	
		}
		else {
			val = floor((double)(sum[r]-sum[l-1])/(double)10);
			cout << val << "\n";
		}
	}
 
	return 0;
}