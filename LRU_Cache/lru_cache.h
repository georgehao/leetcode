/*
 * lru_cache.h
 *
 *  Created on: Jul 9, 2015
 *      Author: dahaol
 */

#ifndef LRU_CACHE_LRU_CACHE_H_
#define LRU_CACHE_LRU_CACHE_H_

/*
 * Design and implement a data structure for Least Recently Used (LRU) cache.
 *
 * it should support the following operations: get and set.
 * get(key)
 *      - Get the value (will always be positive) of the key
 *        if the key exists in the cache, otherwise return -1.
 *
 * set(key, value)
 *      - Set or insert the value if the key is not already present.
 *        When the cache reached its capacity, it should invalidate the
 *        least recently used item before inserting a new item.
 */

#include <iostream>
#include <tr1/unordered_map>

class LRUCache{
public:
    LRUCache(int capacity);
    int get(int key);
    void set(int key, int value);

private:

private:
    int  capacity_;
    std::tr1::unordered_map<int, int> lru_map_;
    std::list<int>  lru_list_;
};

#endif /* LRU_CACHE_LRU_CACHE_H_ */
