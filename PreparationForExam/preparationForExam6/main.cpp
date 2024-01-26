#include <iostream>

using namespace std;


//Да се дефинират и структурират в йерархична конструкция следните три класа: клас МПС (моторно превозно средство) с член-данни марка(символ) и година на
//производство, клас Автомобил с член-данна Регистрационен номер и клас Автомобил под наем с член данна Цена на наема.  И в трите класа да се дефинират
//конструктори с параметри и  член-функции за визуализация на член-данните. Чрез главната функция да се демонстрира функционалността на проектираната
//йерархична конструкция от класове.


class MPS {
protected:
    char brand;
    int yearOfProduction;

public:
    MPS (char br, int year){
        brand = br;
        yearOfProduction = year;
    }

    void displayInfo()  {
        std::cout << "Brand: " << brand << "\nYear of Production: " << yearOfProduction << std::endl;
    }
};

class Car : public MPS {
private:
    string registrationNumber;

public:
    Car(char br, int year, string regNo)
        : MPS(br, year), registrationNumber(regNo) {}


    void displayInfo()  {
        MPS::displayInfo();
        std::cout << "Registration Number: " << registrationNumber << std::endl;
    }
};

class RentalCar : public Car {
private:
    double rentalPrice;

public:
    RentalCar(char br, int year, string regNo, double price)
        : Car(br, year, regNo), rentalPrice(price) {}

    void displayInfo() {
        Car::displayInfo();
        std::cout << "Rental Price: " << rentalPrice << std::endl;
    }
};

int main() {
    MPS mps('A', 2022);
    Car car('B', 2020, "ABC123");
    RentalCar rentalCar('C', 2021, "XYZ456", 50.0);

    std::cout << "MPS Information:\n";
    mps.displayInfo();

    std::cout << "\nCar Information:\n";
    car.displayInfo();

    std::cout << "\nRental Car Information:\n";
    rentalCar.displayInfo();

    return 0;
}
