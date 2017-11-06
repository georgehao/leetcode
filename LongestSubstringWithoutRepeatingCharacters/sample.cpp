#include <iostream>

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256] = {0};
        int res = 0;
        int left = 0;

        for (int i = 0; i < s.length(); i++) {
            if (arr[s[i]] == 0 || m[s[i]] < left) {
                res = std::max(res, i - left + 1);
            } else {
                left = arr[s[i]];
            }

            arr[s[i]] = i + 1;
        }
        return res;
    }
}
