class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        vector<int> counts('z' - 'a' + 1, 0);

        for(int i = 0; i < s.size(); i++) {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }

        for (int i : counts)
            if (i != 0)
                return false;
        return true;
    }
};
