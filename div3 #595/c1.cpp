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
	
	int q;
	cin >> q;
	while(q--) {
		int n, m;
		cin >> n;
		while(1) {
			m = n;
			int flag = 1;
			while(n > 0) {
				int rem = n%3;
				//cout << "rem = " << rem << "\n";
				if(rem > 1) {
					//cout << "##\n";
					flag = 0;
					break;
				}
				n = n/3;
			}
			if(flag) {
				//cout << "#\n";
				cout << m << "\n";
				break;
			}
			else n = m, n++;
		}
 
 
 
	}	
 
	return 0;
}