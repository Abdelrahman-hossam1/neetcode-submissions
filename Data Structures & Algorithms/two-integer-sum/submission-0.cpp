class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int , int> myMap;
        for(int i = 0 ; i< n ; i++){
            int diff = target - nums[i];
            if(myMap.find(diff) != myMap.end()){
                return{myMap[diff],i};
            }else {
                myMap.insert({nums[i],i});
                }
        }
        return {};
    }
};
