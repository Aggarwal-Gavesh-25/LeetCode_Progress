class Solution {
public:
    bool isPalindrome(string s) {
        string newstr;
        
        for(char c : s){
            if(isalnum(c)){
                c = tolower(c);
                newstr += c;
            }
        }
        
        int left = 0;
        int right = newstr.size() - 1;
        
        while(left <= right){
            if(newstr[left] != newstr[right]) return false;
            
            left++;
            right--;
        }
        
        return true;
    }
};