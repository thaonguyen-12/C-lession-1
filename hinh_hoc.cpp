#include "hinh_hoc.h"
#include <iostream> 
using namespace std; 
int hinh_chu_nhat_c::dien_tich(){
	return dai * rong;
}

int hinh_chu_nhat_c::chu_vi() {
	return (dai + rong) * 2; 
}

hinh_chu_nhat_c::hinh_chu_nhat_c()
{
	cout << "ham tao duoc khoi tao " << endl;
	dai = 0;
	rong = 0; 
}
hinh_chu_nhat_c::~hinh_chu_nhat_c() {
	cout << "ham huy duoc khoi tao " << endl;
}

phan_so::phan_so() {
	cout << "ham tao" << endl;
	tu_so = 0;
	mau_so = 1; 
}
phan_so phan_so::operator*(phan_so ps){
	phan_so kq;
	kq.tu_so = tu_so * ps.tu_so;
	kq.mau_so = mau_so * ps.mau_so;
	return kq;
}

