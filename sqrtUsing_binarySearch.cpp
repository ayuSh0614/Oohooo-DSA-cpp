// only integer part

#include <iostream>
using namespace std;

int binarySearch(int n) // only integer part
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;

    long long int ans = -1;
    while (start <= end)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            start = mid + 1;

        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;

        
    }
    return ans;
    
}

double morePrecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = 0; j*j < n; j+=factor)
        {
            ans = j;
        }
        
    }
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number "<< endl;
    cin>>n;
    int tempSol = binarySearch(n);

    
    cout<<"The square root is: "<< morePrecision(n, 3, tempSol)<<endl;
    return 0;
}