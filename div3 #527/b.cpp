#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
        int n, i, j;
	cin >> n;
	vector<int> v(n);
   	for(i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int sum = 0;
	i = 0;
	while(1) {
		if(i >= n) break;
		sum += abs(v[i]-v[i+1]);
		i += 2;
	}
 
	cout << sum << "\n";
        
        return 0;
}   