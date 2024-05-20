#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
   
    int ans = 0;
    map<int, int> Traveled;
 queue<int> qu;
    qu.push(x);
        
    while (qu.size()) {
        int sz = qu.size();

        for (int j = 0; j < sz; j++) {
            int k = qu.front();
            qu.pop();

            if (k > 1e4 or k < 0) continue;

            if (k == y) return ans;

            if (k % 11 == 0 and Traveled[k / 11] == 0) {
                Traveled[k / 11] = 1;
                qu.push(k / 11);
            }

            if (k % 5 == 0 and Traveled[k / 5] == 0) {
                Traveled[k / 5] = 1;
                qu.push(k / 5);
            }

            if (k > 0 and Traveled[k - 1] == 0) {
                Traveled[k - 1] = 1;
                qu.push(k - 1);
            }

            if (Traveled[k + 1] == 0) {
                Traveled[k + 1] = 1;
                qu.push(k + 1);
            }
        }

        ans++;
    }

    return ans;
}

};