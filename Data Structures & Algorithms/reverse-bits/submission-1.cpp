class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int reversed = 0;

        for(int i = 0; i < 32; i++) {
            int bitSet = (n >> i) & 1;
            reversed |= bitSet << (32 - i - 1);
        }

        return reversed;
    }
};
