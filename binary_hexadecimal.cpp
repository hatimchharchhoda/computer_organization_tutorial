#include<iostream>
using namespace std;
int main()
{
    int a,b,c[100],d=0;
    cout<<"-----binary to hexadecimal-----"<<endl;
    cout<<"enter binary no : ";
    cin>>a;
    for(int i=0;a>0;i++)
    {
        b=a%10000;
        char e='\0';
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
        else if(b==111)
            c[i]=7;
        else if(b==1000)
            c[i]=8;
        else if(b==1001)
            c[i]=9;
        else if(b==1010)
        {
            e='A';
            c[i]=int(e);
        }
        else if(b==1011)
        {
            e='B';
            c[i]=int(e);
        }
        else if(b==1100)
        {
            e='C';
            c[i]=int(e);
        }
        else if(b==1101)
        {
            e='D';
            c[i]=int(e);
        }
        else if(b==1110)
        {
            e='E';
            c[i]=int(e);
        }
        else
        {
            e='F';
            c[i]=int(e);
        }
        a=a/10000;
        d++;
    }
    cout<<"your hexadecimal value is : ";
    for(int i=d-1;i>=0;i--)
    {
        if(c[i]==65)
            cout<<"A";
        else if(c[i]==66)
            cout<<"B";
        else if(c[i]==67)
            cout<<"C";
        else if(c[i]==68)
            cout<<"D";
        else if(c[i]==69)
            cout<<"E";
        else if(c[i]==70)
            cout<<"F";
        else
            cout<<c[i];
    }


    cout<<endl<<endl<<"-----hexadecimal to binary-----"<<endl;
    int x=0,y,z[100],k=0;
    cout<<"enter hexadecimal no while end digits with . : ";
    for(int i=0;k==0;i++)
    {
        char e='\0';
        cin>>e;
        z[i]=int(e);
        if(e=='.')
            k=1;
        x++;
    }
    cout<<"your binary value is : ";
    for(int i=0;i<x-1;i++)
    {
        if(z[i]==65 || z[i]==97)
            cout<<"1010";
        else if(z[i]==66 || z[i]==98)
            cout<<"1011";
        else if(z[i]==67 || z[i]==99)
            cout<<"1100";
        else if(z[i]==68 || z[i]==100)
            cout<<"1101";
        else if(z[i]==69 || z[i]==101)
            cout<<"1110";
        else if(z[i]==70 || z[i]==102)
            cout<<"1111";
        else if(z[i]==49)
            cout<<"0001";
        else if(z[i]==50)
            cout<<"0010";
        else if(z[i]==51)
            cout<<"0011";
        else if(z[i]==52)
            cout<<"0100";
        else if(z[i]==53)
            cout<<"0101";
        else if(z[i]==54)
            cout<<"0110";
        else if(z[i]==55)
            cout<<"0111";
        else if(z[i]==56)
            cout<<"1000";
        else if(z[i]==57)
            cout<<"1001";
        else
            cout<<"0000";
    }
    return 0;
}
