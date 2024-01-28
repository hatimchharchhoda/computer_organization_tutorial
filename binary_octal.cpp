#include<iostream>
using namespace std;

int main()
{
    int a,b,c[100],d=0;
    cout<<"-----binary to octal-----"<<endl;
    cout<<"enter binary no : ";
    cin>>a;
    for(int i=0;a>0;i++)
    {
        b=a%1000;
        if(b==0)
            c[i]=0;
        else if(b==1)
            c[i]=1;
        else if(b==10)
            c[i]=2;
        else if(b==11)
            c[i]=3;
        else if(b==100)
            c[i]=4;
        else if(b==101)
            c[i]=5;
        else if(b==110)
            c[i]=6;
        else
            c[i]=7;
        a=a/1000;
        d++;
    }
    cout<<"your octal value is : ";
    for(int i=d-1;i>=0;i--)
    {
        cout<<c[i];
    }


    cout<<endl<<endl<<"-----octal to decimal-----"<<endl;
    int q,w,e[100],r=0;
    cout<<"enter your octal no : ";
    cin>>q;
    for(int i=0;q>0;i++)
    {
        w=q%10;
        e[i]=w;
        q=q/10;
        r++;
    }
    cout<<"your binary value is : ";
    for(int i=r-1;i>=0;i--)
    {
        if(e[i]==0)
            cout<<"000";
        else if(e[i]==1)
            cout<<"001";
        else if(e[i]==2)
            cout<<"010";
        else if(e[i]==3)
            cout<<"011";
        else if(e[i]==4)
            cout<<"100";
        else if(e[i]==5)
            cout<<"101";
        else if(e[i]==6)
            cout<<"110";
        else
            cout<<"111";
    }
    return 0;
}
