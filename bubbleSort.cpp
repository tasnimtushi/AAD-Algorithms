#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n ,i;
   cout<< "ENTER THE TOTAL NUMBER :";
   cin>> n;

     int ar[n];
   cout<< "ENTER THE ARRAY ELEMENTS :  ";


    for (int i=0;i<n;i++)
    {
        cin>>ar[i];
    }

    for(i=0;i<n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                int temp = ar[j];
                ar[j]= ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    cout<< "THE SORTED ARRAY IS:";

   for (int i=0;i<n;i++)
    {
        cout<<ar[i];
        cout<< " ";
    }






}
