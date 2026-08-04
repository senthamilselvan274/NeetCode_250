class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool dup=false;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                dup=true;
                break;
            }
        }
        return dup;
    }
};