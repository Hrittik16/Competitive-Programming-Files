#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

ll check(ll n, ll k) {
	map<ll, ll> ans;
	queue<ll> q;
	for(ll i = 0; i <= 30; i++) {
		if(n & (1<<i)) {
			ans[1<<i]++;
			if(i > 0) q.push(1<<i);
		}
	}
	ll size = 0;
	if((int)ans.size() > k) {
		return -1;
	}
	else {
		size = (int)ans.size();
		while(!q.empty() && size < k) {
			ll z = q.front();
			q.pop();
			ans[z]--;
			ans[z/2]++;
			if(z/2 > 1) {
				q.push(z/2);
				q.push(z/2);
			}
			size++;
		}
	}
	if(size < k) return -1;
	return size;
}

int main() {
	
	ll n, p, m, k = 0, flag = 1, bit;
	cin >> n >> p;
	m = n;
	if(p == 0) {
		cout << __builtin_popcount(n) << "\n";
		return 0;
	}
	if(p >= 1) {
		while(1) {
			m -= p;
			k++;
			if(m <= 0) {
				flag = 0;
				break;
			}
			bit = __builtin_popcount(m);
			if(bit < k) {
				bit = check(m, k);
				if(bit != -1) break; 
			}
			else if(bit > k) {
				continue;
			}
			else break;
		}
		if(flag) cout << bit << "\n";
		else cout << "-1\n";
	}
	else {
		while(1) {
			m -= p;
			k++;
			if(k*p > n) {
				flag = 0;
				break;
			}
			bit = __builtin_popcount(m);
			if(bit < k) {
				bit = check(m, k);
				if(bit != -1) break; 
			}
			else if(bit > k) {
				continue;
			}
			else break;
		}
		if(flag) cout << bit << "\n";
		else cout << "-1\n";	
	}



 
	return 0;
}