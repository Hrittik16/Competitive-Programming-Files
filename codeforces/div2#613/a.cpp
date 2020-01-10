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

    int n;
    cin >> n;
    int pos = 0, left = 0, right = 0;
    repll(i, 0, n) {
        char ch;
        cin >> ch;
        if(ch == 'L') left++;
        else if(ch == 'R') right++;
    }

    cout << left+right+1 << "\n";



    return 0;
}