/*
 * power_of_two.h
 *
 *  Created on: Jul 6, 2015
 *      Author: dahaol
 */

#ifndef POWOFTWO_POWER_OF_TWO_H_
#define POWOFTWO_POWER_OF_TWO_H_

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) {
        	return false;
        }

        return (n & (n-1) == 0);
    }
};



#endif /* POWOFTWO_POWER_OF_TWO_H_ */
