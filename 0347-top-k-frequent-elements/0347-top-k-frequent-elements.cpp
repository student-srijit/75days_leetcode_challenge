class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.empty()) return {};
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> vec1;    
        int count = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                count++;
            } else {
                vec1.push_back({count, nums[i-1]});
                count = 1;
            }
        }
        vec1.push_back({count, nums.back()});
        sort(vec1.begin(), vec1.end());
        vector<int> result;
        for(int i = 0; i < k; i++) {
            result.push_back(vec1[vec1.size() - 1 - i].second);
        }       
        return result;
    }
};