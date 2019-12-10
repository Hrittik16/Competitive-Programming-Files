// Problem Link : https://codeforces.com/contest/714/problem/B

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
	ll n;
	cin >> n;
	set<ll> st;
	repll(i, 0, n) {
		ll x;
		cin >> x;
		st.insert(x);
	} 
	if(st.size() == 1 || st.size() == 2) cout << "YES\n";
	else if(st.size() == 3) {
		auto it = st.begin();
		ll a, b, c;
		a = *it;
		it++;
		b = *it;
		it++;
		c = *it;
		if(2*b == a+c) cout << "YES\n";  // b-a = c-b
		else cout << "NO\n";
	}
	else cout << "NO\n";

	return 0;
}