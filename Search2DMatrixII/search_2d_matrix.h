/*
 * search_2d_matrix.h
 *
 *  Created on: Jul 23, 2015
 *      Author: dahaol
 */

#ifndef SEARCH2DMATRIXII__SEARCH_2D_MATRIX_H_
#define SEARCH2DMATRIXII__SEARCH_2D_MATRIX_H_

//	[
//	  [1,   4,  7, 11, 15],
//	  [2,   5,  8, 12, 19],
//	  [3,   6,  9, 16, 22],
//	  [10, 13, 14, 17, 24],
//	  [18, 21, 23, 26, 30]
//	]
//	Given target = 5, return true.
//	Given target = 20, return false.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.begin()->size();
        int column = matrix.size();

        for (int i = 0; i < row; i++) {

        }

    }
};

#endif /* SEARCH2DMATRIXII__SEARCH_2D_MATRIX_H_ */
