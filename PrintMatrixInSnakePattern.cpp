#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
	vector<int> snakePattern(vector<vector<int>> matrix) 
	{
		int N= matrix.size();
		vector<int> result;
		for(int i = 0; i < N; i++) 
		{
			if(i % 2 == 0) 
			{
				for(int j = 0; j < N; j++) 
				{
					result.push_back(matrix[i][j]);
				}
			} 
			else 
			{
				for(int j = N - 1; j >= 0; j--) 
				{
					result.push_back(matrix[i][j]);
				}
			}
		}
		return result;
	}
};

int main()
{
	Solution sol;	

	cout<< sol.snakePattern({{45, 48, 54},{21, 89, 87},{70, 78, 15}});
}
