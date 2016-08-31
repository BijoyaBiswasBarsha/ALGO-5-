#include<iostream>

using namespace std;


int main()
{

    int a[50];
    int n, i, j;

    cout<<"Enter the number of element:\n";
    cin>>n;

    cout<<"Enter the elements:\n";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int k=a[0];
    for(i=1; i<n; i++)
    {
        if(k<a[i])
        {
            k=a[i];
        }
    }


//Counting algorithm
    int c[k+1], b[n];

    for(i=0; i<=k; i++)
    {
        c[i]=0;
    }



    for(j=0; j<n; j++)
    {
        c[a[j]]=c[a[j]]+1;
    }


    for(i=1; i<=k; i++)
    {
        c[i]=c[i]+c[i-1];
    }


    for(j=n-1; j>=0; j--)
    {
        b[c[a[j]]-1]=a[j];
        c[a[j]]=c[a[j]]-1;
    }


cout<<"After sorting\n";
    for(i=0; i<n; i++)
    {
        cout<<b[i]<<endl;
    }

}
