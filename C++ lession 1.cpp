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
    return 0;
}

