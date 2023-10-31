#include <iostream>
#include <vector>

using namespace std;

//solution
class Solution{
public:
void pushZerosToEnd(int arr[], int n) {
      vector <int> vec;
      int ncopy = n;
      
      for(int i = 0; i < n; i++)
      {
            if(arr[i] != 0)
            {
                  vec.push_back(arr[i]);
                  ncopy--;
            }
      }

      for(int i= 0; i< n; i++)
      {
        arr[i]= vec[i];
      }
}
};


//driver code
int main()
{

	Solution sol;

	int n= 4;	
	int arr[4]= {0, 1, 0, 4};
	
	sol.pushZerosToEnd(arr, n);

	return 0;
}
