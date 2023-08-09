#include <iostream>
#include <vector>
using namespace std;

// To print all the subsequence
void printS1(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            for(auto it:ds)
            {
                cout<<it<<" ";
                cout<<endl;
            }
        }
        return;
        
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    printS1(ind + 1, ds, s, sum, arr, n);
    s-= arr[ind];
    ds.pop_back();

    // not pick
    printS1(ind+1, ds, s,sum, arr, n);
}


// To print any subsequence whose sum is sum
bool flag = false;
void printS(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum && flag == false)
        {
            flag = true;
            for(auto it:ds)
            {
                cout<<it<<" ";
                cout<<endl;
            }
        }
        return;
        
    }
    ds.push_back(arr[ind]);
    s += arr[ind];
    printS(ind + 1, ds, s, sum, arr, n);
    s-= arr[ind];
    ds.pop_back();

    // not pick
    printS(ind+1, ds, s,sum, arr, n);
}

int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector <int> ds;
    printS(0, ds, 0, sum, arr, n);
    
    return 0;
}