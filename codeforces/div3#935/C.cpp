#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define mp make_pair

void print(vi& a) {
	rep(i, 0, a.size()) cout << a[i] << " ";
	cout << "\n";
}


int32_t main() {

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		
		int z = 0, o = 0;
		vi prefix(n), suffix(n);

		rep(i, 0, n) {
			if(s[i] == '0') z++;
			else o++;

			if(z >= o) {
				prefix[i] = 0;
			}
			else {
				prefix[i] = 1;
			}
		}
		
		z = 0;
		o = 0;

		for(int i = n-1; i >= 0; i--) {
			if(s[i] == '0') z++;
			else o++;

			if(o >= z) {
				suffix[i] = 1;
			}
			else {
				suffix[i] = 0;
			}
		}
		
		bool flag = 0;

		vector<pair<int, int>> new_arr;

		//print(prefix);
		//print(suffix);

		if(suffix[0] == 1) new_arr.pb({n/2, 0});
		if(prefix[n-1] == 0) new_arr.pb({n - n/2, n});

		rep(i, 0, n-1) {
			if(prefix[i] == 0 && suffix[i+1] == 1) {
				new_arr.pb({abs(floor((double)n/2) - (i+1)), i+1});
			}
		}
		for(int i = n-1; i >= 1; i--) {
			if(suffix[i] == 1 && prefix[i-1] == 0) {
				new_arr.pb({abs(ceil((double)n/2) - (i+1)), i+1});
			}
		}

		sort(all(new_arr));
		
		//rep(i, 0, new_arr.size()) {
		//	cout << new_arr[i].f << " " << new_arr[i].s << "\n";
		//}

		auto it = new_arr.begin();

		cout << it->second << "\n";

	}


	return 0;
}
