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
	
	int n, m;
	char ch;
	cin >> n >> m >> ch;
	vector<vector<char>> v(n, vector<char>(m));
	rep(i, 0, n) {
		rep(j, 0, m) 
			cin >> v[i][j];
	}
	int count = 0;
	set<char> st;
	rep(i, 0, n) {
		rep(j, 0, m) {
				if(v[i][j] == '.') continue;
				else if(v[i][j] == ch) continue;
				else {
					//cout << "\n";
					//cout << "i = " << i << "\n";
					//cout << "j = " << j << "\n";
					if(j+1 < m) {
						//cout << "1\n";
						if(v[i][j+1] == ch && st.find(v[i][j]) == st.end()) {
							//cout << "2, ";
							count++;
							st.insert(v[i][j]);
							continue;
						}
					}
					if(i+1 < n) {
						//cout << "3\n";
						if(v[i+1][j] == ch && st.find(v[i][j]) == st.end()) {
							//cout << "4, ";
							count++;
							st.insert(v[i][j]);
							continue;
						}
					}
					if(j-1 >= 0) {
						//cout << "5\n";
						if(v[i][j-1] == ch && st.find(v[i][j]) == st.end()) {
							//cout << "6, ";
							count++;
							st.insert(v[i][j]);
							continue;
						}
					}
					if(i-1 >= 0) {
						//cout << "7\n";
						if(v[i-1][j] == ch && st.find(v[i][j]) == st.end()) {
							//cout << "8, ";
							count++;
							st.insert(v[i][j]);
							continue;
						}	
					}
				}
		}
	}

	cout << count << "\n";

	return 0;
}