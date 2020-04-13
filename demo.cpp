#include <iostream>
#include <Windows.h>

#include <Easing.h>

void callobj(
	double schedule,	//当前进度
	double cValue,		//当前缓动值
	int totalframes,	//总帧数
	int nframe,			//当前帧数
	bool &stop,			//是否停止
	int param1,
	int param2
){
	std::cout.setf(std::ios::fixed);
	std::cout << std::setprecision(5) << cValue<<std::endl;
	if(schedule==0.5){
		stop=true;//回调内部可以随时停止运算
	}
}


int main() {
	Easing test;
	test.Easing_strat(EasingType_CircularCurve_In,100,5,0,1, callobj,false,0,0);
	
}
