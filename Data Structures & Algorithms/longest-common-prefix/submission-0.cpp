class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n = strs.size();
        string re = strs[0];
        for (int i = 1;i < n;i++) {
            int j = 0;
            int m = strs[i].size();
            while(j < m && j < re.size()) {
                if(re[j] == strs[i][j]){
                    j++;
                }
                else break;
            }
            while(re.size() > j) {
                re.pop_back();
            }
        }
        return re;
    }
};