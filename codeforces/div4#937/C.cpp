#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define f first
#define s second
#define pb push_back
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)

int32_t main() {

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		
		char s2 = s[0];
		char s3 = s[1];
		int num = ((s2-48) *10 + (s3-48));
		char s4 = s[3];
		char s5 = s[4];
		if(num < 12 && num != 0) {
			if(num < 10) cout << "0";
			cout << num << ":" << s4 << s5 << " AM" << "\n";
		}
		else if(num == 12 || num==0) {
			cout << "12:" << s4 << s5;
			if(num == 12) cout << " PM\n";
			else cout << " AM\n";
		}
		else {
			if(num%12 < 10) cout << "0";
			cout << num%12 << ":" << s4 << s5 << " PM\n";
	
		}
	}


	return 0;
}
