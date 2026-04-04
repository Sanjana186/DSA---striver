#include<iostream>
#include<vector>
using namespace std;
//right rotate an array by d places 
// TC:O(n)
// SC:O(n)

class Solution {
    public:
    void  rotateArray (vector<int> &a , int d)
    {
        int n = a.size();
        d = d % n;
        vector<int> temp = {};

        for(int i= n - d ; i < n; i++)
        {
            temp.push_back(a[i]);

        }
        for( int i = 0 ; i<d; i++)
        {
            a[(n-d)+i] = a[i];
        }

        for(int i=0; i< d ; i++)
        {
            a[i] = temp[i];
        }

    }
};

int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    Solution s1;
    s1.rotateArray(a,3);
    cout<<"after rotating:\n";
    for(int i : a)
    {
        cout<<i<<" ";
    }
    return 0;
}