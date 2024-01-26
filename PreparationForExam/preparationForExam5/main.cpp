#include <iostream>

using namespace std;

//Да се дефинира клас Дата, описващ дати от календара и включващ подходящите член-данни, конструктор с параметри за задаване на дата и копиращ конструктор.
//Да се дефинира клас Пациент с член-данни: име на пациента, ЕГН, оплакване и дата на прегледа (да се използва клас Дата).
//Да се състави главна функция, която създава масив от обекти от клас Пациент и извежда всички пациенти с дадено оплакване.


class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Копиращ конструктор
    Date(const Date& ob1) {
        day = ob1.day;
        month = ob1.month;
        year = ob1.year;
    }

    int getDay()  {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear()  {
        return year;
    }
};

class Patient {
private:
    string name;
    int EGN;
    string complaint;
    Date date;

public:
    Patient(string nm, int egn, string cmp1, int d, int m, int y)
        : name(nm), EGN(egn), complaint(cmp1), date(d, m, y) {}

    // Гетъри за име, ЕГН, оплакване и дата на прегледа
    string getName() {
        return name;
    }

    int getEGN() {
        return EGN;
    }

    string getComplaint() {
        return complaint;
    }

    Date getExaminationDate() {
        return date;
    }
};

int main() {
    Patient patients[3] = {
        {"Ivan Ivanov", 1267890, "Headache", 1, 2, 2022},
        {"Maria Petrova", 98743210, "Sore throat", 5, 3, 2022},
        {"Peter Georgiev", 45678903, "Fever", 10, 4, 2022}
    };

    string complaintToSearch = "Headache";
    cout << "Patients with complaint '" << complaintToSearch << "':\n";
    for (Patient patient : patients) {
        if (patient.getComplaint() == complaintToSearch) {
            cout << "Name: " << patient.getName() << ", EGN: " << patient.getEGN()
                 << ", Examination Date: " << patient.getExaminationDate().getDay() << "."
                 << patient.getExaminationDate().getMonth() << "." << patient.getExaminationDate().getYear() << endl;
        }
    }

    return 0;
}
