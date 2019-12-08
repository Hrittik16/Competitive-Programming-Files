// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380

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
	string s1, s2;
	while(cin >> s1 >> s2) {
		//cout << "#\n";
		vector<vector<bool>> grid(9, vector<bool>(9, 0));
		queue<string> q;
		vector<vector<int>> dist(9, vector<int>(9, 0));
		q.push(s1);
		grid[(int)(s1[0])-96][(int)(s1[1]-48)] = 1;
		while(!q.empty()) {
			//cout << "#\n";
			string curr = q.front();
			string curr1 = curr;
			q.pop();
			if(curr == s2) {
				//cout << "curr = " << curr << "\n";
				cout << "To get from " << s1 << " to " << s2 << " takes ";
				cout << dist[(int)(curr[0])-96][(int)(curr[1]-48)];
				cout << " knight moves.\n";
				break;
			}
			// 1
			//cout << (char)(curr[0]+1) << " " << (char)(curr[1]+2) << "\n";
			//cout << grid[(int)(curr[0])-96][(int)(curr[1])] << "\n";
			if((char)(curr[0]+1) <= 'h' && (char)(curr[1]+2) <= '8' && grid[(int)(curr[0]+1)-96][(int)(curr[1]+2)-48] == 0) {
				//cout << "1\n";
				curr[0]++;
				curr[1] += 2;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]-1)-96][(int)(curr[1]-2)-48] + 1;	
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 2
			if((char)(curr[0]-1) >= 'a' && (char)(curr[1]+2) <= '8' && grid[(int)(curr[0]-1)-96][(int)(curr[1]+2)-48] == 0) {	
				//cout << "2\n";
				curr[0]--;
				curr[1] += 2;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]+1)-96][(int)(curr[1]-2)-48] + 1;
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 3
			if((char)(curr[0]+2) <= 'h' && (char)(curr[1]+1) <= '8' && grid[(int)(curr[0]+2)-96][(int)(curr[1]+1)-48] == 0) {	
				//cout << "3\n";
				curr[0] += 2;
				curr[1]++;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]-2)-96][(int)(curr[1]-1)-48] + 1;	
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 4
			if((char)(curr[0]+2) <= 'h' && (char)(curr[1]-1) >= '1' && grid[(int)(curr[0]+2)-96][(int)(curr[1]-1)-48] == 0) {
				//cout << "4\n";
				curr[0] += 2;
				curr[1]--;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]-2)-96][(int)(curr[1]+1)-48] + 1;	
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 5
			if((char)(curr[0]-2) >= 'a' && (char)(curr[1]+1) <= '8' && grid[(int)(curr[0]-2)-96][(int)(curr[1]+1)-48] == 0) {
				//cout << "5\n";
				curr[0] -= 2;
				curr[1]++;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]+2)-96][(int)(curr[1]-1)-48] + 1;	
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 6
			if((char)(curr[0]-2) >= 'a' && (char)(curr[1]-1) >= '1' && grid[(int)(curr[0]-2)-96][(int)(curr[1]-1)-48] == 0) {
				//cout << "6\n";
				curr[0] -= 2;
				curr[1]--;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]+2)-96][(int)(curr[1]+1)-48] + 1;
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 7
			if((char)(curr[0]+1) <= 'h' && (char)(curr[1]-2) >= '1' && grid[(int)(curr[0]+1)-96][(int)(curr[1]-2)-48] == 0) {
				//cout << "7\n";
				curr[0]++;
				curr[1] -= 2;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]-1)-96][(int)(curr[1]+2)-48] + 1;
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			// 8
			if((char)(curr[0]-1) >= 'a' && (char)(curr[1]-2) >= '1' && grid[(int)(curr[0]-1)-96][(int)(curr[1]-2)-48] == 0) {
				//cout << "8\n";
				curr[0]--;
				curr[1] -= 2;
				q.push(curr);
				grid[(int)(curr[0])-96][(int)(curr[1]-48)] = 1;
				dist[(int)(curr[0])-96][(int)(curr[1]-48)] = dist[(int)(curr[0]+1)-96][(int)(curr[1]+2)-48] + 1;
				//cout << dist[(int)(curr[0])-96][(int)(curr[1])] << "\n";
				curr = curr1;
			}
			//cout << "#\n";
		}				
	}	
	return 0;
}
