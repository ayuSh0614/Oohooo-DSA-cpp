#include <iostream>
#include <vector>
using namespace std;

// vector<int> spiralPrint(vector<vector<int>>&matrix)
// {
//     vector<int> ans;
//     int n = matrix.size();
//     int m = matrix[0].size();

//     int count = 0;
//     int total = n*m;

//     // i initialisation
//     int top = 0;
//     int left = 0;
//     int bottom = n -1;
//     int right = m -1;

//     while (count < total)
//     {
//         // print starting n
//         for(int i = left; count < total && i<right; i++)
//         {
//             ans.push_back(matrix[top][i]);
//             count++;

//         }
//         top+=1;

//         //print ending moumn
//         for(int i = top; count < total && i<bottom; i++)
//         {
//             ans.push_back(matrix[i][right]);
//             count++;

//         }
//         right--;

//         // print ending n
//         for(int i = right; count < total && i >= left; i--)
//         {
//             ans.push_back(matrix[bottom][i]);
//             count++;

//         }
//         bottom--;

//         // print starting moumn
//         for(int i = bottom; count < total && i >= top; i--)
//         {
//             ans.push_back(matrix[i][left]);
//             count++;
//         }
//         left++;

//     }

//     return ans;

// }

// void spiralPrint(int arr[3][4])
// {
//     int ans[12];
//     int n = 3;
//     int m = 4;

//     int count = 0;
//     int total = n*m;

//     int top = 0;
//     int left = 0;
//     int bottom = n -1;
//     int right = m -1;

//     while (count < total)
//     {
//         for(int i = left; count < total && i<right; i++)
//         {
//             ans[count] = arr[top][i];
//             count++;
//         }
//         top+=1;

//         for(int i = top; count < total && i<bottom; i++)
//         {
//             ans[count] = arr[i][right];
//             count++;
//         }
//         right--;

//         for(int i = right; count < total && i >= left; i--)
//         {
//             ans[count] = arr[bottom][i];
//             count++;
//         }
//         bottom--;

//         for(int i = bottom; count < total && i >= top; i--)
//         {
//             ans[count] = arr[i][left];
//             count++;
//         }
//         left++;

//     }

//     for (int i = 0; i < 12; i++)
//     {
//         cout<<ans[i]<<" ";
//     }

// }

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;

        int n = matrix.size();
        int m = matrix[0].size();

        int top = 0;
        int left = 0;
        int bottom = n - 1;
        int right = m - 1;

        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top += 1;

            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main()
{
    int arr[3][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12}};

    // vector<int> t = spiralPrint(v);
    // for(auto i : v)
    // {
    //     cout<<i<<endl;
    // }

    // spiralPrint(arr);

    return 0;
}