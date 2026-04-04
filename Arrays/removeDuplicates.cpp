//Remove duplicates from a sorted array
//Two-Pointer approach 
//TC: O(n)
//SC: O(1)
 
#include<iostream>
#include<vector>
using namespace std;

class Solution
{
    public: int removeDuplicate (vector<int> &a, int n)
    {
        
        int i=0;
            for(int j=1;j<n;j++)
            {
                if(a[j-1]!=a[j])
                {
                    a[i+1]=a[j];
                    i++;
                }
            }
        
        return i+1;
    }
     
    
};
int main()
{   
    Solution s1;
    vector<int> a ={ 1,1,1,2,3,3,4,4,5,6,6,7};
    int n = a.size();

    cout<<"Array with duplicates \n";
    for ( int i : a)
    {
        cout<<i<<" " ;
    }
    int m = s1.removeDuplicate(a,n);
    cout<<"\nArray without duplicates\n";
    for ( int j=0;j<m;j++ )
    {
        cout<<a[j]<<" ";
    }
    return 0;
}