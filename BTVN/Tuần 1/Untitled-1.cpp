#include<iostream>
using namespace std;
main()
{
    int x;
    cin>>x;
    int y=1;
    int line=1;
    int count=0;
    for(int i=1;i<=x*x;i++)
    {
        if(y==x+1){y=1;}
        cout<<y<<' ';count++;
        if(x==count){y=line;line++;cout<<endl;count=0;}
        y++;
    }
}