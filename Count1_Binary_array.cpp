#include<iostream>
using namespace std;
int first_Occurance(int arr[],int n)
{
     int l = 0;
     int h = n-1;
     int res_f = -1;
     while (l<=h)
     {
        int mid = (l+h)/2;
        if(arr[mid]>1)
        {
           h = mid-1;
        }
        else if(arr[mid]<1)
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
int last_Occurance(int arr[],int n)
{
    int l = 0;
    int h = n-1;
    int res_l = -1;
    while(l<=h)
    {
         int mid = (l+h)/2;
         if(arr[mid]>1)
         {
             h = mid-1;
         }
         else if(arr[mid]<1)
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
int count_one(int arr[],int n)
{
    int l = last_Occurance(arr,n);
    int f = first_Occurance(arr,n);
    return (l-f)+1;

}
int main()
{
   int arr[] = {0,0,0,1,1,1};
   int n = 6;
   int x = 1;
   int no = count_one(arr,n);
   cout<<no;
}