#pragma once
#include "Car.h"

class SportsCar : public Car
{
public:
	bool bTurbo;
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void  speedUp() { // 터보가 ON이 되어 있으면 가속이 빨리됨
		if (bTurbo) speed += 20;
		else Car::speedUp(); // 콜론 두개 ::   -Car class에 있는 함수 사용할 때
	}
};