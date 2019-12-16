#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vi >
#define vvl vector< vl >
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) a.begin(),a.end()
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define F first
#define S second
#define pb push_back
 
int main() {
 
	int n;
	cin >> n;
	string s;
	cin >> s;
	int one = 0, zero = 0;
	rep(i, 0, n) {
		if(s[i] == '0') zero++;
		else one++;
	}	
 
	if(one != zero) {
		cout << "1\n";	
		cout << s << "\n";
 
	}
	else if(n == 2) {
		cout << "2\n";
		if(s[0] != s[1]) cout << s[0] << " " << s[1] << "\n";
	}
	else {
		zero = 0;
		one = 0;
		if(s[0] == '0') zero++;
		else one++;
		rep(i, 1, s.length()) {
			if(s[i] == '0') zero++;
			else one++;
			if(one != zero) {
				cout << "2\n";
				cout << s.substr(0, i+1) << " " << s.substr(i+1, s.length()) << "\n";
				break;
			}
		}
	}
 
	
 
 
	return 0;
}