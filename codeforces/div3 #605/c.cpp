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
	ll n, k;
	cin >> n >>k;
	string s;
	cin >> s;
	set<char> st;
	repll(i, 0, k) {
		char ch;
		cin >> ch;
		st.insert(ch);
	}
	ll count = 0, total = 0;
	rep(i, 0, n) {
		if(st.find(s[i]) != st.end()) 
			count++;
		else {
			total += count*(count+1)/2;
			count = 0;
		}
		//cout << "count = " << count << "\n";
	}
	if(count != 0) total += count*(count+1)/2;
	cout << total << "\n";

	return 0;
}
