class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n =position.size();
        vector<pair<double,double>>pairs(n);
        for(int i=0;i<n;i++){
            pairs[i]={position[i],speed[i]};
        }
    sort(pairs.begin(),pairs.end(),[]
    (const pair<double,double>&a,const pair<double,double>&b){
    return b.first<a.first;
    
    });
    int fleetcount=0;
    vector<double>timetoreach(n);
    for(int i=0;i<n;i++)
    {
        timetoreach[i]=(target-pairs[i].first)/pairs[i].second;
        if(i>=1 && timetoreach[i]<=timetoreach[i-1]){
            timetoreach[i]=timetoreach[i-1];
        }
        else
        fleetcount++;
    }
    return fleetcount;
    }
};
