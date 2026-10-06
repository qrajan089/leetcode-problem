class Solution {
public:
    int minAddToMakeValid(string s) {

        int m= 0;
        int n = 0;
        
        for (char c : s) {
            if (c == '(') {
                 n++;
            } else {
                if (n > 0) {
                    n--;
                } else {
                    m++;
                }
            }
        }
    
        return m + n;
    }
};
