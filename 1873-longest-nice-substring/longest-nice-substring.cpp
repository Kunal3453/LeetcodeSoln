class Solution {
public:
   bool isNice(const string& sub) {
    unordered_set<char> lower;
    unordered_set<char> upper;
    for (char c : sub) {
        if (islower(c)) {
            lower.insert(c);
        } else {
            upper.insert(c);
        }
    }
    for (char c : lower) {
        if (upper.find(toupper(c)) == upper.end()) {
            return false;
        }
    }
    for (char c : upper) {
        if (lower.find(tolower(c)) == lower.end()) {
            return false;
        }
    }
    return true;
}

string longestNiceSubstring(string s) {
    int n = s.length();
    string result = "";
    // Iterate over all possible substrings
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            string sub = s.substr(i, j - i + 1);
            if (isNice(sub) && sub.length() > result.length()) {
                result = sub;
            }
        }
    }
    return result;
}
};