class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int n:nums){
            map[n]++;
        }
        vector<vector<int>> buk(nums.size()+1);
        for(auto it:map){
            int freq=it.second;
            buk[freq].push_back(it.first);
        }
        vector<int> ans(k);
        int idx=0;
        for(int i=buk.size()-1;i>=0 && idx<k;i--){
            for(int n:buk[i]){
                ans[idx++]=n;
                if(idx==k) break;
            }
        }
        return ans;
    }
};
