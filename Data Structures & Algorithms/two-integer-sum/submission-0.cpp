class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            int bro=target-nums[i];
            if(map.find(bro)!=map.end()){
                return {map[bro],i};
            }
            map[nums[i]]=i;
        }
        return {-1,-1};
    }
};
