// Problem Link : https://codeforces.com/contest/1097/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

ll flag = 0, n;
vi a;
void fun(ll curr, ll sum) {
	if(curr >= n) {
		if(sum%360 == 0) flag = 1;
		return;
	}
	fun(curr+1, sum+a[curr]);
	fun(curr+1, sum-a[curr]);
}

int main() {
	ll sum = 0;
	cin >> n;
	a.resize(n);
	repll(i, 0, n) {
		cin >> a[i];
		sum += a[i];
	}
	if(sum%360 == 0) cout << "YES\n";
	else {
		fun(0, 0);
		if(flag) cout << "YES\n";
		else cout << "NO\n";	
	}


	return 0;
}