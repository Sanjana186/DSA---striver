#include<iostream>
#include<vector>
using namespace std;
//left rotating an array 
//TC:O(n)
//SC:O(n)
class Solution
{
    public: 
    void leftRotate(vector<int> &a, int d)
    {
        int n = a.size();
        d = d % n;
        vector<int> temp ={};
        for( int i =0; i< d; i++)
        {
            temp.push_back(a[i]);
        }
        for(int i = d ; i< n ; i++)
        {
            a[i - d] = a[i];

        }
        for ( int i=n-d;i<n;i++)
        {
            a[i] = temp[i-(n-d)];
        }
    }
};

int main()
{
    vector<int> a ={1,2,3,4,5,6,7};
    Solution s1;
    s1.leftRotate(a,3);
    cout<<"after left rotating:\n";
    for(int j : a)
    {
        cout<<j<<" " ;
    
    }
    return 0;
}