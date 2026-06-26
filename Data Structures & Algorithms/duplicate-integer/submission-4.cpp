class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> array_d;

        for(int i=0;i<nums.size();i++){
            if(array_d.find(nums[i])!=array_d.end()){
                return true;
            }
            else{
                array_d[nums[i]]++;

            }

        }
        return false;
    }
};