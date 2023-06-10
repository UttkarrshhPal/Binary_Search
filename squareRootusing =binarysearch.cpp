class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long i =1;
        while(i<=10000000)
        {
            if((i*i)==x)
            {
            return i;
            }
            if((i*i)>x)
            {
            return i-1;
            }
            i++;
        }
    }
};
------------------------------------------------------------------------------------------
  Naive approach:
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        long i =1;
        while(i<=10000000)
        {
            if((i*i)==x)
            {
            return i;
            }
            if((i*i)>x)
            {
            return i-1;
            }
            i++;
        }
    }
};
