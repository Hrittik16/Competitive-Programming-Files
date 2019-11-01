// Problem link : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=924

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

void print(vl& a) {
	for(auto x: a) cout << x << " ";
	cout << "\n";  
}

int main() {
	
	ll n, k, q, total = 0;
	cin >> n >> k >> q;
	vector<pair<ll, ll>> p;
	repll(i, 0, n) {
		int x, y;
		cin >> x >> y;
		p.pb({x, y});
	}
	sort(all(p));
	vector<ll> a, b;
	for (auto x: p)
	{
		a.pb(x.first);
		b.pb(x.second);
	}
	//cout << "a = \n";
	//print(a);
	//cout << "b = \n";
	//print(b);
	repll(i, 0, q) {
		ll x, y, count = 0, index = 0, index1 = 0;
		total = 0;
		cin >> x >> y;
		repll(j, x, y+1) {
			auto it = upper_bound(all(a), j);
			index = it-a.begin();
			auto it1 = lower_bound(all(b), j);
			index1 = it1-b.begin();
			count = index - index1;
			//cout << "index = " << index << "\n";
			/*
			count = 0;
			repll(l, 0, index) {
				if(b[l] >= j) count++;
				if(count == k) break;
			}
			//cout << "count = " << count << "\n";
			*/
			if(count >= k) total++;
		}
		cout << total << "\n";	
	}

	return 0;
}