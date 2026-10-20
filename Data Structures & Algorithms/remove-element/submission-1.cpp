class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        while (i <= j) {
            if(nums[j] == val){
                j--;
                continue;
            }
            if(nums[i] != val){
                i++;
                continue;
            }

            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        return j+1;
    }
};