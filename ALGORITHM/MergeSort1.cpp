# include<iostream>
using namespace std;
void Merge(int arr[],int fast,int mid,int last)
{
    int i,j,k,a[100];
    i=fast;
    k=fast;
    j=mid+1;
    while(i<=mid && j<=last){
        if(arr[i]<arr[j])
        {
            a[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            a[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        a[k]=arr[i];
        k++;
        i++;
    }
    while(j<=last){
        a[k]=arr[j];
        k++;
        j++;
    }
    for(i=fast;i<k;i++){
        arr[i]=a[i];
    }

}
void MergeSort(int arr[],int fast,int last){
    int mid;
    if(fast<last)
    {
        mid=(last+fast)/2;
        MergeSort(arr,fast,mid);
        MergeSort(arr,mid+1,last);
        Merge(arr,fast,mid,last);
    }

}
int main()
{
    int num;
    cout<<"Enter how many number you want to sort:";
    cin>>num;
    int arr[num];
    cout<<"Enter numbers for sorting:\n";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,num-1);
    cout<<"After using Mergesort the sorted numbers are :\n";
    for(int i=0;i<num;i++)
    {
        cout<<endl<<arr[i];
    }
}
