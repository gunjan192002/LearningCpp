#include <bits/stdc++.h>
using namespace std;
// 2023-12-30 20:31:26
// GUNJAN AGRWAL
// Linkedin: https://www.linkedin.com/in/gunjan-agrawal-537929229/
// Codeforces: https://codeforces.com/profile/Doby_Deol
// Codechef: https://www.codechef.com/users/gunjan192002
#define fastio() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define MAX 1000000007
#define pb push_back
#define f first
#define s second
#define rep(i, j) for (int i = 0; i < j; i++)
#define vvi vector<vector<int>>

typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;

vector<vector<string>> squares;
//asdf
void precompute() {
    vector<string> temp = {"1"};
    vector<string> specialNumbers = {"169", "961", "196"};
    squares.pb(temp);
    squares.pb(specialNumbers);

    for (int i = 5; i <= 99; i += 2) {
         vector<string> nh;
        int ind = i / 2;
        string num = "";
        for (int j = 0; j < squares[ind - 1].size(); j++) {
            string pp = squares[ind - 1][j];
            pp += "00";
            nh.pb(pp);
        }
        for (int j = 0; j < i; j++) {
            if (j == 0) {
                num.pb('1');
            } else if (j == i / 2) {
                num.pb('6');
            } else if (j == i - 1) {
                num.pb('9');
            } else {
                num.pb('0');
            }
        }
        nh.pb(num);
        num = "";
        for (int j = 0; j < i; j++) {
            if (j == 0) {
                num.pb('9');
            } else if (j == i / 2) {
                num.pb('6');
            } else if (j == i - 1) {
                num.pb('1');
            } else {
                num.pb('0');
            }
        }
        nh.pb(num);
        squares.pb(nh);
    }
}

int main() {
    fastio();
    int t = 1;
    cin >> t;

    precompute();

    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < squares[n / 2].size(); i++) {
            cout << squares[n / 2][i] << endl;
        }
    }

    return 0;
}
