# include <iostream>
using namespace std;
void marge(int arr[],int fast,int mid,int last)
{
    int n1,n2;
    n1=mid-fast+1;
    n2=last-mid;
    int L[n1];
    int R[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        L[i]=arr[fast+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[mid+j+1];
    }
    //L[n1]=-99;
    //R[n2]=-99;
    i=j=0;
    k=fast;
    for(k=fast;k<last;k++)
    //while(i<n1 && j<n2)
    {
      if(L[i]<R[j])
      {
          arr[k]=L[i];
          i++;
      }
      else
      {
         arr[k]=R[j];
          j++;
      }
       //k++;
    }
while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
      while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int fast,int last)
{
    int mid;
    if(fast<last)
    {
        mid=(last+fast)/2;
        mergesort(arr,fast,mid);
        mergesort(arr,mid+1,last);
        marge(arr,fast,mid,last);
    }
}

int main()
{
    int num;
    cout<<"Enter numbers:";
    cin>>num;
    int arr[num];
    cout<<"Enter numbers for sorting:\n";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,num);
    cout<<"Sorted numbers:\n";
    for(int i=0;i<num;i++)
    {
        cout<<endl<<arr[i];
    }
}
