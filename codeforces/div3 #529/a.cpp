#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define rep(i, a, b) for(i = a; i < b; i++)
#define M 1e9+7
#define all(v) v.begin(), v.end()
 
int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int k = 0;
	int p = 1;
	while(1) {
		cout << s[k];
		k += p;
		p++;
		if(k > s.length()-1) break;
	}
	cout << "\n";
 
 
 
	return 0;
}