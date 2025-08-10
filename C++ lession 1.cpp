#include <iostream>
#include "hinh_hoc.h"
using namespace std;

int main()
{

    hinh_chu_nhat_c A;
    A.dai = 10;
    A.rong = 20;
    int x = A.dien_tich();
    int y = A.chu_vi();
    cout << "Dien tich: " << x << endl;
    cout << "Chu vi:" << y << endl; 

    phan_so ps1;
    ps1.tu_so = 2;
    ps1.mau_so = 3;

    phan_so ps2;
    ps2.tu_so = 4;
    ps2.mau_so = 5;

    // phan_so kq = ps1.operator*(ps2);
  /*  phan_so kq;
    kq = ps1 * ps2;
    cout << kq.tu_so << "/" << kq.mau_so << endl;*/

    phan_so A;
    phan_so B(1, 2);
    cout << "Phan so B: " << B.tu_so << "/" << B.mau_so << endl;
    return 0;
    

}

