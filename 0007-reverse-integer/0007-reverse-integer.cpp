class Solution {
public:
    int reverse(int x) {
        long result = 0;  // Use 64-bit to avoid intermediate overflow
        
        while (x != 0) {
            result = result * 10 + x % 10;
            x /= 10;
        }
        
        return (result > INT_MAX || result < INT_MIN) ? 0 : (int)result;
    }
};