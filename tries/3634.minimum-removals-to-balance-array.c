#include <limits.h>

// @leet start
int minRemoval(int* nums, int numsSize, int k) {
    // try 1
    // fails to submit

    int numOfRemovals = 0;
    int minElem = INT_MAX;

    for(int i = 0; i < numsSize; i++) {
        if(nums[i] < minElem) {
            minElem = nums[i];
        }
    }

    int allowedMaxElem = k * minElem;
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] > allowedMaxElem) {
            numOfRemovals += 1;
        }
    }

    return numOfRemovals;
}
// @leet end
