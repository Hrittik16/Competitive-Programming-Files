// Problem link : https://codeforces.com/contest/688/problem/B

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
	
	string n;
	cin >> n;
	deque<char> dq;
	for(int i = n.length()-1; i >= 0; i--) {
		dq.push_front(n[i]);
		dq.push_back(n[i]);
	}
	for(auto x: dq) cout << x;
	cout << "\n";
	
	/* ***********************************************************

	Better Solution

	string n;
	cin >> n;
	string d = n;
	reverse(all(d));
	cout << n << d << "\n";
	
	*/

	return 0;
}