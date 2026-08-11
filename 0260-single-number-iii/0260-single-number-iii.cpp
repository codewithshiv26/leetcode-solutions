class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       long long xor_sum = 0;
        for (int num : nums) {
            xor_sum ^= num;
        }
        long long rightmost_set_bit = xor_sum & (-xor_sum);
        
        int num1 = 0;
        int num2 = 0;
        for (int num : nums) {
            if (num & rightmost_set_bit) {
                num1 ^= num; 
            } else {
                num2 ^= num; 
            }
        }
        
        return {num1, num2};
    }
};