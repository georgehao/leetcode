/*
 * last_word_length.h
 *
 *  Created on: 2015年8月19日
 *      Author: dahaol
 */

#ifndef LASTWORDLENGTH_LAST_WORD_LENGTH_H_
#define LASTWORDLENGTH_LAST_WORD_LENGTH_H_
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        while (len) {
            if (s[len - 1] != ' ') {
                break;
            }

            len -= 1;
        }

        int tmp_len = len;
        while (tmp_len >= 1 && s[tmp_len - 1] != ' ') {
            tmp_len--;
        }

        return len - tmp_len;
    }
};


#endif /* LASTWORDLENGTH_LAST_WORD_LENGTH_H_ */
