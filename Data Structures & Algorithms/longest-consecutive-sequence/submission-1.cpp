class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        int longest=0;
        for(auto n:nums)
       {
        if(numset.find(n-1)==numset.end())
        { 
          int length=0;
          while(numset.find(n+length)!=numset.end())
           length++;
         longest=max(longest,length);
        }
       }
       return longest;

    }
};
