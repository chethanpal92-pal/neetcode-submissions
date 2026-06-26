class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxl=0;
        unordered_map<char,int>repeating_char;
        int left=0, right=0;
        int area;
        while(right<s.size()){
            repeating_char[s[right]]++;
            maxl=max(maxl,repeating_char[s[right]]);
            if((right-left+1)-maxl>k){
                repeating_char[s[left]]--;
                left++;
        }
        area=max(area,right-left+1);
        right++;
        }
      
        return area;
    }
};
