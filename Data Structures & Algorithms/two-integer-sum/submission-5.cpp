class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        
        int n = nums.size();
        vector<pair<int,int>>pos(n);
        for (int i = 0;i < n;i++) {
            pos[i].first = nums[i];
            pos[i].second = i;
        }
        sort(pos.begin(),pos.end());
        int i = 0;
        int j = n-1;

        while(i < j) {
            long long sum = pos[i].first + pos[j].first;
            if(sum == (long long)target){
                int mn = min(pos[i].second,pos[j].second);
                int mx = max(pos[i].second,pos[j].second);
                return {mn,mx};
            }
            else if(sum > (long long)target) {
                j--;
            }
            else {
                i++;
            }
        }
        return {};
    }
};
