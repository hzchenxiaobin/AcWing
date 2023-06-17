class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int res = 0;
        for(auto i=nums.begin();i!=nums.end();i++)
        {
            if(*i == k) res++;
        }
        return res;
    }
};