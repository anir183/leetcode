#include <stdlib.h>

// @leet start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // try 1

    // int* result = malloc(2 * sizeof(int));
    // result[0] = -1;
    // result[1] = -1;
    //
    // for(int i = 0; i < numsSize; i++) {
    //     for(int j = i + 1; j < numsSize; j++) {
    //         if(nums[i] + nums[j] == target) {
    //             result[0] = i;
    //             result[1] = j;
    //             *returnSize = 2;
    //             return result;
    //         }
    //     }
    // }
    //
    // return result;


    // try 2
    // <used hint 1>
    //
    // improvements:
    //      * less arithmetic by calculating complement in advance

    int* result = malloc(2 * sizeof(int));
    int complement = -1;

    for(int i = 0; i < numsSize; i++) {
        complement = target - nums[i];
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[j] == complement) {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return malloc(0);

    // try 3
    // TODO : hashmaps
}
// @leet end
