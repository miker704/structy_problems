// non adjacent sum
// Write a function, nonAdjacentSum, that takes in an array of numbers as
// an argument. The function should return the maximum sum of non-adjacent
// elements in the array. There is no limit on how many elements can be taken
// into the sum as long as they are not adjacent.

// For example, given:

// [2, 4, 5, 12, 7]

// The maximum non-adjacent sum is 16, because 4 + 12.
// 4 and 12 are not adjacent in the array.
#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int nonAdjacentSum(std::vector<int>);
int _nonAdjacentSum(std::vector<int>, int, std::unordered_map<int, int> &);

// first dp method using iterative and array caching runs in 0.002s time complexity O(N)
//  and space complexity is O(N) due to the extra array we can further reduce it to constant space complexity
// O(1) if we decide on using no array

// int nonAdjacentSum(std::vector<int> nums) {
//     if(nums.size() == 0){return 0;}
//     if(nums.size()==1){return nums[0];}
//     std::vector<int>vector(nums.size(),0);
//     vector[0]=nums[0];
//     vector[1]=std::max(nums[0],nums[1]);
//     for(int i =2; i<nums.size(); i++){
//         vector[i]=std::max(vector[i-1],vector[i-2]+nums[i]);
//     }
//     return *std::max_element(vector.begin(),vector.end());

// }

// run time O(N) and space is O(1)
// int nonAdjacentSum(std::vector<int> nums) {
//     int incl = nums[0];
//     int excl = 0;
//     int new_excl = 0;

//     for (int i = 1; i < nums.size(); i++) {
//         new_excl = std::max(incl,excl);
//         incl = excl + nums[i];
//         excl = new_excl;
//     }
//     return std::max(incl,excl);
// }

// 0 1 2 3 4
// 2 4 5 12 7
// incl = 2+5 ex = 2 newex= 4 i=2

// method using a hash for memoization and recursion
int nonAdjacentSum(std::vector<int> nums) {
    std::unordered_map<int, int> u_map;
    return _nonAdjacentSum(nums, 0, u_map);
}

int _nonAdjacentSum(std::vector<int> nums, int idx, std::unordered_map<int, int> &u_map) {

        return 0;
    
}

int main() {

    std::vector<int> nums{2, 4, 5, 12, 7};
    std::cout << nonAdjacentSum(nums) << std::endl; // -> 16

    nums = {7, 5, 5, 12};
    std::cout << nonAdjacentSum(nums) << std::endl; // -> 19

    nums = {7, 5, 5, 12, 17, 29};
    std::cout << nonAdjacentSum(nums) << std::endl; // -> 48

    nums = {
        72, 62, 10, 6, 20, 19, 42,
        46, 24, 78, 30, 41, 75, 38,
        23, 28, 66, 55, 12, 17, 9,
        12, 3, 1, 19, 30, 50, 20};
    std::cout << nonAdjacentSum(nums) << std::endl; // -> 488

    nums = {
        72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
        30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
        83, 80, 56, 68, 6, 22, 56, 96, 77, 98,
        61, 20, 0, 76, 53, 74, 8, 22, 92, 37,
        30, 41, 75, 38, 23, 28, 66, 55, 12, 17,
        72, 62, 10, 6, 20, 19, 42, 46, 24, 78,
        42};
    std::cout << nonAdjacentSum(nums) << std::endl; // -> 1465
    return 0;
}
