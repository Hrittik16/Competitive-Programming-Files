#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'gameOfStones' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER n as parameter.
 */

int dp[1000][1000];

int evaluate(int n, int p) {
    if(p == 1) {
        if(n == 2 || n == 3 || n == 5) {
            dp[n][p] = 1;
        }
        if(dp[n][p] != 0) return dp[n][p];
        if(n > 5) {
            dp[n][p] = max(evaluate(n-2, 2), max(evaluate(n-3, 2), evaluate(n-5, 2)));
        }
        else if(n > 3) {
            dp[n][p] = max(evaluate(n-2, 2), evaluate(n-3, 2));
        }
        else {
            dp[n][p] = -1;
        }
    }
    else {
        if(n == 2 || n == 3 || n == 5) {
            dp[n][p] = -1;
        }
        if(dp[n][p] != 0) return dp[n][p];
        if(n > 5) {
            dp[n][p] = min(evaluate(n-2, 1), min(evaluate(n-3, 1), evaluate(n-5, 1)));
        }
        else if(n > 3) {
            dp[n][p] = min(evaluate(n-2, 1), evaluate(n-3, 1));
        }
        else {
            dp[n][p] = 1;
        }
    }
    return dp[n][p];
}

string gameOfStones(int n) {
    for(int i = 0; i < 1000; i++) {
        for(int j = 0; j < 1000; j++)
            dp[i][j] = 0;
    }
    int first_win = evaluate(n, 1);
    if(first_win == 1) return "First";
    else return "Second";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string result = gameOfStones(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
