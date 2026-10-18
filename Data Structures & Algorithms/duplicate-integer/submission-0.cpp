class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>count;
        for(int i : nums) {
            count[i]++;
        }

        for(const auto&[a,b] : count) {
            if(b > 1)return true;
        }
        return false;
    }
};