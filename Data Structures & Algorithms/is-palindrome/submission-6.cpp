class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.size();
        
        while(i<n)
        {
            if(!alphanum(s[i]))
            {
                s.erase(i,1);
                n--;
            }
            else
            i++;

        }
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if((tolower(s[l])!=tolower(s[r])))
            return false;
            l++;
            r--;

        }
      return true;
    }

    bool alphanum(char c)
{
    if(c>='A'&& c<='z'|| c>='a' && c<='z' || c>='0' && c<='9')
      return true;
    else
     return false;
}
};
