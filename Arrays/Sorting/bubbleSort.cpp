//Bubble sort 
/*Algorithm
for i=0 to n-2 do
for j =0 to n-2-i
if(a[j+1]<a[j])
swap(a[j],a[j+1]);
end if
*/
//TC: O(n^2)
#include<iostream>
#include<utility>
using namespace std;
void bsort(int a[] , int n)
{
    for(int i = 0 ; i < n-1; i++)
    {
        for( int j = 0 ; j < n-1-i ; j++)
        {
            if(a[j+1]<a[j])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"enter the size of the vector:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements :";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bsort(a,n);
    cout<<"Sorted array \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}





