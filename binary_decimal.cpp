#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a[20],b,c=0;
    cout<<"-----decimal to binary-----"<<endl;
    cout<<"enter an decimal : ";
    cin>>b;
    for(int i=0;b>0;i++)
    {
        a[i]=b%2;
        b=b/2;
        c++;
    }
    cout<<endl<<"your binary value is : ";
    for(int i=c-1;i>=0;i--)
    {
        cout<<a[i];
    }
    c=0;
    int d,e;
    cout<<endl<<endl<<"-----binary to decimal-----"<<endl;
    cout<<"enter binary no. : ";
    cin>>d;
    cout<<endl<<"your decimal value is : ";
    for(int i=0;d>0;i++)
    {
        e=d%10;
        c=c+e*pow(2,i);
        d=d/10;
    }
    cout<<c;
    return 0;
}
