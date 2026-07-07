

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string x;          // to collect non-zero digits
        long long sum = 0; // sum of non-zero digits

        for (char c : s) {
            if (c != '0') {
                x += c;              // build string of non-zero digits
                sum += (c - '0');    // add digit value to sum
            }
        }
if (x.empty()) return 0;
        long long v = stoll(x);      // convert x back to number
        return v * sum;                     // final string
    }
};
