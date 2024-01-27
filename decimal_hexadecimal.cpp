#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b=0,c[100];
    cout<<"-----DECIMAL TO HEXADECIMAL-----"<<endl;
    cout<<"enter the decimal : ";
    cin>>a;
    for(int i=0;a>=16;i++)
    {
        c[i]=a%16;
        a=a/16;
        b++;
    }
    if(a<16)
        c[b]=a;
    for(int i=b;i>=0;i--)
    {
        if(c[i]==10)
            cout<<"A";
        else if(c[i]==11)
            cout<<"B";
        else if(c[i]==12)
            cout<<"C";
        else if(c[i]==13)
            cout<<"D";
        else if(c[i]==14)
            cout<<"E";
        else if(c[i]==15)
            cout<<"F";
        else
            cout<<c[i];
    }


    cout<<endl<<endl<<"-----HEXADECIMAL TO DECIMAL-----"<<endl;
    int x=0,y=0,w=0,z[10],q=0;
    cout<<"enter the hexadecimal and end the digits while writing . : ";
    for(int i=0;x==0;i++)
    {
      char a='\0';
      cin>>a;
      if(a=='.')
        x=1;
      z[i]=int(a);
      y++;
    }
    cout<<endl<<"your decimal value is : ";
    for(int i=y-2;i>=0;i--)
    {
        if(z[i]==65 || z[i]==97)
            w=w+10*pow(16,q);
        else if(z[i]==66 || z[i]==98)
            w=w+11*pow(16,q);
        else if(z[i]==67 || z[i]==99)
            w=w+12*pow(16,q);
        else if(z[i]==68 || z[i]==100)
            w=w+13*pow(16,q);
        else if(z[i]==69 || z[i]==101)
            w=w+14*pow(16,q);
        else if(z[i]==70 || z[i]==102)
            w=w+15*pow(16,q);
        else if(z[i]==49)
            w=w+1*pow(16,q);
        else if(z[i]==50)
            w=w+2*pow(16,q);
        else if(z[i]==51)
            w=w+3*pow(16,q);
        else if(z[i]==52)
            w=w+4*pow(16,q);
        else if(z[i]==53)
            w=w+5*pow(16,q);
        else if(z[i]==54)
            w=w+6*pow(16,q);
        else if(z[i]==55)
            w=w+7*pow(16,q);
        else if(z[i]==56)
            w=w+8*pow(16,q);
        else if(z[i]==57)
            w=w+9*pow(16,q);
        else
            w=w;
        q++;
    }
    cout<<w;
    return 0;
}
