# include<iostream>
using namespace std;
void max_heapify(int arr[],int i,int n)
{
    int l,r,largest,swape;
    l=2*i;
    r=((2*i)+1);

       if((l<=n)&& arr[l]>arr[i])
       {
           largest=l;
       }
       else
           largest=i;
       if((r<=n) && (arr[r]>arr[largest]))
       {
           largest=r;
       }
       if(largest!=i)
       {
         swape=arr[i];
         arr[i]=arr[largest];
         arr[largest]=swape;
         max_heapify(arr,largest,n);
       }

}
void build_max_heap(int arr[],int n)
{
    int j;
    for(j=n/2;j>=1;j--)
    {
       max_heapify(arr,j,n);
    }
}
void heapsort(int arr[],int n)
{
    build_max_heap(arr,n);
    int i,swape;
    for(i=n;i>=2;i--)
    {
        swape=arr[i];
        arr[i]=arr[1];
        arr[1]=swape;
        max_heapify(arr,1,i-1);
    }
}
int main()
{
    int num;
    cout<<"Enter how many numbers you want to sort:";
    cin>>num;
    int arr[num];
    cout<<"Enter numbers for sorting:\n";
    for(int i=1;i<=num;i++)
    {
        cin>>arr[i];
    }
    heapsort(arr,num);
    cout<<"After using Heapsort the Sorted numbers are:\n";
    for(int i=1;i<=num;i++)
    {
        cout<<endl<<arr[i];
    }
}
