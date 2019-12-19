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
	ll n, p, t; 
	cin >> n >> p >> t;
	ll count = 0;
    for(int i = 0; i < t; i++) {
        if(i%9 == 4) count++;
        else if(i%9 == 5) count--;
        else if(i%9 == 6 || i%9 == 7 || i%9 == 8) count++; 
    }
    if(p <= count || p > n+count) cout << "-1\n";
    else cout << p-count << "\n";

	return 0;
}