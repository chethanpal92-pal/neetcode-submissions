class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>res(temperatures.size(),0);
        stack<pair<int,int>>temp_stack;

        for(int i=0;i<temperatures.size();i++){
            int t=temperatures[i];
            while(!temp_stack.empty() && t>temp_stack.top().first){
                auto pair=temp_stack.top();
                temp_stack.pop();
                res[pair.second]=i-pair.second;
            }
            
                temp_stack.push({t,i});
        
            
        }
        return res;
    }
};
