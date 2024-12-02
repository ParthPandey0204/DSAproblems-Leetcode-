class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        // Concatenate goal with itself and check if s is a substring of goal + goal
        return (goal + goal).find(s) != string::npos;
    }
};