#include <iostream>

//Да се състави абстрактен клас Лице на окръжност с член-данна радиус (число) и член-функции : от тип set за задаване на радиуса,
//от тип get за достъп до радиуса и за изчисляване на лице на окръжност. Да се състави клас Окръжност с член-функция за изчисляване лице на окръжност.
//За изчисляване на лице на окръжност S=2*r*3.14 да се използва виртуална функция. Да се състави главна функция, в която чрез обекти се изчисляват лицата
//на две окръжности с произволни радиуси и се извежда радиуса на по-голямата от тях.

using namespace std;


class LiceOkrujnost {
protected:
	double radius;
public:
	virtual double calculateArea() const = 0;

	void setRadius(double r) {
            radius = r;
    }

    double getRadius() {
            return radius;
    }
};

class Okrujnost : public LiceOkrujnost {
public:
	double calculateArea() const override {
		return 2*3.14*radius;
	}
};


int main() {
	Okrujnost circle1, circle2;

	circle1.setRadius(10.00);
	circle2.setRadius(15.00);

	double area1 = circle1.calculateArea();
	double area2 = circle2.calculateArea();

    cout<<"Area 1 is: "<<area1<<endl;
    cout<<"Area 2 is: "<<area2<<endl;

    if (area1 > area2) {
        std::cout << "Radius of the larger circle: " << circle1.getRadius() << std::endl;
    } else if (area2 > area1) {
        std::cout << "Radius of the larger circle: " << circle2.getRadius() << std::endl;
    } else {
        std::cout << "The circles have the same area." << std::endl;
    }

    return 0;
}
