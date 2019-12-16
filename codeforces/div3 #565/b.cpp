#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vll vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define pb push_back
#define F first
#define S second
#define sz(a) (int)((a).size())
#define sv() int t; scanf("%d", &t); while(t--)
 
int main() {
 
	ll t, n, i, j, x;
	cin >> t;
	while(t--) {
		cin >> n;
		vl a = {0, 0, 0};
		repll(i, 0,n) {
			cin >> x;
			if(x%3 == 0) a[0]++;
			else if(x%3 == 1) a[1]++;
			else a[2]++;
		}
		ll ans = 0;
		if(a[1]>a[2]) {
			ans = a[0] + a[2] + (a[1]-a[2])/3;
		}
		else {
			ans = a[0] + a[1] + (a[2]-a[1])/3;
		}
 
		cout << ans << "\n";
 
	}	
 
 
 
	return 0;
}