class Solution {
public:
    int romanToInt(string s) {
        // T= n
        // S= 1
        map<char,int> mpp;
        mpp['I']=1;
        mpp['V']=5;
        mpp['X']=10;
        mpp['L']=50;
        mpp['C']=100;
        mpp['D']=500;
        mpp['M']=1000;
        
        int result=0;
        
        for(int it=0; it<s.size(); it++){
            if(it+1<s.size() && mpp[s[it]]<mpp[s[it+1]]){
                result -= mpp[s[it]];
            }
            else{
                result += mpp[s[it]];
            }
        }
        return result;
    }
};