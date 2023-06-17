class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        bool arr[nums.size() + 1] = {0};
        for(int num : nums)
            arr[num] = true;
        
        for(int i=0;i<=nums.size();i++)
            if(!arr[i]) return i;
    }
};