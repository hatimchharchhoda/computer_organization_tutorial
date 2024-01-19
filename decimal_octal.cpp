#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b=0,c[20];
    cout<<"-----decimal to octal-----"<<endl;
    cout<<"enter decimal no : ";
    cin>>a;
    cout<<"your octal digit is : ";
    for(int i=0;a>=8;i++)
    {
        c[i]=a%8;
        a=a/8;
        b++;
    }
    if(a<8)
        c[b]=a;
    for(int i=b;i>=0;i--)
    {
        cout<<c[i];
    }


    int d,e,f=0;
    cout<<endl<<endl<<"-----octal to decimal-----"<<endl;
    cout<<"enter octal digits : ";
    cin>>d;
    cout<<"your decimal digit is : ";
    for(int i=0;d>0;i++)
    {
        e=d%10;
        f=f+e*pow(8,i);
        d=d/10;
    }
    cout<<f;
    return 0;
}
