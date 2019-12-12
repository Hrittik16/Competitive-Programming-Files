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
	string s;
	cin >> s;
	
	int count = 0;

	stack<char> st;

	rep(i, 0, s.length()) {
		if(s[i] == '(') st.push(s[i]);
		else if(s[i] == ')') {
			if(!st.empty()) {
				count += 2;
				st.pop();
			}
		}
	}

	cout << count << "\n";

	return 0;
}