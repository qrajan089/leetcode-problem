class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int n = 0;  
        
        for (char c : s) {
            if (c == '(') {
                if ( n > 0) {
                    ans.push_back(c);
                }
                  n++;
            } else { 
                  n--;
                if (n > 0) {

                    ans.push_back(c);
                }
            }
        }
        
        return ans;
    }
};
