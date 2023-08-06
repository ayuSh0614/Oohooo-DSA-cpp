#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j-=1)
        {
            if (arr[j] > temp)
            {// shift
                arr[j+1] = arr[j];
            }
            else
            {// stop
                break;
            }
            
        }
        arr[j+1] = temp;
    }
    
}


void insertionSort1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        while(j >= 0)
        {
            if (arr[j] > temp)
            {// shift
                arr[j+1] = arr[j];
            }
            else
            {// stop
                break;
            }
            j-=1;
            
        }
        arr[j+1] = temp;
    }
    
}

int main()
{
    int arr[]= {8, 10, 17, 1, 3};
    insertionSort1(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}