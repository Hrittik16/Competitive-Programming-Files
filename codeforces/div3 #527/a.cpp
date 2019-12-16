#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(),v.end()
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
 
int main() {
	int t, n, i, j, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		string s;
		int count = 0;
		char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
				'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 
				'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
				'y', 'z'};
		j = 0;
		for(i = 0; i < n; i++) {
			s += arr[j];
			if(j == k-1) {
				j = 0;
				continue;
			}
			j++;	
		}
		cout << s << "\n";
	}	
 
 
 
	return 0;
}