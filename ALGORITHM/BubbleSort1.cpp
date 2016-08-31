# include<iostream>
using namespace std;
int main()
{
    int i,j;
    int num,swp;
    cout<<"Enter how many number you want to sort:";
    cin>>num;
    int arr[num];
    cout<<endl<<"Enter numbers for sorting:"<<endl;
    for(j=0;j<num;j++)
    {
        cin>>arr[j];
    }
    for(i=0;i<num;i++)
    {
        for(j=num;j>=i+1;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=swp;
            }
        }
    }
    cout<<endl<<"After sorting the numbers are:"<<endl;
    for(j=0;j<num;j++)
    {
        cout<<endl<<arr[j];
    }
    return 0;
}
