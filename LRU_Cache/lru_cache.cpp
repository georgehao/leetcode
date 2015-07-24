/*
 * lru_cache.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: dahaol
 */

#include "lru_cache.h"

LRUCache::LRUCache(int capacity) : size_(0), capacity_(capacity)
{
    lru_map_.clear();
    lru_list_.clear();
}

int LRUCache::get(int key)
{
	if (lru_list_.empty()) {
	    return -1;
	}

	auto ret = lru_map_.find(key);
	if (ret != lru_map_.end()) {
		//update the node in list
	    lru_list_.splice(lru_list_.begin(), lru_list_, ret->second);

	    //update the node in hash_map
	    lru_map_[key] = lru_list_.begin();
	    return lru_map_[key]->value;
	}

	return -1;
}

void LRUCache::set(int key, int value)
{
    if (lru_map_.find(key) != lru_map_.end()) {
        lru_map_[key]->value = value;
        //update the node in list
        lru_list_.splice(lru_list_.begin(), lru_list_, lru_map_[key]);
        //update the node in hash_map
        lru_map_[key] = lru_list_.begin();
        return;
    }

    if (size_ >= capacity_) {
        int exsit_key = lru_list_.back().key;
        lru_list_.pop_back();
        lru_map_.erase(exsit_key);
        --size_;
    }

    lru_list_.push_front(Node_T(key, value));
    lru_map_[key] = lru_list_.begin();
    ++size_;
    return;
}

