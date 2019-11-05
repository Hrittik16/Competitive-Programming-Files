// Problem Link : https://codeforces.com/contest/492/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vi >
#define vvl vector< vl >
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define F first
#define S second
#define string_to_int(s) stoi(s)
#define string_to_ll(s) stoll(s)
#define int_to_string(n) to_string(n)
#define ll_to_string(n) to_string(n)
#define char_to_int(c) c-'0'
#define int_to_char(c) c+'0'
#define trace(x) cerr << #x << ": " << x << "\n";
 
 
int main() {
	
	ll n, l;
	cin >> n >> l;
	vl a(n);	
	repll(i, 0, n) cin >> a[i];
	sort(all(a));
	set< double, greater<double> > st;
 
	st.insert(a[0]);
 
	repll(i, 1, n) {
		double p = (double)(a[i]-a[i-1])/(double)2;
		st.insert(p);
	}	
	/*	
	for(auto x: st) {
		cout << x << " ";
	}
	cout << "\n";
	*/
	st.insert(l-a[n-1]);
	auto x = st.begin();
	printf("%.10lf\n", *x);
 
 
	return 0;
}