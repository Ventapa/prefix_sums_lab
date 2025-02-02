#include "prefix_sums.h"
#include <iostream>

bool non_neg_prefix_sum(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += num;
        if (sum < 0) return false;
    }
    return true;
}

bool non_pos_prefix_sum(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        sum += num;
        if (sum > 0) return false;
    }
    return true;
}

int main() {
    std::vector<int> test1 = {1, -1, 1, -1};
    std::vector<int> test2 = {1, -1, -1, 1};
    
    std::cout << "Test 1 (non-neg prefix sum): " << (non_neg_prefix_sum(test1) ? "true" : "false") << std::endl;
    std::cout << "Test 2 (non-neg prefix sum): " << (non_neg_prefix_sum(test2) ? "true" : "false") << std::endl;
    
    return 0;
}