class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort( nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++)
        {
            if(i==0||(i>0&&nums[i]!=nums[i+1]))
            {
                int lo=i+1;int hi=nums.size()-1;sum=-nums[i];
                while(lo<hi)
                {
                    if(nums[lo]+nums[hi]==sum)
                    {
                        vector<int>temp;
                        temp.push_back(i);
                        temp.push_back(lo);
                        temp.push_back(hi);
                        ans.push_back(temp);
                        while(nums[lo]==nums[lo+1])lo++;
                        while(nums[hi]==nums[hi-1])hi--;

                    }
                    else if(nums[lo]+nums[hi]<sum)
                    {
                        lo++;
                    }
                    else {hi++;}
                }

            }

        }

     return ans;
    }
};