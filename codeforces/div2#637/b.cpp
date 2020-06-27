#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

bool isPeak(vl& a, ll num, ll i, ll j) {
	ll n = a.size();
	if(i >= 0 && a[i] >= num)
		return 0;
	if(j < n && a[j] >= num)
		return 0;
	return 1;
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		vl a(n);
		vector<bool> peak(n, 0);
		repll(i, 0, n)
			cin >> a[i];
		repll(i, 1, n-1) {
			if(isPeak(a, a[i], i-1, i+1))
				peak[i+1] = 1;
		}
		//cout << "Peak = ";
		//for(auto x: peak)
		//	cout << x << " ";
		//cout << "\n";
		ll mx = -1, count = 0, num = 1;
		repll(i, 0, n-k+1) {
			count = 0;
			repll(j, i, i+k) {
				if(j == i && peak[j] == 1)
					continue;
				if(peak[j] == 1) {
					count++;
				}
			}
			if(count > mx) {
				mx = count;
				num = i+1;
			}
		}
		if(mx == 0)
			cout << "0 1\n";
		else
			cout << mx+1 << " " << num << "\n";
	}




	return 0;
}
