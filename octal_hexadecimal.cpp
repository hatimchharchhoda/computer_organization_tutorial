#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c=0,d[20],k=0;
    cout<<"-----octal to hexadecimal-----"<<endl;
    cout<<"enter octal no : ";
    cin>>a;
    for(int i=0; a>0; i++)
    {
        b=a%10;
        c=c+b*pow(8,i);
        a=a/10;
    }
    for(int i=0; c>=16; i++)
    {
        d[i]=c%16;
        c=c/16;
        k++;
    }
    if(c<16)
        d[k]=c;
    cout<<"your hexadecimal value is : ";
    for(int i=k; i>=0; i--)
    {
        if(d[i]==10)
            cout<<"A";
        else if(d[i]==11)
            cout<<"B";
        else if(d[i]==12)
            cout<<"C";
        else if(d[i]==13)
            cout<<"D";
        else if(d[i]==14)
            cout<<"E";
        else if(d[i]==15)
            cout<<"F";
        else
            cout<<d[i];
    }


    int x=0,y=0,q=0,w=0,z[10],p=0;
    cout<<endl<<endl<<"-----hexadecimal to octal-----"<<endl;
    cout<<"enter hexadecimal no while ending digits with . : ";
    for(int i=0; x==0; i++)
    {
        char a='\0';
        cin>>a;
        if(a=='.')
            x=1;
        z[i]=int(a);
        y++;
    }
    for(int i=y-2; i>=0; i--)
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
    cout<<"your octal digit is : ";
    for(int i=0; w>=8; i++)
    {
        z[i]=w%8;
        w=w/8;
        p++;
    }
    if(w<8)
        z[p]=w;
    for(int i=p; i>=0; i--)
    {
        cout<<z[i];
    }
    return 0;
}
