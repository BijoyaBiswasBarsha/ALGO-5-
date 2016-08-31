# include<iostream>
# include<stack>
using namespace std;
int main()
{
    int siz,num;
    stack<int>stk;
    int i;
    cout<<"Enter the Size of stack:";
    cin>>siz;
    cout<<"\n\nPush Elements:"<<endl;
    for(i=0;i<siz;i++)
    {
        cin>>num;
        stk.push(num);
    }
    if(stk.empty())
    {
        cout<<"\n\nStack empty";
    }
    else
        cout<<"\n\nStack not empty";
    cout<<"\n\nStack Top number:"<<stk.top();
    cout<<"\n\nStack Size:"<<stk.size();
    cout<<"\n\nAfter Pop number:"<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<endl<<stk.top();
        stk.pop();
    }
    if(stk.empty())
    {
        cout<<"\n\nStack empty";
    }
    else
        cout<<"\n\nStack not empty";

    cout<<"\n\nAfter pop stack size:"<<stk.size()<<endl;
}
