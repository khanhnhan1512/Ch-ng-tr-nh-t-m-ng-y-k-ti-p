#include <iostream>
using namespace std;
int main()
{
    int ngay, thang, nam,ngaytoida;
    cout << "nhap ngay "; 
    cin >> ngay;
    cout << "nhap thang ";
    cin >> thang;
    cout << "nhap nam ";
    cin >> nam;
   // cout << "nhap ngay thang nam " << endl;
   // cin >> ngay >> thang >> nam;
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    { ngaytoida = 31;
    break; }
    case 4:
    case 6:
    case 9:
    case 11:
    { ngaytoida = 30;
    break; }
    case 2:
    {if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
    {
        ngaytoida = 29;
    }
    else { ngaytoida = 28; }
    break;
    }
    }
    if (ngay==ngaytoida&&thang==12)
    {
        ngay = 1;
        thang = 1;
        nam += 1;
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
    else if (ngay == ngaytoida && thang != 12)
    {
        ngay = 1;
        thang += 1;
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
    else {
        ngay += 1;
        cout << ngay << "/" << thang << "/" << nam << endl;
    }
    return 0;
}

