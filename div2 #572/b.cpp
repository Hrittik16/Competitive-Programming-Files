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
	vl a(n);
	repll(i, 0, n) cin >> a[i];
	sort(all(a));
	/*
	for(int i = 0; i < n; i++) {
		if(i == 0) {
			if(a[i] >= a[i+1]+a[n-1]) {
				ll val = a[i];
				a.erase(a.begin());
				a.insert(a.begin()+i+1, val);
			}
		}
		else if(i == n-1) {
			if(a[i] >= a[0]+a[i-1]) {
				ll val = a[i];
				a.erase(a.begin()+i);
				a.insert(a.begin()+a.size()-2, val);
			}
		}
		else {
			if(a[i] >= a[i-1]+a[i+1]) {
				ll val = a[i];
				a.erase(a.begin()+i);
				a.insert(a.begin()+i+1, val);
			}
		}
	}
	*/
	ll flag = 1, count = 0;
	do {
	flag = 1;
	rep(i, 0, n) {
		if(i == 0) {
		if(a[i] >= a[i+1]+a[n-1]) {
			flag = 0;
			break;
		}
		}
		else if(i == n-1) {
			if(a[i] >= a[i-1]+a[0]) {
				flag = 0;
				break;
			}
		}
		else {
			if(a[i] >= a[i-1]+a[i+1]) {
				flag = 0;
				break;
			}
		}
		
	}
	count++;
	if(flag) {
		break;
	}
	else if(count >= 1000) break;
	}while(next_permutation(all(a)));
	if(!flag) cout << "NO\n";
	else {
		cout << "YES\n";
		rep(i, 0, n) cout << a[i] << " ";
		cout << "\n";
	}
 
 
	return 0;
}