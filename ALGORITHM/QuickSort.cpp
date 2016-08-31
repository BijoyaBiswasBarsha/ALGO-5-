# include<iostream>
using namespace std;
int Partition(int arr[],int fast,int last)
{
    int x=arr[last];
    int i=fast-1;
    int j,swp;
    for(j=fast;j<=last-1;j++)
    {
        if(arr[j]<=x)
        {
            i=i+1;
            swp=arr[i];
            arr[i]=arr[j];
            arr[j]=swp;
        }
    }
    swp=arr[i+1];
    arr[i+1]=arr[last];
    arr[last]=swp;
    return i+1;
}
void QuickSort(int arr[],int fast,int last)
{
    int mid;
    if(fast<last)
    {
        mid=Partition(arr,fast,last);
        QuickSort(arr,fast,mid-1);
        QuickSort(arr,mid+1,last);
    }
}
int main()
{
    int num;
    cout<<endl<<"Enter how many numbers you want to sort:";
    cin>>num;
    int i;
    int arr[num];
    cout<<endl<<"Enter numbers for sorting:"<<endl;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    QuickSort(arr,0,num);
    cout<<endl<<"After using Quicksort the sorted numbers are:"<<endl;
    for(i=0;i<num;i++)
    {
        cout<<endl<<arr[i];
    }
    return 0;

}
