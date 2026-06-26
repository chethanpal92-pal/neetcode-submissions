class Solution {
public:
    int maxArea(vector<int>& heights) {
int left=0;
int right=heights.size()-1;
int area=0,result=0;
   while(left<right)
   {
    area=(right-left)*min(heights[right],heights[left]);
    result=max(area,result);
    if(heights[left]<=heights[right]){
        left++;
    }
    else
     right--;
   }
   return result;
   
    }

};
