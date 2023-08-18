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

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // char i = '7';
//     // cout<<int(i)-48<<endl;

//     vector<vector<int>> v;
//     // v[0].push_back(5);
//     // v[0].push_back(4);
//     // v[0].push_back(3);
//     // v[0].push_back(2);
//     // v[0].push_back(1);
//     // v[1].push_back(5);
//     // v[1].push_back(4);
//     // v[1].push_back(3);
//     // v[1].push_back(2);
//     // v[1].push_back(1);

//     vector<int> v1 = {1,2,34};
//     vector<int> v2 = {1,2,34};
//     vector<int> v3 = {1,2,34};
//     v.push_back(v1);
//     v.push_back(v2);
    // v.push_back(v3);

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



// #include <bits/stdc++.h>
// using namespace std;

// bool printS3(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//     if (ind == n)
//     {
//         // condition Satisfied
//         if (s == sum)
//         {
//             for(auto it:ds)
//             {
//                 cout<<it<<" ";
//             }
//             cout<<endl;
//             return true;
//         }
//         // condition not satisfied
//         else return false;
        
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];

//     if(printS3(ind + 1, ds, s, sum, arr, n) == true) return true;

//     s-= arr[ind];
//     ds.pop_back();

//     // not pick
//     if(printS3(ind+1, ds, s,sum, arr, n) == true) return true;
// }

// int main()
// {
//     vector<int> ds;
//     printS3(0, ds, )
//     return 0;
// }
// void printS1(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//     if (ind == n)
//     {
//         if (s == sum)
//         {
//             for(auto it:ds)
//             {
//                 cout<<it<<" ";
//                 cout<<endl;
//             }
//         }
//         return;
        
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];
//     printS1(ind + 1, ds, s, sum, arr, n);
//     s-= arr[ind];
//     ds.pop_back();

//     // not pick
//     printS1(ind+1, ds, s,sum, arr, n);
// }

// void printF(int ind, vector<int>& ds, int arr[], int n)
// {
//     int maci = 0 ;
//     if (ind == n)
//     {
//         // for(auto it : ds)
//         // {
//         //     cout<<it<<" ";
//         // }
//         // if (ds.size() == 0)
//         // {
//         //     cout<<"{}";
//         // }
        
//         // cout<<endl;
//         int k = accumulate(ds.begin(), ds.end(), 0);
//         maci = max(maci, k);
//         return;
//     }
//     // not pick, or not take condition, thiselement is not added to you subsequence
//     printF(ind+1, ds, arr, n);

    
//     // take or pick the particular index into the subsequence
//     ds.push_back(arr[ind]);
//     printF(ind+1, ds, arr, n);
//     ds.pop_back();


    
// }



// #include <bits/stdc++.h>
// using namespace std;

// int count = 0;

// void printS1(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
// {
//     if (ind == n)
//     {
//         if (s == sum)
//         {
//             // for(auto it:ds)
//             // {
//             //     cout<<it<<" ";
//             //     cout<<endl;
//             // }
//             ::count++;
//         }
//         return;
        
//     }
//     ds.push_back(arr[ind]);
//     s += arr[ind];
//     printS1(ind + 1, ds, s, sum, arr, n);
//     s-= arr[ind];
//     ds.pop_back();

//     // not pick
//     printS1(ind+1, ds, s,sum, arr, n);
// }

// int main()
// {
//     vector <int > v;
//     int arr[] = {1,1,1};
//     int sum = 2;
//     int n = 3;
//     printS1(0, v, 0, sum, arr, n);
//     cout<<::count<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
#include <string.h>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    map <int, int> mp2 = {{1, 4}, {3, 2}, {4, 3}};
    // string s = "567";
    // char * j = "567";
    // int k = atoi(j);
    // cout<<mp['j']<<endl;
    // cout<<k<<endl;
    
    // int k = mp.find();
    // cout<<k;

    // cout<<mp.find(2).first;
    // int i = 4;
    // string s = "Ayush is a nice person";
    // // string j = s + to_string(i);
    // string sub = s.substr(5);
    // string j = "55";
    // int k = int(j);
    // cout<<k<<endl;

    // unordered_map<char, int> mp1 = {{'a', 1}, {'b', 2}, {'c', 3}};
    // if(mp1 == mp2)
    // {
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"No"<<endl;
    // }
    // for(auto i : mp2)
    // {
    //     cout<<i.first<<i.second<<endl;
    // }

    auto i = mp2.find(3);
    int sum = 0;
    while (i != mp2.end())
    {
        // sum = i;
        // cout<<i<<endl;
        cout<<(*i).second<<endl;

        i++;
    }

    for(auto i: mp2)
    {
        cout<<i.first<<i.second;
    }
    
    

    return 0;
}