class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i=0;
        int left=1;
        int right=nums.size()-1;
        sort(nums.begin(),nums.end());
      
        vector<vector<int>>carry_array;

        for(i=0;i<nums.size()-2;i++){
       
            if (i > 0 && nums[i] == nums[i - 1]) 
            continue;

            int left=i+1;
        int right=nums.size()-1;

           while(left<right){
            int sum=nums[i]+nums[left]+nums[right];
           if(sum>0){
            right--;
           } 
           else if(sum<0){
            left++;
           }
           else if(sum==0)
         { 
            carry_array.push_back({nums[i],nums[left],nums[right]});
             left++;
             right--;
            while (left < right && nums[left] == nums[left - 1])
                        left++;
            while (left < right && nums[right] == nums[right + 1])
                        right--;
         }
          
            
        }
        
     }
     return carry_array;
        
    }
};
