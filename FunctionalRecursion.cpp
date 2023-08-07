#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n-1);
    
}

int factorial(int n)
// Space Complexity = O(n)
// Time Complexity = O(n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n-1);
    
}

int main()
{
    int n = 3;
    cout<<sum(n)<<endl;
    cout<<factorial(5);
    return 0;
}