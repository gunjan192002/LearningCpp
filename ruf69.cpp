using namespace std;

class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
       
        long long result = 0;
        unordered_map<int, long long> CD;
         unordered_map<int, int> f1;
        for (int num : nums1) {
            ++f1[num];
        }

        for (int num : nums2) {
            long long residue = static_cast<long long>(num) * k;
            if (CD.count(residue)) {
                result += CD[residue];  
                continue;
            }
            
            long long currentCount = 0;
            for (long long mple= residue; mple<= 1000000; mple+= residue) {
                if (f1.count(mple)) {
                    currentCount += f1[mple];
                }
            }

            CD[residue] = currentCount;
            result += currentCount;
        }

        return result;
    }
};