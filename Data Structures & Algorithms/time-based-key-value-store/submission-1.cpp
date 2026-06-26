class TimeMap {
public:
  unordered_map<string,vector<pair<int,string>>>store;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        int l=0;
        auto p= store[key];
        int r=p.size()-1;
        string result;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(p[mid].first<=timestamp){
                result=p[mid].second;
                l=mid+1;
            }
            else
            r=mid-1;

        }
        return result;
        
    }
};
