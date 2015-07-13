/*
 * test.cpp
 *
 *  Created on: Jul 9, 2015
 *      Author: dahaol
 */


#include "lru_cache.h"

int main()
{
    LRUCache lru_cache(5);
    lru_cache.set(1, 1);
    lru_cache.set(2, 2);
    lru_cache.set(3, 3);
    lru_cache.set(4, 4);

    std::cout << "No Full: ";
    for (int i = 1; i <= 5; i++) {
        std::cout << lru_cache.get(i) << " ";
    }
    std::cout << std::endl;

    lru_cache.set(5, 5);
    lru_cache.set(6, 6);

    std::cout << "FULL: ";
    for (int i = 1; i <= 6; i++) {
        std::cout << lru_cache.get(i) << " ";
    }
    std::cout << std::endl;
}

