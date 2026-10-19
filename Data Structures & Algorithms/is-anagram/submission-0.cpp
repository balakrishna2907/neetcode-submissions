class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26,0);

        int n = s.size();
        int m = t.size();

        for (int i = 0;i < n;i++) {
            count[s[i] - 'a']++;
        }
        for (int i = 0;i < m;i++) {
            count[t[i] - 'a']--;
        }
        for (int i = 0;i < 26;i++) {
            if(count[i] != 0)return false;
        }
        
        return true;
    }
};
