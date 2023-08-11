// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int siz, int key)
// {
//     int start = 0;
//     int end = siz-1;
//     int mid = (start + (end-start)/2);

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start)/2;
        
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {1,2,3,5,7,9,34,54,56,67,78};
//     cout<<"The 34 is at index "<<binarySearch(arr, 11, 78)<<endl;

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // char i = '7';
    // cout<<int(i)-48<<endl;

    vector<vector<int>> v;
    // v[0].push_back(5);
    // v[0].push_back(4);
    // v[0].push_back(3);
    // v[0].push_back(2);
    // v[0].push_back(1);
    // v[1].push_back(5);
    // v[1].push_back(4);
    // v[1].push_back(3);
    // v[1].push_back(2);
    // v[1].push_back(1);

    vector<int> v1 = {1,2,34};
    vector<int> v2 = {1,2,34};
    vector<int> v3 = {1,2,34};
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    // for (auto i = 0; i != end(); i++)
    // {
    //     /* code */
    // }
    
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[0].size(); j++)
    //     {
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
        
    // }
    
    // for(auto i : v)
    // {
    //     for(auto j : i)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;

    // }

//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         for(auto j = (*i).begin(); j != (*i).end(); j++)
//         {
//             cout<<(*j)<<" ";
//         }
//         cout<<endl;
//     }
    

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

bool printS3(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        // condition Satisfied
        if (s == sum)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
            }
            cout<<endl;
            return true;
        }
        // condition not satisfied
        else return false;
        
    }
    ds.push_back(arr[ind]);
    s += arr[ind];

    if(printS3(ind + 1, ds, s, sum, arr, n) == true) return true;

    s-= arr[ind];
    ds.pop_back();

    // not pick
    if(printS3(ind+1, ds, s,sum, arr, n) == true) return true;
}

int main()
{
    vector<int> ds;
    printS3(0, ds, )
    return 0;
}