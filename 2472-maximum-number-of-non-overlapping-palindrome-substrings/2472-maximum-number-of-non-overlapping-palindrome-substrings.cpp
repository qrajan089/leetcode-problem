class Solution {
public:
    int maxPalindromes(string s, int k) {
        
        int n = s.length();
        int count = 0;
        int last_end = -1;  
        for (int i = 0; i < 2 * n - 1; ++i) {
            int l = i / 2;
            int r = (i + 1) / 2;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int current_len = r - l + 1;
                if (current_len >= k) {
                    if (l > last_end) {
                        count++;
                        last_end = r;  
                    }
                    break;  
                }
                l--;
                r++;
            }
        }
        return count;
    }
};
