#include <bits/stdc++.h> 
using namespace std;

struct NS{
    int ngay, thang, nam;
    NS(int ng, int th, int n){
        ngay =ng;
        thang=th;
        nam = n;
    };//ham tao co doi
    NS () {};//ham tao khong doi
    void nhapdl ()
    {
        char ch;
        cin>>ngay>>ch>>thang>>ch>>nam;
    }
};
int sosanh (NS ng1, NS ng2)
{
    if(ng1.nam <ng2.nam) return 1;
    if(ng2.nam < ng1.nam) return 2;

    if(ng1.thang <ng2.thang) return 1;
    if(ng2.thang < ng1.thang) return 2;

    if(ng1.ngay <ng2.ngay) return 1;
    if(ng2.ngay <ng1.ngay) return 2;

    return 0;
}

main()
{
    NS ngay1;
    NS ngay2 (2, 4, 2000);
    ngay1.nhapdl();
    if(sosanh (ngay1, ngay2)==1)
        cout<<"Ban 1 sinh truoc";
    else if (sosanh(ngay1,ngay2)==2)
        cout<<"Ban 2 sinh truoc";
    else cout<<"Hai dua cung ngay sinh";
}