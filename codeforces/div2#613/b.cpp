#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define rep(i, a, b) for(int i = a; i < b; i++) 
#define repll(i, a, b) for(ll i = a; i < b; i++) 
#define all(a) (a).begin(),(a).end()
#define pb push_back

long long maxSubArray1(vector<long long>& nums) {
        long long m = INT_MIN, mn = INT_MIN, prev = 0;
        for(long long i = 0; i < nums.size()-1; i++) {
            mn = max(nums[i], prev+nums[i]);
            prev = mn;
            m = max(m, mn);
        }
        return m;
}

long long maxSubArray2(vector<long long>& nums) {
        long long m = INT_MIN, mn = INT_MIN, prev = 0;
        for(long long i = 1; i < nums.size(); i++) {
            mn = max(nums[i], prev+nums[i]);
            prev = mn;
            m = max(m, mn);
        }
        return m;
}


int main() {
	ll t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		vl a(n);
		repll(i, 0, n) cin >> a[i];
		ll sum = 0;
		repll(i, 0, n) sum += a[i];
		ll sum2 = maxSubArray1(a);
		ll sum3 = maxSubArray2(a);
		
		if(sum > sum2 && sum > sum3) cout << "YES\n";
		else cout << "NO\n";

	}




	return 0;
}