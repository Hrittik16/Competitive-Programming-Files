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
		int a, b, c;
		cin >> a >> b >> c;
		int ans = abs(a-b)+abs(a-c)+abs(b-c);
		for(int i = -1; i <= 1; i++) {
			for(int j = -1; j <= 1; j++) {
				for(int k = -1; k <= 1; k++) {
					int aa = a+i;
					int bb = b+j;
					int cc = c+k;
					int temp = abs(aa-bb)+abs(aa-cc)+abs(bb-cc);
					ans = min(ans, temp);
				}
			}
		}
		cout << ans << "\n";
	}
	
	return 0;
}
