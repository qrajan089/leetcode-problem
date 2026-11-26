class Solution {
public:
    bool canAliceWin(int n) {
        int stone = 10;
        int turns = 0;

        while (n >= stone) {
            n -= stone;
            stone--;
            turns++;
        }

        return turns % 2 == 1;
    }
};
