#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    char str[SIZE] ;

    gets(str);

    cout<<"String in File: ";
    puts(str);

    int i,j,k,l;
    int length=0;

    for(i=0; str[i] !='\0' ;i++)
    {
    }

    length = i;

    cout<<"String length: "<<length<<endl;

    int wordcount=0;

    char subword[20][20];

    k=j=0;


   cout<<endl<<" Word "<<wordcount+1<<": ";

     for(i=0; str[i] !='\0' ;i++)
    {

            if(isalpha(str[i]))
            {
                cout<<str[i];
                subword[k][j++] = str[i];
            }


            if(isalpha(str[i]) && !isalpha(str[i+1]))
               {

                  subword[k][j] ='\0';
                  k++;
                  j=0;

                  wordcount++;

                  cout<<endl<<" Word "<<wordcount+1<<": ";

               }

    }

    cout<<endl<<"Number of Word: "<<wordcount;


    cout<<endl<<"Substring 0: ";
    puts(subword[0]);


    return 0;
}
