#pragma once

#include <vector>

class Solution {
public:
  int findMagicIndex(const std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == i) {
        return i;
      }
    }
    return -1;
  }
};
