class Solution {
public:
    int romanToInt(string s) {
        // Map of Roman numerals and their corresponding integer values
        unordered_map<char, int> romanToIntMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            // If the current value is smaller than the next value, subtract it
            if (i + 1 < n && romanToIntMap[s[i]] < romanToIntMap[s[i + 1]]) {
                result -= romanToIntMap[s[i]];
            } else {
                result += romanToIntMap[s[i]];
            }
        }

        return result;
    }
};