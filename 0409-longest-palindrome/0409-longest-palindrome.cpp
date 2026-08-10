class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lowercase(26, 0);
        vector<int> uppercase(26, 0);

        // Count frequencies
        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                lowercase[c - 'a']++;
            else if (c >= 'A' && c <= 'Z')
                uppercase[c - 'A']++;
        }

        int count = 0;
        bool hasOdd = false;

        // Process lowercase
        for (int freq : lowercase) {
            count += (freq / 2) * 2;   // add even part
            if (freq % 2 == 1) hasOdd = true;
        }

        // Process uppercase
        for (int freq : uppercase) {
            count += (freq / 2) * 2;
            if (freq % 2 == 1) hasOdd = true;
        }

        // If any odd exists, we can put one in the center
        if (hasOdd) count++;

        return count;
    }
};
