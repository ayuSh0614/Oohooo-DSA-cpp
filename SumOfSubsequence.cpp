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


// To print any subsequence whose sum is sum but this is not the optimised way
bool flag = false;
void printS2(int ind, vector<int> &ds, int s, int sum, int arr[], int n)
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
    printS2(ind + 1, ds, s, sum, arr, n);
    s-= arr[ind];
    ds.pop_back();

    // not pick
    printS2(ind+1, ds, s,sum, arr, n);
}

// Optimised way
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

// Counting of subsequences
int printS4(int ind, int s, int sum, int arr[], int n)
{
    if (ind == n)
    {
        if (s == sum)
        {
            return 1;
        }
        else return 0;
        
    }
    
    s += arr[ind];
    int l = printS4(ind + 1, s, sum, arr, n);
    s-= arr[ind];
    

    // not pick
    int r = printS4(ind+1, s,sum, arr, n);
    return l + r;
}


int main()
{
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector <int> ds;
    // printS3(0, ds, 0, sum, arr, n);
    cout<<printS4(0, 0, sum, arr, n);
    
    return 0;
}