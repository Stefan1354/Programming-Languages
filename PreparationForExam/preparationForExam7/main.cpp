#include <iostream>

using namespace std;


//Да се състави клас Point с член-данни: координати на точка (цели числа) и име (символ), и член-функции: конструктор(без параметри) за въвеждане на данните
//на класа и три get функции, съответно за достъп до координатите и името. Да се състави клас Circle с член-данни: обект от клас Point и радиус(цяло число),
//и член функции: конструктор(без параметри) за въвеждане на данните на класа, get функция за достъп до радиуса и функция, която извежда всички параметри на
//окръжността (координати на центъра, радиуса и името). Да се състави главна функция, в която да се дефинира масив от 5 обекта от класа Circle, след което да
//се изведат параметрите на всички окръжности с радиус по-голям от 10. Решението да се напише на С++.


class Point {
private:
    int x;
    int y;
    char name;

public:
    Point() {
        cout << "Enter x: ";
        cin >> x;

        cout << "Enter y: ";
        cin >> y;

        cout << "Enter name: ";
        cin >> name;
    }

    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    char getName() {
        return name;
    }
};

class Circle {
private:
    Point center;
    int radius;

public:
    Circle() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    int getRadius() const {
        return radius;
    }

    void displayInfo() const {
        cout << "Center: (" << center.getX() << ", " << center.getY() << ")"
             << ", Radius: " << radius
             << ", Name: " << center.getName() << endl;
    }
};

int main() {
    const int numCircles = 5;
    Circle circles[numCircles];

    cout << "Circles with radius greater than 10:\n";
    for (int i = 0; i < numCircles; ++i) {
        if (circles[i].getRadius() > 10) {
            circles[i].displayInfo();
        }
    }

    return 0;
}
