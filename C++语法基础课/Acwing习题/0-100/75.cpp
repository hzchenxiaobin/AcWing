class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        set<int> s;
        vector<int> res;
        for(int num : nums)
        {
            if(s.find(target - num) != s.end())
            {
                res.push_back(num);
                res.push_back(target - num);
                return res;
            }
            s.insert(num);
        }
    }
};