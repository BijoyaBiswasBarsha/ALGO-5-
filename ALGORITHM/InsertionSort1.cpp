# include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num,key;
    cout<<"Enter how many number you want to sort:";
    cin>>num;
    int arr[num];
    cout<<endl<<"Enter numbers for sorting:"<<endl;
    for(j=0;j<num;j++)
    {
        cin>>arr[j];
    }
    for(j=1;j<num;j++)
    {
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key)
        {
            arr[i+1]=arr[i];
            i=i-1;
        }
        arr[i+1]=key;
    }
    cout<<endl<<"After sorting the numbers are:"<<endl;
    for(j=0;j<num;j++)
    {
        cout<<endl<<arr[j];
    }
    return 0;

}
