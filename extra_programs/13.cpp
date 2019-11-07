// Problem link : https://codeforces.com/contest/79/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define rep(i,a, b) for(int i = a; i < b; i++)
#define repll(i,a, b) for(ll i = a; i < b; i++)
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define all(a) a.begin(),a.end()
 
int main() {
    ll n,m,k,t;
    cin >> n >> m >> k >> t;
    vector<pair<ll,ll>> vp;
    repll(i, 0, k) {
        ll a, b;
        cin >> a >> b;
        vp.pb({a, b});
    }
	sort(all(vp));
	/*cout << "vp = \n";
   	for(auto x : vp) {
		cout << x.first << " " << x.second << "\n";
	}*/
    repll(i, 0, t){
        ll x, y, flag = 0;
        cin >> x >> y;
        ll count = 0;
        for(auto p:vp) {
            if(p.first == x && p.second == y) {
			cout<<"Waste\n";
			flag = 1;
			break;
		}
        }
	if(flag) continue;
        for(auto p:vp) {
            if(p.first < x) 
                count++;
	    else if(p.first == x && p.second <= y)
		count++;
            else             
                break;
        }
        ll ans = (x-1)*m+y-count;
	//if(x == 2 && y == 5) cout << "count = " <<count << " ans=  " <<ans <<"\n";        
	ans = ans%3;
	//if(x == 2 && y == 5)
        //	cout << "ans = " << ans << "\n";
        if(ans == 1)cout << "Carrots\n";
        else if(ans == 2)cout << "Kiwis\n";
        else if(ans == 0)cout << "Grapes\n";
        
    }
    
    return 0;
}