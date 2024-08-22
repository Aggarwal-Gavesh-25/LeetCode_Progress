class Solution {
public:
    string removeOuterParentheses(string s) {
        string result;
        int count=0;
        
        for(auto it:s){
            if(it == '(' && count+1 == 1){
                count++;
            }
            else if(it == '(' && count+1 != 1){
                count++;
                result += it;
            }
            else if(it == ')' && count-1 != 0){
                count--;
                result += it;
            }
            else{
                count--;
            }
        }
        return result;
    }
};