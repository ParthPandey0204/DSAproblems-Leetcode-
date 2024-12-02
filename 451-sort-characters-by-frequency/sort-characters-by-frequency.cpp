class Solution {
public:
    string frequencySort(string s) {
        map<char, int> Counter;
        for(int i = 0; i < s.size(); ++i) Counter[s[i]]++;
        priority_queue<pair<int, char>> pq; // { occ, char }
        for(auto it = Counter.begin(); it != Counter.end(); ++it) {
            pq.push({it->second, it->first});
        }
        string res = "";
        while (!pq.empty()) {
            auto [occ, ch] = pq.top();
            pq.pop();
            res.append(occ, ch);
        }
        return res;
    }
};