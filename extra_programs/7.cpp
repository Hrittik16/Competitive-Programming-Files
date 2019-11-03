// Problem link : https://codeforces.com/contest/451/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define vi vector<int>
#define vvi vector<vi>
#define vl vector<ll>
#define vvl vector<vl>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define max(x, y) (x>y)?x:y
#define min(x, y) (x>y)?y:x
#define pb push_back
#define F first
#define S second
#define sv() int t; scanf("%d", &t); while(t--)
//#define shitty_io
 
 
void rev(vi& a, int x, int y) {
	int i, j = y, temp, k = x;
	vi b(y-x+1);
	for(i = y-x+1-1; i >= 0; i--) {
		b[i] = a[k];
		k++;
	}
	k = 0;
	for(i = x; i <= y; i++) {
		a[i] = b[k];
		k++;
	}
}
 
int main() {
	#ifdef shitty_io
		freopen("input.in", "r", stdin);
		freopen("output.out", "w", stdout);
	#endif
	
	int n;	
	cin >> n;
	vi a(n);
	rep(i, 0, n) cin >> a[i];
	int x = 0, y = 0;
	rep(i, 0, n-1) {
		x = i;
		y = i;
		if(a[i] > a[i+1]) {
			x = i;
			y = i+1;
			rep(j, i+1, n-1) {
				if(a[j] > a[j+1]) {
					y = j+1;	
					if(j == n-2) y = j+1;
				}
			}
			//cout << "x = " << x << " " << "y = " << y << "\n";
			rev(a, x, y);
			break;
		}
	}
	int flag = 1;
	rep(i, 0, n-1) {
		//cout << a[i] << " ";
		if(a[i] > a[i+1]) {
			flag = 0;
			break;
		}
	}
	//cout << "\n";
	if(!flag) cout << "no\n";
	else cout << "yes\n" << x+1 << " " << y+1 << "\n";
		
	return 0;
}