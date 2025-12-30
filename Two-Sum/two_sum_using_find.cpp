#include <iostream>
#include <vector>
#include <unordered_map>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
    
    std::unordered_map<int, int> newHashMap;

    for(int i = 0; i< nums.size(); i++){
        int diff = target - nums[i];

        auto finds = newHashMap.find(diff);
        if(finds != newHashMap.end()){
            return {finds->second, i};
        }

        newHashMap[nums[i]] = i;
    }
    return {};
}

int main(){

    std::vector<int> nums = {2, 7, 11, 19};
    int target = 9;

    std::vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        std::cout << result[0] << ", " << result[1] << std::endl;
    }

    return 0;
}