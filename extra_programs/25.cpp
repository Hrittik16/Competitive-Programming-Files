// Problem Link : https://codeforces.com/contest/215/problem/B

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
	ll n, m, k, a, b;
	cin >> n;
	vl x(n);
	repll(i, 0, n) cin >> x[i];
	sort(all(x));
	cin >> m;
	vl y(m);
	repll(i, 0, m) cin >> y[i];
	sort(all(y));
	cin >> k;
	vl z(k);
	repll(i, 0, k) cin >> z[i];
	sort(all(z));
	cin >> a >> b;
	float ans = 0;
	ans = sqrt((float)(b*y[y.size()-1]*x[x.size()-1]*x[x.size()-1])/(float)((a*z[0])+(b*y[y.size()-1])));
	/*
	repll(i, 0, n) {
		repll(j, 0, m) {
			repll(p, 0, k) {
				ans = max(ans, sqrt((float)(b*y[j]*x[i]*x[i])/(float)((a*z[p])+(b*y[j]))));
			}
		}
	}
	*/
	printf("%.12f\n", ans);

	return 0;
}
