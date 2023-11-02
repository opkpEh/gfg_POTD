#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
      int minDist(int a[], int n, int x, int y)
      {

            // variable declaration
            bool isX = false, isY = false;
            vector<int> Xindex;
            vector<int> Yindex;
            vector<int> result;
            int i, j;

            // checking for every index of x
            for (i = 0; i < n; i++)
            {
                  if (a[i] == x)
                  {
                        isX = true;
                        Xindex.push_back(i);
                  }
            }

            // check for every index of y
            for (i = 0; i < n; i++)
            {
                  if (a[i] == y)
                  {
                        isY = true;
                        Yindex.push_back(i);
                  }
            }

            if (isX && isY)
            {
                  for (i = 0; i < Xindex.size(); i++)
                  {
                        for (j = 0; j < Yindex.size(); j++)
                        {
                              result.push_back(abs(Xindex[i] - Yindex[j]));
                        }
                  }
            }

            else 
            {
                  return -1;
            }

            // sorting the result vector
            sort(result.begin(), result.end());

            return result[0];
      }
};

int main()
{
      Solution sol;

      int A[] = {86, 39, 90, 67, 84, 66, 62};
      int N = 7, X = 42, Y = 12;

      std::cout << sol.minDist(A, N, X, Y);

      return 0;
}
