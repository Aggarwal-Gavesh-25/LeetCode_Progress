class Solution {
public:
    bool isAnagram(string s, string t) {
        // T= n
        // S= 1
        if(s.size() != t.size()) return false;
        
        vector<int> hash(26);
        
        for(auto it:s){
            hash[it - 'a']++;
        }
        for(auto it:t){
            hash[it - 'a']--;
        }
        
        int maxi=*max_element(hash.begin(),hash.end());
        if(maxi != 0) return false;
        
        return true;
    }
};