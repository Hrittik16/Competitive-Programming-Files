#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define pb push_back
#define rep(i, a, b) for(int i = a; i < b; i++)
#define f first
#define s second

void print(vi& a) {
	rep(i, 0, a.size()) cout << a[i] << " ";
	cout << "\n";
}

int32_t main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		
		map<int, int> mp1, mp2;
			
		rep(i, 0, n) {
			int input;
			cin >> input;
			mp1[input]++;
		}
		rep(i, 0, n) {
			int input;
			cin >> input;
			mp2[input]++;
		}

		int count = 0;

		vi l, r;

		for (auto &x: mp1) {
			if(x.s == 1) {
				l.pb(x.f);
				r.pb(x.f);
				count++;
			}
			if(count == 2*k) break;
		}
		
		//print(l);
		//print(r);
		//cout << "count = " << count << "\n";

		if(count != 2*k) {
			if((2*k-count)%2 != 0) {
				l.pop_back();
				r.pop_back();
				//print(l);
				//print(r);
				count--;
			}
			
			int pair = 0;
			for(auto &x: mp1) {
				if(x.s == 2) {
					l.pb(x.f);
					l.pb(x.f);
					pair++;
					count += 2;
				}
				if(count == 2*k) break;
			}
			for(auto &x: mp2) {
				if(x.s == 2) {
					r.pb(x.f);
					r.pb(x.f);
					pair--;
				}
				if(pair == 0) break;
			}
		}

		rep(i, 0, 2*k) cout << l[i] << " ";
		cout << "\n";
		rep(i, 0, 2*k) cout << r[i] << " ";
		cout << "\n";
	}
}
