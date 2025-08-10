#include <iostream>
using namespace std;

struct hinh_chu_nhat_s
{
    int dai;
    int rong;
};


class hinh_chu_nhat_c {
public:
    int dai;
    int rong;

    int dien_tich() {
        return dai * rong;
    }
};

int main()
{
    hinh_chu_nhat_s A;
    A.dai = 10;
    A.rong = 20;

    hinh_chu_nhat_c B;
    B.dai = 10;
    B.rong = 20;
    int x = B.dien_tich();
    cout << "Dien tich: " << x << endl;
    return 0;
}

