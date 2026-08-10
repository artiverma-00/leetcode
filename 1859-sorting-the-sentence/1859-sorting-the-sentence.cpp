class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);
        string temp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                int pos = temp.back() - '0'; // last char is position
                temp.pop_back();             // remove digit
                ans[pos] = temp;             // store word
                temp.clear();
            } else {
                temp += s[i];
            }
        }
           // handle last word (no trailing space)
        int pos = temp.back() - '0';
        temp.pop_back();
        ans[pos] = temp;

        // build final sentence
        string result;
        for (int i = 1; i < ans.size(); i++) {
            if (!ans[i].empty()) {
                result += ans[i] + " ";
            }
        }
        result.pop_back(); // remove last space
        return result;
    }
};