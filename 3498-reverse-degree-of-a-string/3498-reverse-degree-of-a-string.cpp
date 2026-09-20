class Solution {
public:
    int reverseDegree(string s) {
        int totalDegree = 0;
        for (int i = 0; i < s.length(); i++) {
            totalDegree += (26 - (s[i] - 'a')) * (i + 1);
        }
        return totalDegree;
    }
};
