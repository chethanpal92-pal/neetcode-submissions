class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        while(i<n){
            if(!isalnum(s[i]))
           {  s.erase(i,1);
             n--;}
             else
             i++;

        }
        i=0;
        int left=0;
        int right=n-1;
        while(left<right)
        {
            // while(!isalnum(s[left])&&left<right)
            // left++;
            //  while(!isalnum(s[right])&&left<right)
            // right--;
            if(tolower(s[left])!=tolower(s[right]))
            return false;
            left++;
            right--;
        }
        return true;
    }
};
