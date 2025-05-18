#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i;
   cout<< "ENTER THE ELEMENT NUMBER :";
   cin>>n;

   int ar[n];
   cout<< "ENTER THE ARRAY ELEMENT :";

   for(i=0;i<n;i++)
   {
       cin>>ar[i];
   }

   for(i=0;i<n-1;i++)
   {
       int small=i;

       for(int j=i+1;j<n;j++)
       {
           if(ar[small]>ar[j])
           {
               small=j;

           }

       }

       int temp = ar[small];
       ar[small]= ar[i];
       ar[i]= temp;
   }

  cout<< "THE SORTED ARRAY IS :";
   for(i=0;i<n;i++)
   {
       cout<< ar[i];
       cout<< " ";
   }





}

