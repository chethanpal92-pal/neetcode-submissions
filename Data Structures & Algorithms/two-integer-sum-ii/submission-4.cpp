class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {


     unordered_map<int,int>find_num;
        int i=0;
        while(i<numbers.size())
        {
            int compliment=target-numbers[i];
            if(find_num.find(compliment)!=find_num.end())
            {
                return {find_num[compliment]+1,i+1};
            }
            else{
                find_num.insert({numbers[i],i});
            }
            i++;

        }
        return{} ;

    

  }
};

