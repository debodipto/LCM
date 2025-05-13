class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int minCount = (int)(n / 3) + 1;
        unordered_map<int, int> map;
        vector<int> res;
        for (int i = 0; i < n; i++){
            map[nums[i]]++;
            if (map[nums[i]] == minCount)
                res.push_back(nums[i]);
            if (res.size() == 2)
                break;
        }
        return res;
    }
};
