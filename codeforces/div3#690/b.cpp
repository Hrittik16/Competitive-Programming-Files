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

		if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[s.length() - 1] == '0') {
			cout << "YES\n";
		}
		else if (s[0] == '2' && s[s.length() - 3] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0') {
			cout << "YES\n";
		}
		else if (s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
			cout << "YES\n";
		else if (s[s.length() - 4] == '2' && s[s.length() - 3] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
			cout << "YES\n";
		else if (s[0] == '2' && s[1] == '0' && s[s.length() - 2] == '2' && s[s.length() - 1] == '0')
			cout << "YES\n";
		else
			cout << "NO\n";
	}




	return 0;
}
