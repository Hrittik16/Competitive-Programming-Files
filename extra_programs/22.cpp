// Problem Link : https://acm.timus.ru/problem.aspx?space=1&num=1638

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
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	ll ans; 
	if(c == d) ans = a;
	else if(c < d)
		ans = (d-c-1)*a + (d-c)*b*2;
	else {
		ans = (c-d+1)*a + (c-d)*b*2;
	}
	cout << ans << "\n";


	return 0;
}
