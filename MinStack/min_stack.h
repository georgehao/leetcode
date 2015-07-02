/*
 * min_stack.h
 *
 *  Created on: Jul 2, 2015
 *      Author: dahaol
 */

#ifndef MINSTACK_MIN_STACK_H_
#define MINSTACK_MIN_STACK_H_

#include <iostream>
#include <vector>

class MinStack {
public:
	MinStack();
    void push(int x);
    void pop();
    int top();
    int getMin();

    void Display();

private:
	struct SortMethod {
		bool operator()(const int &first, const int &second) {
			return (first > second);
		}
	};
private:
    std::vector<int> num_buffer_;
    std::vector<int> min_buffer_;
};
#endif /* MINSTACK_MIN_STACK_H_ */
