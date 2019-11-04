// Problem link : https://codeforces.com/contest/66/problem/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i, j, k;
    cin >> n;
    vector<int> h(n);
    for(i = 0; i < n; i++) cin >> h[i];
    int count = 1, mx = 1;
    for(i = 0; i < n; i++) {
        count = 1;
        if(i == 0) {
            for(j = i+1; j < n; j++) {
                if(h[j] <= h[j-1])
                    count++;
                else
                    break;
            }
        }
        else if(i == n-1) {
            for(j = i-1; j >= 0; j--) {
                if(h[j] <= h[j+1])
                    count++;
                else
                    break;
            }
        }
        else {
            for(j = i-1; j >= 0; j--) {
                if(h[j] <= h[j+1])
                    count++;
                else 
                    break;
            }
            for(k = i+1; k < n; k++) {
                if(h[k] <= h[k-1])
                    count++;
                else 
                    break;
            }
        }
        mx = max(mx, count);
    }
    
    cout << mx << "\n";
    
    
    return 0;
}