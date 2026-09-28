class Solution {
public:
    int maxDepth(string s) {


        int n = 0;
        int k = 0;
        
        for (char c : s ) {
            if (c == '(') {
                k++;
                n = max(n, k);
            } else if (c == ')') {
                k--;
            }
        }
        
        return n;
    }
};


