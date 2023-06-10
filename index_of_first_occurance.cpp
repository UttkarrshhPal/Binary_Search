#include<iostream>
using namespace std;
int first_Occurance(int arr[],int n,int x)
{
     int l = 0;
     int h = n-1;
     int res = -1;
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
            res = mid;
            h=mid-1;
        }
     }
     return res;  
}
int main()
{
   int arr[] = {10,11,12,12,12,13};
   int n = 6;
   int x;
   cin>>x;
   int first_pos = first_Occurance(arr,n,x);
   cout<<first_pos;

}