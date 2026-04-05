#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public: 
    int maxOnes(vector<int> a)
    {
        int cnt,max;
        max = 0;
        cnt = 0;
        for (int i : a)
        {
            if(i == 1)
            {
                cnt++;

            }
            else{
                if(cnt>=max)
                {
                    max = cnt;
                    cnt = 0;
                }
            }
        }
        return max;
    }

};

int main()
{
    vector<int> a = {1,1,0,1,1,1,0,1,1};
    Solution s;
    int ans = s.maxOnes(a);
    cout<<ans;
    return 0;
}