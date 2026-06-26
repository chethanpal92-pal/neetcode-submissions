class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int start=0 ,end=rows*col-1;

        while(start<=end){
            int mid=start+(end-start)/2;
             int midvalue=matrix[mid/col][mid%col];
             if(target==midvalue)
             {
                return true;
             }
             else if(target<midvalue)
             {
                 end=mid-1;
                
             }
             else{
               start=mid+1;
             }

        }
        return false;
    }
};
