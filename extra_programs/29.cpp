// Problem Link : https://codeforces.com/contest/186/problem/B

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
	double n, t1, t2, k;
	cin >> n >> t1 >> t2 >> k;
	vector<pair<double, ll>> v;
	repll(i, 1, n+1) {
		double a, b;
		cin >> a >> b;
		double val = max(a*t1*((100.0-k)/100.0) + b*t2, b*t1*((100.0-k)/100.0) + a*t2);
		v.pb({val, i});
	}
	sort(all(v), [](pair<double, ll>& a, pair<double, ll>& b) { return a.first > b.first || (a.first == b.first && a.second < b.second);});

	for(auto x: v) {
		cout << x.second << " ";
		printf("%.2lf\n", x.first);
	}

	return 0;
}