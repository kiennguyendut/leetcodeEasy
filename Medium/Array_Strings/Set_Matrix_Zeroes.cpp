/*Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.*/
#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        // rows
        int m = matrix.size();
        // columns
        int n = matrix[0].size();
        bool firstRowZero = false;
        bool firstColZero = false;

        // Check first row that does it have "0"?
        for (int j = 0; j < n; ++j)
        {
            if (matrix[0][j] == 0)
            {
                firstRowZero = true;
            }
        }
        // Check first column that does it have "0"?
        for (int i = 0; i < m; i++)
        {
            if (matrix[i][0] == 0)
            {
                firstColZero = true;
            }
        }
        // Use fisrt row and first column for sign
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    // Write first row and first column to check later
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set element at column and row as "0" through fisrt row and first column
        for (int i = 1; i < m; ++i)
        {
            for (int j = 1; j < n; ++j)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        //Hanle fisrt row
        if(firstRowZero){
            for(int j = 0; j < n; ++j){
                matrix[0][j] = 0;
            }
        }

        //Hanle fisrt column
        if(firstColZero){
            for(int i = 0; i < m; ++i){
                matrix[i][0] = 0;
            }
        }
        
    }
};