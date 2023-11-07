#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sumTriangles(const vector<vector<int>> &matrix, int n)
    {
        int upperSum = 0;
        int lowerSum = 0;
	vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i <= j)
                {
                    upperSum += matrix[i][j];
                }
                if (i >= j)
                {
                    lowerSum += matrix[i][j];
                }
            }
        }
        
        vec.push_back(upperSum);
        vec.push_back(lowerSum);

       return vec;
    }
};

int main()
{
    Solution sol;

    vector<vector<int>> vect
    {
	{{6, 5, 4},
        {1, 2, 5},	
        {7, 9, 7}}
    };

    sol.sumTriangles(vect, 3);

    return 0;
}
