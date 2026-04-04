#include<iostream>
#include<vector>
#include<stdlib.h>
#include<climits>
using namespace std;
//finding the second largest in an array which is not sorted 
//TC: O(2n) which is basically O(n)
//SC: O(1);
//in the approach with sorting: find the second to last element of the array , TC:O(nlogn)

class Solution
{
    int secMax = INT_MIN;
    int maxi = INT_MIN;
   public: int secLargest(vector<int> a, int n)
    {
        
        for(int i=0;i<n;i++)
        {
            if (a[i]>=maxi)
            {
                maxi = a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>= secMax && a[i] != maxi )
            {
                secMax = a[i];
            }
        }
    return secMax;
    }
};

int main()
{
    vector<int> a = {2,3,1,4,5,2,3,6,7,8,89};
    int n = a.size();
    Solution s1;
    int s_largest = s1.secLargest(a,n);
    cout<<"Second largest in the array is "<<s_largest<<endl;
    return 0;
}

