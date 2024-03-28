#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)

bool check(string s1, string s2) {
	int count = 0;
	string temp = s2;
	int len = (s1.length()/s2.length())-1;
	rep(i, 0, len) s2 += temp;
	//cout << "len = " << len << " s2 = " << s2 << "\n";
	rep(i, 0, s1.length()) {
		if(s1[i] != s2[i]) count++;
	}
	if(count <= 1) return 1;
	else return 0;
}

int32_t main() {

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int flag = 0, ans = n;
		rep(i, 0, n/2) {	
			if(n%(i+1) != 0) continue;
			string s2, s3;
			s2 = s.substr(0, i+1);
			s3 = s.substr(i+1, i+1);
			if(check(s, s2) || check(s, s3)) {
				flag = 1;
				ans = i+1;
			}
			if(flag) break;
		}
		cout << ans << "\n";
	}


	return 0;
}
