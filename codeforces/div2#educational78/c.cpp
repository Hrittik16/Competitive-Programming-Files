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
	ll t;
	cin >> t;
	while(t--) {
		ll n, one = 0, two = 0;
		cin >> n;
		vl a(2*n);
		repll(i, 0, 2*n) {
			cin >> a[i];
			if(a[i] == 1) one++;
			else if(a[i] == 2) two++;
		}
		ll i = n-1, j = n, count = 0;
		while(1) {
			if(one == two) break;
			if(one == 0) {
				count += two;
				break;
			}
			if(two == 0) {
				count += one;
				break;
			}
			if(a[i] == 1 && a[j] == 2) {
				if(one > two) {
					i--;
					one--;
					count++;
				}
				else {
					j++;
					two--;
					count++;
				}
			}
			else if(a[i] == 1 && a[j] == 1) {
				if(i > 0) i--;
				else j++;
				one--;
				count++;
			}
			else if(a[i] == 2 && a[j] == 1) {
				if(one > two) {
					j++;
					one--;
					count++;
				}
				else {
					i--;
					two--;
					count++;
				}
			}
			else if(a[i] == 2 && a[j] == 2) {
				if(i > 0) i--;
				else j++;
				two--;
				count++;
			}
		}
		cout << count << "\n";
	}




	return 0;
}
