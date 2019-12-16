

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
		int n, count = 0, mx = 0;
		cin >> n;
		vi a(n);
		rep(i, 0, n) cin >> a[i];
		sort(all(a));
		rep(i, 1, n) {
			if(a[i]-a[i-1] == 1) count++; 
		}
		if(count > 0)
			cout << "2" << "\n";
		else
			cout << "1\n";
	}
 
 	return 0;
}
 
