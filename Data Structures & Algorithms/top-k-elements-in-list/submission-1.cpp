class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int>count;
        for(auto n:nums){
            count[n]++;
        }
        vector<pair<int,int>>ans;
        for(auto p:count)
        ans.push_back({p.second,p.first});
        sort(ans.rbegin(),ans.rend());
        vector<int>res;

        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }
        return res;
    }
};
