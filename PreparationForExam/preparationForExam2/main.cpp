#include <iostream>

using namespace std;

//Да се проектира конструкция от два класа (единият, от които абстрактен)за преобразуване на
//измервания на температура по Фаренхайт (0F) в температура по Целзий (0C). Класовете, нпр.
//Temperature и Celsius да съдържат необходимите член-данни (температура) и член-функции
//(set, get и за преобразуване на температура). Да се използва формулата C = 5/9*(F-32).
//Решението (C++) да включва и главна функция, демонстрираща функционалността на кода и
//възможностите на полиморфизма.


class Temperature{
protected:
    double temperature;

public:
    virtual double convertToCelsius() = 0;

    double getTemperature(){
        return temperature;
    }

    void setTemperature(int temp){
        temperature = temp;
    }
};

class Celsius : public Temperature{
public:
    double convertToCelsius() override {
        return (temperature-32)*5/9;
    }
};

int main()
{
    Temperature* ptrSensor = new Celsius();

    ptrSensor->setTemperature(100.0);

    std::cout<<ptrSensor->convertToCelsius()<<endl;

    return 0;
}
