class Solution {
public:
    int maxDepth(string s) {
        int max=0;
        int count=0;
        
        for(auto it:s){
            if(it == '('){
                count++;
                if(count>max) max=count;
            }
            if(it == ')'){
                count--;
            }
        }
        return max;
    }
};