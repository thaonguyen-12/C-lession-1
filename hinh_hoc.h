#pragma once
class hinh_chu_nhat_c {
public:
    int dai;
    int rong;

    int dien_tich();
    int chu_vi();
    hinh_chu_nhat_c();
    ~hinh_chu_nhat_c();
};

class phan_so {
public:
    int tu_so;
    int mau_so;

    phan_so();
    phan_so nhan(phan_so ps);
      
};

