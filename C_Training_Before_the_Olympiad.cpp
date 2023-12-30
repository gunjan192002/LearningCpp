#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Process each prefix of the array
        for (int k = 1; k <= n; ++k) {
            vector<int> prefix(a.begin(), a.begin() + k);
            sort(prefix.begin(), prefix.end());

            int masha = 0, olya = 0;
            bool mashaTurn = true;

            while (!prefix.empty()) {
                if (mashaTurn) {
                    masha += prefix.back();
                } else {
                    olya += prefix.back();
                }

                prefix.pop_back();
                if (!prefix.empty()) {
                    mashaTurn = !mashaTurn;
                }
            }

            cout << (masha - olya) << " ";
        }

        cout << endl;
    }

    return 0;
}