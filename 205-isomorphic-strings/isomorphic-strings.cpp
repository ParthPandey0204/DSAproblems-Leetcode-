class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false; // Strings of different lengths cannot be isomorphic

        // Maps to store the mapping from `s` to `t` and `t` to `s`
        unordered_map<char, char> mapST; // Maps characters from `s` to `t`
        unordered_map<char, char> mapTS; // Maps characters from `t` to `s`

        for (int i = 0; i < s.length(); i++) {
            char sChar = s[i];
            char tChar = t[i];

            // Check if there is already a mapping for `sChar` in `mapST`
            if (mapST.count(sChar) && mapST[sChar] != tChar) {
                return false; // Inconsistent mapping from `s` to `t`
            }

            // Check if there is already a mapping for `tChar` in `mapTS`
            if (mapTS.count(tChar) && mapTS[tChar] != sChar) {
                return false; // Inconsistent mapping from `t` to `s`
            }

            // Establish the mappings
            mapST[sChar] = tChar;
            mapTS[tChar] = sChar;
        }

        return true; // All characters map consistently
    }
};
