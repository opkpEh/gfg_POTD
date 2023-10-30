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
            ans += (1LL << i) * countSetBits * (n - countSetBits);
        }

        return ans;
    }
};

// unrefined code:

#include <vector>
#include <iostream>

class Solution {
public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        int ans = 0;
        std::vector <int> arrBin;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j > i)
                {
                    arrBin.push_back(arr[i] ^ arr[j]);
                }
            }
        }


        for (auto ele : arrBin)
        {
            ans += ele;
        }
        return ans;

    }
};

    int main()
    {
        Solution sol;

        int input[] = { 3, 5, 7 };

        long long int answer = sol.sumXOR(input, 3);

        std::cout << answer;

        return 0;
    }
