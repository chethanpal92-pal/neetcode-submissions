class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>find_num;
        int i=0;

        while(i<nums.size()){
            int complement=target-nums[i];
            if(find_num.find(complement)!=find_num.end()){
                return {find_num[complement],i};
            }
            else{
                find_num.insert({nums[i],i});
                i++;
            }
        }
    }
};
