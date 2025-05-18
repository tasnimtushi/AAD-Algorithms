#include<bits/stdc++.h>
using namespace std;

void swapE(int &a, int &b)
{
    int temp;
     temp= a;
     a=b;
     b=temp;
}

int partitionArr(int arr[],int low,int high)
{
    int pivot = arr[high];
    int i = low-1;

    for(int j =low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
               i++;
            swapE(arr[i],arr[j]);

        }
    }
    swapE(arr[i+1],arr[high]);
    return(i+1);
}
int quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi = partitionArr(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}

int main()
{
    int n;
    cout<< "ENTER THE NUMBER OF ELEMENT:";
    cin>>n;

    int arr[n];
    cout<< "ENTER THE ELEMENTS:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<< "SORTED ARRAY IS :";
    for(int i=0;i<n;i++)
    {
        cout<< arr[i]<< " ";
    }
}
