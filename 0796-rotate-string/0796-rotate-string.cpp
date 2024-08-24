class Solution {
public:
bool rotateString(string s, string goal) {
    // T= n^2
    // S= n
    
    if (s.size() != goal.size()) {
        return false;
    }

    string doubled = s + s;         // n time & n space
    if(doubled.find(goal) != string::npos) return true;     // n^2 time
        
    return false;
}
};