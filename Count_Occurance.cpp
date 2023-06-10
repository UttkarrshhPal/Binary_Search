#include<iostream>
using namespace std;
int first_Occurance(int arr[],int n,int x)
{
     int l = 0;
     int h = n-1;
     int res_f = -1;
     while (l<=h)
     {
        int mid = (l+h)/2;
        if(arr[mid]>x)
        {
           h = mid-1;
        }
        else if(arr[mid]<x)
        {
           l = mid+1;
        }
        else
        {
            res_f = mid;
            h=mid-1;
        }
     }
     return res_f;  
}
int last_Occurance(int arr[],int n,int x)
{
    int l = 0;
    int h = n-1;
    int res_l= -1;
    while(l<=h)
    {
         int mid = (l+h)/2;
         if(arr[mid]>x)
         {
             h = mid-1;
         }
         else if(arr[mid]<x)
         {
            l = mid+1;
         }
         else 
         {
             res_l = mid;
             l = mid+1;  
         }    
    }
    return res_l;
}
int Count_Occurance(int arr[],int n,int x)
{
     int first = first_Occurance( arr,n,x);
     int last  = last_Occurance(arr,n,x);

     return (last-first);
}
int main()
{
   int arr[] = {10,11,12,12,12,13};
   int n = 6;
   int x;
   cin>>x;
   int no = Count_Occurance(arr,n,x);
   cout<<no;
}