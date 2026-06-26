class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
  unordered_map<int,int>check_box;
  int count=0;
   while(count<nums.size()){
    if(check_box.find(nums[count])!=check_box.end())
    {
        return true;
    }
    else
    check_box[nums[count]]++;
    count++;
    }
    return false;
  }
};
