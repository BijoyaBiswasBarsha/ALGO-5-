# include<iostream>
# include<string.h>
# include<stdio.h>
using namespace std;
int main()
{
    int length,i,no=1;
    char str[100];
    cout<<"Enter string:\n";
    gets(str);   //cin.getline(str,100);
    puts(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]==' '&&str[i-1]!=' ')
            no++;
    }
    cout<<"\nNo of words:"<<no;
    no=1;
    cout<<"\nWord no "<<no<<": ";
    char word[200][200];
    int j,k;
    j=k=0;
    for(i=0;i<length;i++)
    {
        if(str[i]!=' '&&str[i]!='.'&&str[i]!=',')
        {
           cout<<str[i];
           word[k][j++]=str[i];

        }

            else if(str[i]==' '&&str[i-1]!=' ')

            {
                word[k][j]='\0';
                k++;
                j=0;
                cout<<"\nword no "<<++no<<": ";
            }
    }
    cout<<"\nsearching word:";

 puts(word[5]);


    return 0;

}
