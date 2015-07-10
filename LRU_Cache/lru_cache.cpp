/*
 * lru_cache.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: dahaol
 */

#include "lru_cache.h"

LRUCache::LRUCache(int capacity) : capacity_(capacity)
{
    lru_map_.clear();
}


int LRUCache::get(int key)
{
    if (lru_map_.empty()) {
        return -1;
    }

    auto res = lru_map_.find(key);
    if (res != lru_map_.end()) {
        return res->second;
    }
    return -1;
}

void LRUCache::set(int key, int value)
{
    if (lru_map_.size() >= capacity_) {
        lru_list_.splice();
    }
}

