class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return ""; // Handle edge case of empty list

        // Initialize with the first string as the prefix
        string common_string = strs[0];

        // Compare with each string in the list
        for (int i = 1; i < strs.size(); i++) {
            string temp = strs[i];
            int j = 0;

            // Find the common prefix between `common_string` and `temp`
            while (j < common_string.size() && j < temp.size() && common_string[j] == temp[j]) {
                j++;
            }

            // Update `common_string` to the current common prefix
            common_string = common_string.substr(0, j);

            // If at any point the common prefix becomes empty, break early
            if (common_string.empty()) {
                return "";
            }
        }

        return common_string;
    }
};
