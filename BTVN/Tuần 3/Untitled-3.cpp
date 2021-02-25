#include<iostream>
using namespace std;
bool namnhuan (int);
bool thang31 (int);
void output (int, int, int);
main()
{
    int ngay,thang,nam;
    int date,month,year;
    char bo_di;
    cin>>ngay>>bo_di>>thang>>bo_di>>nam;
    int x=1;
    int check=namnhuan(nam);
    while(x!=0)
    {
        date=ngay;month=thang;year=nam;
        cin>>x;
        if(x==0){break;}
        date+=x;
        if(thang31(thang))
        {
            if(date<=0){date=31+date;month--;}
            if(date>31){date=date-31;month++;}
        }else{
            if(date<=0){date=30-1;month--;}
            if(date>30){date=date-30;month++;}
        }
        if(month>12){month=1;year++;}else if(month<1){month=12;year--;}
        output(date,month,year);
    }
}
bool thang31 (int x)
{
    if(x<=7&&x%2==1){return true;}
    if(x>7&&x%2==0){return true;}
    return false;
}
bool namnhuan (int x)
{
    if(x%400==0||(x%100!=0&&x%4==0)){return true;}
    return false;
}
void output (int d, int m, int y)
{
    if(d<10&&m<10){cout<<'0'<<d<<"-0"<<m<<'-'<<y<<endl;}
    if(d<10&&m>=10){cout<<'0'<<d<<'-'<<m<<'-'<<y<<endl;}
    if(d>=10&&m<10){cout<<d<<"-0"<<m<<'-'<<y<<endl;}
    if(d>=10&&m>=10){cout<<d<<'-'<<m<<'-'<<y<<endl;}
}