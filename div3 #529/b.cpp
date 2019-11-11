#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define rep(i, a, b) for(i = a; i < b; i++)
#define M 1e9+7
#define all(v) v.begin(), v.end()
 
int main() {
	int n;		
	cin >> n;
	vector<int> v(n);
	int i, j;
	rep(i,0,n) cin >> v[i];
	sort(v.begin(), v.end());
	int m = min(v[n-1]-v[1], v[n-2]-v[0]);
	cout << m << "\n";
 
	return 0;
}