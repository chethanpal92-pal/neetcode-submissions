class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size(),m=s2.size();
        if (n>m)return false;
        unordered_map<char,int>hash1,hash2;
        for(int i=0;i<n;i++)
        {
            hash1[s1[i]]++;
            hash2[s2[i]]++;

        }
        if(hash1==hash2)return true;

        //slide window

        for(int i=n;i<m;i++){
            hash2[s2[i]]++;
            hash2[s2[i-n]]--;
            if(hash2[s2[i-n]]==0)
             hash2.erase(s2[i-n]);
            if(hash1==hash2)
             return true;
        }
        
     return false;
    }
 

};
