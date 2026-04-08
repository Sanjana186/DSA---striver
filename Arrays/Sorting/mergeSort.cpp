/* Merge Sort
Algorithm:
MergeSort(A[], low, high )
if(low<high)
    mid = (low+high)/2
    MergeSort(A,low,mid-1)
    MergeSort(A,mid+1,high)
    Merge(A,low,mid,high)
end if
Merge(A,low,mid,high)
i=low, j=mid+1, k=low
while(i<=mid and j<=high)
if(A[i]<A[j])
    temp[k++]=a[i++]
else
    temp[k++]=a[j--]
end if
end while
while(i<=mid)
    temp[k++]=a[i++]
while(j<=high)
    temp[k++]=a[j--]
for k = low to high
do
    a[k] = temp[k]
*/
//TC: O(logn) for all the cases 
//SC: O(n)

#include<iostream>
#include<array>
using namespace std;


void merge(int a[], int low, int mid , int high, int n)
{
    int temp[n];
    int i = low;
    int j = mid;
    int k = low;
    while ( i<= mid && j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else
        {
            temp[k++]=a[j--];
        }

    }
    while( i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=high)
    {
        temp[k++]=a[j--];
    }
    for(int k=low; k<=high; k++)
    {
        a[k] = temp[k];
    }
}

void mergeSort(int a[], int low, int high,int n)
{

    int mid = (low+high)/2;
    mergeSort(a,low,mid,n);
    mergeSort(a,mid+1,high,n);
    merge(a,low,mid,high,n);
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergeSort(a,0,n-1,n);
    cout<<"Sorted elements: \n";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}