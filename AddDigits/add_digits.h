/*
 * add_digits.h
 *
 *  Created on: 2015年8月17日
 *      Author: dahaol
 */

#ifndef ADDDIGITS_ADD_DIGITS_H_
#define ADDDIGITS_ADD_DIGITS_H_

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        string num_str = to_string(num);
        int num_bits = num_str.length();
        if (num_bits <= 1) {
            return num;
        }

        int add_num = 0;
        for (int i = 0; i < num_bits; i++) {
            char buf[2] = {0};
            memcpy(buf, &num_str[i], 1);
            add_num += atoi(buf);
        }

        return addDigits(add_num);
    }
};



#endif /* ADDDIGITS_ADD_DIGITS_H_ */
