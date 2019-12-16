#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	int n, k, i, j;
	cin >> n >> k;
	map<int, int> m;
	queue<int> q;
	for(i = 0; i <= 30; i++) {
		if(n & (1 << i)) {
			m[1 << i]++;
			if(i > 0) q.push(1 << i);
		}
	}
 
	//cout << "m = \n";
	//for(auto it = m.begin(); it != m.end(); it++) cout << "it->first = " << it->first << " " << "it->second = " << it->second << "\n";
 
	if((int)m.size() > k) cout << "NO\n";
	else {
		int size = (int)m.size();
		int z;
		while(size < k && !q.empty()) {
			z = q.front();
			//cout << "Queue = ";
			//cout << q.front() << "\n";
			q.pop();
			//cout << "Queue = " << q.front() << "\n";
			m[z]--;
			m[z/2] += 2;
			if(z/2 > 1) {
				q.push(z/2);
				q.push(z/2);
			}
			size++;
		}
		if(size < k) cout << "NO\n";
		else {
			cout << "YES\n";
			for(auto x : m) {
				for(i = 0; i < x.second; i++) {
					cout << x.first << " ";
				}
			}
			cout << "\n";
		}
	}
	
	
	return 0;
}