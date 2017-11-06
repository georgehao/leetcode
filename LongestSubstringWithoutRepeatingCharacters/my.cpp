#include <iostream>
#include <list>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        const char *p = s.c_str();
        int longestLength = 0;
        int equalPostion = 0;
        std::list<char> longSubstringList {};
        for (int i = 0; i < s.length(); i++) {
            equalPostion = 0;
            for (auto it = longSubstringList.begin(); it != longSubstringList.end(); it++) {
                equalPostion++;
                if (*p == *it) {
                    auto size = longSubstringList.size();
                    if (size > longestLength) {
                        longestLength = size;
                    }

                    while (equalPostion--) {
                        longSubstringList.pop_front();
                    }
                    break;
                }
            }

            longSubstringList.push_back(*p);
            p++;
        }

        return (longestLength > longSubstringList.size()) ? longestLength
            : longSubstringList.size();
    }
};

int main()
{
    Solution s;
    std::cout << s.lengthOfLongestSubstring("abcabcbb") << std::endl;
    std::cout << s.lengthOfLongestSubstring("bbbbb") << std::endl;
    std::cout << s.lengthOfLongestSubstring("pwwkew") << std::endl;
    std::cout << s.lengthOfLongestSubstring("abcdefgh") << std::endl;
    std::cout << s.lengthOfLongestSubstring("dvdf") << std::endl;
    std::cout << s.lengthOfLongestSubstring("ohvhjdml") << std::endl;
}
