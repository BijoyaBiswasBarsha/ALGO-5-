# include<iostream>
using namespace std;
int main()
{
   int num,swp,i,j;
   cout<<"Enter how many number you want to sort:";
   cin>>num;
   int arr[num];
   cout<<"\nEnter numbers for sorting:"<<endl;
   for(i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<num;i++)
		 {
			 for(int j=i;j>0;j--)
			 {
				 if(arr[j]<arr[j-1])
				 {
					 swp=arr[j];
					 arr[j]=arr[j-1];
					 arr[j-1]=swp;
                 }
            }
		 }
cout<<"\nAfter using Insertionsort the sorted numbers are:"<<endl;
    for(i=0;i<num;i++)
   {
       cout<<endl<<arr[i];
   }
   return 0;
}

