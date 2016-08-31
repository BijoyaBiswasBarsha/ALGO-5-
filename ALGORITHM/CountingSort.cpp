# include <iostream>
using namespace std;
void CountingSort(int arr1[],int fast,int last)
{
    int i,j;
    int arr2[100],arr3[100];     //arr1[] is input array,arr2[] is output array & arr3[] is auxilary array.
    for (i=0;i<=fast;i++)
    {
        arr3[i]=0;
    }
    for(j=1;j<=last;j++)
    {
        arr3[arr1[j]]=arr3[arr1[j]]+1;
    }
    for(i=1;i<=fast;i++)
    {
        arr3[i]=arr3[i]+arr3[i-1];
    }
    for(j=last;j>=1;j--)
    {
        arr2[arr3[arr1[j]]]=arr1[j];
        arr3[arr1[j]]=arr3[arr1[j]]-1;
    }
    cout<<"After using Countingsort the sorted numbers are:\n";
    for(int i=1;i<=last;i++)
    {
        cout<<endl<<arr2[i];
    }

}
int main()
{
    int last,fast=0,i;
    cout<<"Enter how many number you want to sort:";
    cin>>last;
    int arr1[last];
    cout<<"Enter numbers for sorting:\n";
    for(int i=1;i<=last;i++)
    {
        cin>>arr1[i];
        if(arr1[i]>fast)
          {
           fast=arr1[i];
           }
    }
    CountingSort(arr1,fast,last);

    return 0;
}
