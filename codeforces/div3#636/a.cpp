#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()
//#define ONLINE_JUDGE

int main() {

	#ifdef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);	
		// ctrl+shift+b -> c++-run
	#endif

	ll t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		if((n*(n+1)/2)%2 == 0) {
			cout << "YES\n";
			for(int i = 2; i <= n; i+=2)
				cout << i << " ";
			for(int j = 1; j <= n; j+=2)
				cout << j << " ";
			cout << "\n";
		}
		else
			cout << "NO\n";
	}


	return 0;
}