class Solution {
public:
    int romanToInt(string s) {
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
            if(s[it]=='I' && s[it+1]=='V'){ 
                result+=4;
                it++;
            }
            else if(s[it]=='I' && s[it+1]=='X'){ 
                result+=9;
                it++;
            }

            else if(s[it]=='X' && s[it+1]=='L'){
                result+=40;
                it++;
            }
            else if(s[it]=='X' && s[it+1]=='C'){
                result+=90;
                it++;
            }
            else if(s[it]=='C' && s[it+1]=='D'){
                result+=400;
                it++;
            }
            else if(s[it]=='C' && s[it+1]=='M'){
                result+=900;
                it++;
            }
            else{
                result += mpp[s[it]];
            }
        }
        return result;
    }
};