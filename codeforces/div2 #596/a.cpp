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
	
	int da, db;
	cin >> da >> db;
	if(da == db-1 || da == db) {
		if(da == db-1) {
			cout << da << "9 " << db << "0\n";
		}
		else {
			cout << da << "1 " << db << "2\n";
		}
	}
	else if(da == 9 && db == 1) {
		cout << "99 100\n";
	}
	else
		cout << "-1\n";
 
 
 
 
 
 
	return 0;
}