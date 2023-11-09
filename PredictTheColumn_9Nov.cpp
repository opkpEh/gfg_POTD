class Solution {
public:
    /*Function to count zeros in each column
    * N: Number of rows and columns in the array
    * arr: The matrix (2D array) that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>> arr, int N) {
        
        int count2 = 0;
        int elsereturn = -1;

        for(int j = 0; j < N; j++) {
            int count = 0;

            for(int i = 0; i < N; i++) {
                if(arr[i][j] == 0) {
                    count++;
                }
            }

            if(count == N) {
                return j;
            }

            if(count > count2) {
                count2 = count;
                elsereturn = j;
            }
        }

        return elsereturn;
    }
};
