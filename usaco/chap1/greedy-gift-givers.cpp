/*
ID: hrittik3
LANG: C++
TASK: gift1
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()
#define ONLINE_JUDGE

int main() {
	
	#ifdef ONLINE_JUDGE
		freopen("gift1.in", "r", stdin);
		freopen("gift1.out", "w", stdout);	
		// ctrl+shift+b -> c++-run
	#endif

	ll np;
	cin >> np;
	vector<string> names(np);
	unordered_map<string, ll> index;
	ll value[np]{0};
	repll(i, 0, np) {
		cin >> names[i];
		index[names[i]] = i;
	}
	string s, str;
	ll amount, total;
	while(np--) {
		cin >> s;
		cin >> amount >> total;
		repll(i, 0, total) {
			cin >> str;
			value[index[str]] += floor((float)amount/(float)total);
		}
		if(total != 0)
			value[index[s]] -= (floor((float)amount/(float)total))*total;
	}

	repll(i, 0, names.size())
		cout << names[i] << " " << value[i] << "\n";


	return 0;
}