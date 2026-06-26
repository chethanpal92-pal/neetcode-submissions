class Solution {
public:
    bool isPalindrome(string s) {
        int i=0;
        int n=s.size();
        while(i<n){
            if(!alphanum(s[i])){
                s.erase(i,1);
                n--;
            }
            else{
                i++;
            }
        }
            int left=0;
            int right=n-1;

            while(left<right){

                if(tolower(s[left])!=tolower(s[right]))
                return false;
                left++;
                right--;
            }
           
         return true;
    }

    bool alphanum(char c)
    {
        return (c>='A' && c<='z'||c>='a' && c<='z'||c>='0'&& c<='9');
    }

};
