#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define vvi vector< vi >
#define vl vector<ll>
#define vll vector< vl >
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vpii vector< pii > 
#define vpll vector< pll >
//#define max(x, y) (x>y)?x:y
//#define min(x, y) (x>y)?y:x
#define pb push_back
#define F first
#define S second
#define sz(a) (int)((a).size())
#define sv() int t; scanf("%d", &t); while(t--)
 
 
int check(int n, int count) {
	if(n == 1) return count;
	else if(n%2 != 0 && n%3!= 0 && n%5 != 0) return -1;
	else if(n%2 == 0) {
		count++;	
		return check(n/2, count);
	}
	else if(n%3 == 0) {
		count++;	
		return check((2*n)/3, count);
	}
	else if(n%5 == 0) {
		count++;	
		return check((4*n)/5, count);
	}
}
 
signed main() {
	
	int q, n, count;
	cin >> q;
	while(q--) {
		count = 0;	
		cin >> n;
		int x = check(n, count);
		cout << x << "\n";
 
	}
 
	return 0;
}