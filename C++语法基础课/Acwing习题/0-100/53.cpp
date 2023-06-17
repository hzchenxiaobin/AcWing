class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        priority_queue<int, vector<int>, greater<int>> q;
        for(int num : input)q.push(num);
        vector<int> res;
        for(int i=0;i<k;i++)
        {
            res.push_back(q.top());
            q.pop();
        }
        
        return res;
    }
};
