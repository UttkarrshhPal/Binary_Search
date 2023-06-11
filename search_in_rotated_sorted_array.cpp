#include<iostream>
using namespace std;
int search_rotated_sorted(int arr[],int n,int x)
{
    //10,20,30,40,50,8,9
    // find which half is sorted
    int l = 0;
    int h = n-1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(arr[mid]==x) return mid;

        if(arr[mid]>arr[l])  // left half is sorted
        {
           // check range of x
           if(x>=arr[l] && x<arr[mid])
           {
              h= mid-1;
           }
           else
           {
             l = mid+1;
           }
        }

        else // right half is sorted
        {
           // check the range of x
           if(x>arr[mid] && x<=arr[h])
           l = mid+1;

           else
           h= mid-1; 
        }

    }
    return -1;
}
int main()
{
   int arr[] = {10,20,30,40,50,8,9};
   int n = 7;
   int x;
   cin>>x;
   int p = search_rotated_sorted(arr,n,x);
   cout<<p;

}