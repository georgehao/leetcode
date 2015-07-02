/*
 * min_stack.cpp
 *
 *  Created on: Jul 2, 2015
 *      Author: dahaol
 */


#include "min_stack.h"

MinStack::MinStack()
{
	num_buffer_.clear();
	min_buffer_.clear();
}

void MinStack::push(int x)
{
	num_buffer_.push_back(x);

	if (min_buffer_.empty() || min_buffer_.back() >= x) {
		min_buffer_.push_back(x);
	}
}

void MinStack::pop()
{
	if (num_buffer_.empty() || min_buffer_.empty())
		return;

	int num_back = num_buffer_.back();
	num_buffer_.pop_back();

	int min_back = min_buffer_.back();
	if (num_back == min_back) {
		min_buffer_.pop_back();
	}
}

int MinStack::top()
{
	if (num_buffer_.empty()) {
		throw;
	}
	return num_buffer_.back();
}

int MinStack::getMin()
{
	if (min_buffer_.empty()) {
		throw;
	}

	if (num_buffer_.empty()) {
		throw;
	}

	return min_buffer_.back();
}

void MinStack::Display()
{
	std::cout << "num vec:" << std::endl;
	for (auto &it : num_buffer_) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

	std::cout << "min vec:" << std::endl;
	for (auto &it : min_buffer_) {
		std::cout << it << " ";
	}
	std::cout << std::endl;

}

















