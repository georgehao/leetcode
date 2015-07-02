/*
 * test.cpp
 *
 *  Created on: Jul 2, 2015
 *      Author: dahaol
 */

#include "min_stack.h"

using namespace std;

int main()
{
	MinStack min_stack;
	min_stack.push(2);
	min_stack.push(0);
	min_stack.push(3);
	min_stack.push(0);

	min_stack.Display();

	cout << min_stack.getMin() << std::endl;
	min_stack.pop();

	cout << min_stack.getMin() << std::endl;
	min_stack.pop();

	cout << min_stack.getMin() << std::endl;
	min_stack.pop();

	cout << min_stack.getMin() << std::endl;
}
