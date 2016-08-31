# include<iostream>
# include<math.h>
using namespace std;
int main ()
{
    int num;
    cout<<"How many numbers you want to input:";
    cin>>num;
    int arr[num];
    int i,j,range,result;
if(num%2==0){
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    j=num-1;
    cout<<"Output:";
    for(i=0;i<num/2;i++)
    {
        result=arr[i]-arr[j];
        if(result>=0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"0 ";
        }
        j--;
    }
    }
    else
    {
      for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    range=ceil((float)num/2.0);
    j=num-1;
    cout<<"Output:";
    for(i=0;i<range;i++)
    {
        result=arr[i]-arr[j];

        if(result>=0)
        {
            cout<<"1 ";
        }
        else
        {
            cout<<"0 ";
        }

        j--;
    }
    }
    return 0;
}
