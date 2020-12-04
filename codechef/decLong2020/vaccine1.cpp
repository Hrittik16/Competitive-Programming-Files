#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll d1, v1, d2, v2, p;
	cin >> d1 >> v1 >> d2 >> v2 >> p;
	ll total = 0, day = 0;
	while (total < p) {
		day++;
		if (d1 <= day) total += v1;
		if (d2 <= day) total += v2;
	}

	cout << day << "\n";


	return 0;
}