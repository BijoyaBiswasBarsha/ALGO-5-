# include <iostream>
using namespace std;
int main()
{
    int num,i,j,swp;
    cout<<"Enter how many number you want to sort:";
    cin>>num;
    int arr[num];
    cout<<"Enter numbers for sorting:\n";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];

    }
    for (i=0;i<num-1;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(arr[i]>arr[j])
            {
                swp=arr[i];
                arr[i]=arr[j];
                arr[j]=swp;
            }
        }
    }
    cout<<"After using Selectionsort the sorted numbers are:\n";
    for(int i=1;i<num;i++)
    {
        cout<<endl<<arr[i];
    }
    return 0;
}
