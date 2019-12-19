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
	
	int t;
	cin >> t;
	while(t--) {
		string p, hash, str;
		int i_index = -1, j_index = -1; 
		cin >> p;
		cin >> hash;
		sort(all(p));
		if(hash.length() < p.length()) {
			cout << "NO\n";
			continue;
		}
		else {
			for(int i = 0; i < hash.length(); i++) {
				str = "";
				for(int j = i; j < hash.length(); j++) {
					str += hash[j];
					sort(all(str));
					if(str == p) {
						i_index = i;
						j_index = j;
						break;
					}
				}
				if(i_index != -1) break;
			}
		}
		if(i_index != -1 && j_index != -1) cout << "YES\n";
		else cout << "NO\n";
	}



	return 0;
}
