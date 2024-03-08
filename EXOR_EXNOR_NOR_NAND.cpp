#include<bits/stdc++.h>
using namespace std;

void EXOR(char a[],char b[])
{
    int d[11],i;
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        d[i]=0;
        if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
            d[i]=1;
        else if((a[i]=='0' && b[i]=='0') || (a[i]=='1' && b[i]=='1'))
            d[i]=0;
    }
    cout<<"EXOR: ";
    for(int j=0;j<i;j++)
        cout<<d[j];
    cout<<endl;
}

void EXNOR(char a[],char b[])
{
    int d[11],i;
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        d[i]=0;
        if((a[i]=='0' && b[i]=='1') || (a[i]=='1' && b[i]=='0'))
            d[i]=0;
        else if((a[i]=='0' && b[i]=='0') || (a[i]=='1' && b[i]=='1'))
            d[i]=1;
    }
    cout<<"EXNOR: ";
    for(int j=0;j<i;j++)
        cout<<d[j];
    cout<<endl;
}

void NOR(char a[],char b[])
{
    int d[11],i;
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        d[i]=0;
        if(a[i]=='1' || b[i]=='1')
            d[i]=0;
        else
            d[i]=1;
    }
    cout<<"NOR: ";
    for(int j=0;j<i;j++)
        cout<<d[j];
    cout<<endl;
}

void NAND(char a[],char b[])
{
    int d[11],i;
    for(i=0;a[i]!='\0' || b[i]!='\0';i++)
    {
        d[i]=0;
        if(a[i]=='0' || b[i]=='0')
            d[i]=1;
        else
            d[i]=0;
    }
    cout<<"NAND: ";
    for(int j=0;j<i;j++)
        cout<<d[j];
    cout<<endl;
}

int main()
{
    char a[10],b[10];
    int c=0;
    cout<<"enter the binary number 1 : ";
    cin>>a;
    cout<<"enter the binary number 2 : ";
    cin>>b;
    EXOR(a,b);
    EXNOR(a,b);
    NAND(a,b);
    NOR(a,b);
    return 0;
}
