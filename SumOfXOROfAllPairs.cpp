class Solution {
public:
    long long int sumXOR(int arr[], int n) {
        long long int ans = 0;

        for (int i = 0; i < 32; i++) {
            int countSetBits = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] & (1 << i)) {
                    countSetBits++;
                }
            }

            // For each bit position, calculate the XOR contribution
            // and add it to the answer
            ans += (1LL << i) * countSetBits * (n - countSetBits);
        }

        return ans;
    }
};
