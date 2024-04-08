#include <cstdio>
#include <iostream>
/*#include "Car.h"
#include "SportsCar.h"
int main() {
	Car myCar(50, "K3", 4);
	Car yourCar(100, "K5", 3);
	myCar.display();
	yourCar.display();
	myCar.whereAmI();
	yourCar.whereAmI();
	//SportsCar 클래스 사용
	SportsCar scar;
	scar.speedUp();
	
}
*/
#include "Rectangle.h"
int main() {
	Rectangle r(10, 20);
	double perimeter = r.getPerimeter();  //cout: print 와 같은 기능
	std::cout << "Rectangle 1:" << std::endl;
	std::cout << "Area" << r.getArea() << std::endl;
	std::cout << "Perimeter" << perimeter << std::endl;
	std::cout << "is square?" << std::boolalpha << r.isSquare() << std::endl;
};