class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,int> match;
        vector<vector<string>> ans;
        int n = strs.size();
        
        for (int i = 0;i < n;i++) {
            string opt = strs[i];
            sort(opt.begin(),opt.end());
            if (match.find(opt) == match.end()) {
                int mn = match.size();
                match[opt] = mn;
                ans.push_back({});
                ans[mn].push_back(strs[i]);
            }
            else{
                int ii = match[opt];
                ans[ii].push_back(strs[i]);
            }
        }
        return ans;
    }
};
