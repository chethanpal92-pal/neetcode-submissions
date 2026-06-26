class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int sum=0;
        int left=0;
        int right=numbers.size()-1;
    for(int i=0;i<numbers.size();i++)
    for(int j=i+1;j<numbers.size();j++)
     if(target==numbers[i]+numbers[j])
         return {i+1,j+1};
    
    return {};
    }
};
