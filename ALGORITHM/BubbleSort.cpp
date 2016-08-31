# include<iostream>
using namespace std;
int main()
{
   int num,swp,i,j;
   cout<<"Enter how many numbers you want to sort:";
   cin>>num;
   int arr[num];
   cout<<"\nEnter numbers for sorting:"<<endl;
   for(i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<num-1;i++)
		 {
			 for(int j=0;j<num-i-1;j++)
			 {
				 if(arr[j]>arr[j+1])
				 {
					 swp=arr[j];
					 arr[j]=arr[j+1];
					 arr[j+1]=swp;
                 }
            }
		 }
cout<<"\nAfter using Bubblesort the sorted numbers are:"<<endl;
    for(i=0;i<num;i++)
   {
       cout<<endl<<arr[i];
   }
   return 0;
}
