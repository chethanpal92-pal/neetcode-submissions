class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<double,double>>pairs(n);
        for(int i=0;i<n;i++){
            pairs[i]={position[i],speed[i]};
        }
        sort(pairs.begin(),pairs.end(),[](pair<double,double>&a,pair<double,double>&b)
        {
            return b.first<a.first;
        
        });

        int fleet=0;
        double lasttime=0;
        for(int i=0;i<n;i++){
            double timetoreach=(target-pairs[i].first)/pairs[i].second;
            if(timetoreach>lasttime){
                fleet++;
                lasttime=timetoreach;
            }


        }
        return fleet;
    }
};
