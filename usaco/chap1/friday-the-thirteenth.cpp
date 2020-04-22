/*
ID: hrittik3
LANG: C++
TASK: friday
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define repll(i, a, b) for(ll i = a; i < b; i++)
#define pb push_back
#define all(x) x.begin(),x.end()
#define ONLINE_JUDGE

int main() {

	#ifdef ONLINE_JUDGE
		freopen("friday.in", "r", stdin);
		freopen("friday.out", "w", stdout);	
	#endif

	int n, curr_year = 1900, leap = 0, add = 0;
	cin >> n;
	vector<int> fre(7, 0);
	rep(i, 0, n) {
		if(curr_year%4 == 0) {
			if(curr_year%100 == 0) {
				if(curr_year%400 == 0)
					leap = 1;
				else 
					leap = 0;
			}
			else
				leap = 1;
		}
		else
			leap = 0;

		rep(j, 0, 12) {
			if(j == 3 || j == 5 || j == 8 || j == 10) {
				// 30 days
				fre[(12+add)%7]++;
				add += 30;
			}
			else if(j == 1) {
				if(leap) {
					// 29 days
					fre[(12+add)%7]++;
					add += 29;
				}
				else {
					// 28 days
					fre[(12+add)%7]++;
					add += 28;
				}
			}
			else {
				// 31 days
				fre[(12+add)%7]++;
				add += 31;
			}
		}
		curr_year++;
	}

	cout << fre[5] << " " << fre[6] << " ";
	rep(i, 0, 5)
		cout << fre[i] << " ";
	cout << "\n";

	return 0;
}