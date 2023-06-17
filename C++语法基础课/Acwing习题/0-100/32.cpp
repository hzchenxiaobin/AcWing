class Solution {
public:
    void reOrderArray(vector<int> &array) {
         int l=0, r=array.size() - 1;
         while(l < r)
         {
            while(array[l] % 2 == 1) l++;
            while(array[r] % 2 == 0) r--;
            if(r < l) return;
            swap(array[l], array[r]);
         }
    }
};