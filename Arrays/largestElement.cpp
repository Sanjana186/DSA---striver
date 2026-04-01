//Finding the largest element in the array
//TC: O(n)
//SC: O(1)

#include<iostream>
#include<vector>
using namespace std;
//test change 
class Solution
{
    public:
    int largestElement( vector<int> nums)
    {
        int largest = nums[0];
        for(int i=1; i< nums.size(); i++)
        {
            if(nums[i]>largest)
        {
            largest = nums[i];
        }
        }
        return largest;
    }
};
int main()
{
    Solution s1;
    vector<int> nums = { 2,1,44,5,43,66,76,5,9};
    int maxi = s1.largestElement(nums);
    cout<<maxi<<endl;
    return 0;

}