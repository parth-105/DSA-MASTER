// 76. Minimum Window Substring
// Solved
// Hard
// Topics
// premium lock icon
// Companies
// Hint
// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

// The testcases will be generated such that the answer is unique.

 

// Example 1:

// Input: s = "ADOBECODEBANC", t = "ABC"
// Output: "BANC"
// Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
// Example 2:

// Input: s = "a", t = "a"
// Output: "a"
// Explanation: The entire string s is the minimum window.
// Example 3:

// Input: s = "a", t = "aa"
// Output: ""
// Explanation: Both 'a's from t must be included in the window.
// Since the largest window of s only has one 'a', return empty string.
 

// Constraints:

// m == s.length
// n == t.length
// 1 <= m, n <= 105
// s and t consist of uppercase and lowercase English letters.
 

// Follow up: Could you find an algorithm that runs in O(m + n) time?


string minWindow(string s, string t) {
    unordered_map<char,int> need, window;
    for(char c : t) need[c]++;

    int have=0, total=need.size();
    int left=0, minLen=INT_MAX, start=0;

    for(int right=0; right < s.size(); right++) {
        char c = s[right];
        window[c]++;

        // have++ only when count EXACTLY matches
        if(need.count(c) && window[c] == need[c])
            have++;

        while(have == total) {
            // update answer
            if(right - left + 1 < minLen) {
                minLen = right - left + 1;
                start = left;             // ✅ save start!
            }

            // shrink
            char leftChar = s[left];
            window[leftChar]--;
            if(need.count(leftChar) && window[leftChar] < need[leftChar])
                have--;
            left++;
        }
    }
    return minLen == INT_MAX ? "" : s.substr(start, minLen);
}