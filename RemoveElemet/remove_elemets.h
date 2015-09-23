/*
 * remove_elemets.h
 *
 *  Created on: Sep 23, 2015
 *      Author: dahaol
 */

#ifndef REMOVEELEMET_REMOVE_ELEMETS_H_
#define REMOVEELEMET_REMOVE_ELEMETS_H_

#include <iostream>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) {
            return 0;
        }

        for (auto &it : nums) {
            if (it != val) {
                new_nums.push_back(it);
            }
        }

        nums.swap(new_nums);
        return nums.size();
    }
private:
    vector<int> new_nums{};
};


#endif /* REMOVEELEMET_REMOVE_ELEMETS_H_ */
