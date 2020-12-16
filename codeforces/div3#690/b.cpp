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
	ll t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		string s;
		cin >> s;
		ll count = 0, flag = 1, count1 = 0, index1 = 0, count2 = 0, index2 = 0;
		vector<ll> index;
		for (ll i = 0; i < s.length() - 1; i++) {
			if (s[i] == '2' && s[i + 1] == '0') {
				count++;
				index.pb(i);
			}
		}
		sort(all(index));
		if (count >= 2) {
			if (index[0] == 0 && index[index.size() - 1] == s.length() - 2)
				cout << "YES\n";
			else if (index[0] == 0 && index[index.size() - 1] == 2)
				cout << "YES\n";
			else if (index[0] == s.length() - 4 && index[index.size() - 1] == s.length() - 2)
				cout << "YES\n";
			else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[s.length() - 1] == '0')
				cout << "YES\n";
			else if (s[0] == '2' && s[s.length() - 3] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
				cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}




	return 0;
}
