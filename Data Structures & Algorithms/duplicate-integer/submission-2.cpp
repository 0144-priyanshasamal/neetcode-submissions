class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> sr;
        for(int x:nums){
            if(sr.count(x))
            return true;

            sr.insert(x);
        }
        return false;
    }

};