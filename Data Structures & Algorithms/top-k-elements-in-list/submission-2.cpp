class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        vector<vector<int>> bucket(nums.size()+1);
        for(auto&[nums,count]:freq)
        {
            bucket[count].push_back(nums);
        }
        vector<int>ans;
        for(int i=nums.size();i>=1&& ans.size()<k;i--){
             for (int nums : bucket[i]) {
                ans.push_back(nums);

                if (ans.size() == k)
                    break;
            }
        }
        return ans;
    }
};
