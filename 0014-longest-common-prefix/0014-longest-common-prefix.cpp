class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";  // Edge case: empty input

    string prefix = strs[0];  // Start with the first string as the prefix

    for (int i = 1; i < strs.size(); i++) {
        // Shorten the prefix until it matches the beginning of strs[i]
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);
            if (prefix.empty()) return "";  // If there's no common prefix
        }
    }

    return prefix;
}
};