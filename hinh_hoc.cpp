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
	cout << "ham tao duoc khoi chay" << endl;
	dai = 0;
	rong = 0; 
}