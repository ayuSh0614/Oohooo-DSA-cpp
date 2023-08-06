#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
            
        }
        if (swapped == false)
        {
            // for already sorted
            break;
        }
        
    }
    
}

int main()
{
    int arr[] = {8, 10, 17, 1, 3};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}