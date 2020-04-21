/*
ID: hrittik3
LANG: C++
TASK: ride
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
		freopen("ride.in", "r", stdin);
		freopen("ride.out", "w", stdout);	
		// ctrl+shift+b -> c++-run
	#endif

	int val1 = 1, val2 = 1;

	string s1, s2;
	cin >> s1 >> s2;

	for(auto x: s1)
		val1 *= (x-'A')+1;
	for(auto x: s2) 
		val2 *= (x-'A')+1;

	
	if(val1%47 == val2%47)
		cout << "GO\n";
	else
		cout << "STAY\n";

	return 0;
}