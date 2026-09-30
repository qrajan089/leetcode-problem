class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {

        vector<int> m(seq.length());
        int n = 0;
        
        for (int i = 0; i < seq.length(); ++i) {
            if (seq[i] == '(') {
                m[i] = n & 1;
                n++;
            } else {
                n--;
                m[i] = n & 1;
            }
        }
        
        return m;
    }
};
