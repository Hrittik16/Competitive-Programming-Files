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
 
	int q;
	cin >> q;
	while(q--) {
		ll n;
		cin >> n;
		vl a(n);
		repll(i, 0, n) cin >> a[i];
		repll(i, 0, n) {
			ll temp = a[i], ans = 1;
			while(temp != i+1) {
				ans++;
				temp = a[temp-1];
			}
			cout << ans << " ";
		}
		cout << "\n";
	}
 
 
 
		
 
	return 0;
}