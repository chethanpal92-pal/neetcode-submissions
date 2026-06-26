class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int res=*max_element(piles.begin(),piles.end());
        int r=res;

        while(l<=r)
        {
            int k=(l+r)/2;

            long long totaltime=0;
            for(int p:piles)
            totaltime+=ceil(static_cast<double>(p)/k);
            if(totaltime<=h)
            {
                res=k;
                r=k-1;
            }
            else
            {
                l=k+1;
            }


        }
        return res;
    }
};
