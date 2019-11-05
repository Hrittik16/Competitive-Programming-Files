// Problem Link : https://codeforces.com/contest/47/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector< vi >
#define vvl vector< vl >
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpii vector< pii >
#define vpll vector< pll >
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define F first
#define S second
#define string_to_int(s) stoi(s)
#define string_to_ll(s) stoll(s)
#define int_to_string(n) to_string(n)
#define ll_to_string(n) to_string(n)
#define char_to_int(c) c-'0'
#define int_to_char(c) c+'0'
#define trace(x) cerr << #x << ": " << x << "\n";
 
 
int main() {
	
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	
	if(s1[1] == '>') swap(s1[0], s1[2]), s1[1] = '<';
	if(s2[1] == '>') swap(s2[0], s2[2]), s2[1] = '<';
	if(s3[1] == '>') swap(s3[0], s3[2]), s3[1] = '<';
	//cout << "s1 = " << s1 << " s2 = " << s2 << " s3 = " << s3 << "\n";
	map<char, int> mp;
	mp[s1[0]]++;
	mp[s2[0]]++;
	mp[s3[0]]++;
 
	string str;
	vi v;
	for(auto y: mp) {
		v.pb(y.second);	
	}
	if((v[0] == 1 && v[1] == 2) || (v[0] == 2 && v[1] == 1)) {
			for(auto x: mp) {
				if(x.second == 1) {
					if(str.empty())
						str += x.first;
					else
						str.insert(str.begin()+1, x.first);
 
				}
				else {
					str.insert(str.begin(), x.first);
				}
			}
			if(str[0] == 'A' && str[1] == 'B')
				cout << str << "C\n";
			else if(str[0] == 'B' && str[1] == 'A')
				cout << str << "C\n";
			else if(str[0] == 'A' && str[1] == 'C')
				cout << str << "B\n";
			else if(str[0] == 'C' && str[1] == 'A')
				cout << str << "B\n";
			else if(str[0] == 'B' && str[1] == 'C')
				cout << str << "A\n";
			else if(str[0] == 'C' && str[1] == 'B')
				cout << str << "A\n";
	}
	else cout << "Impossible\n";
 
 
	return 0;
}