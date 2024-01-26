#include <iostream>

using namespace std;

//Анета и Петър са студенти в ТУ София. С тях са асоцирани и следните данни: име, група, фак. номер и масив с 5 оценки. Да се проектират съответните класове.
//Инициализирането на член-данните да става чрез конструктор. Да се определи чрез приятелска функция кой от двамата студенти има по-висок среден успех.
//Решението(С++) да включва и главна функция показваща функционалността на проекта.


class Grades; // Декларация, защото ще се използва в Student

class Student {
private:
    string name;
    int group;
    int facNumber;
    int grades[5];

public:
    Student(string n, int gr, int fno, int grd[5]) {
        name = n;
        group = gr;
        facNumber = fno;
        for (int i = 0; i < 5; ++i) {
            grades[i] = grd[i];
        }
    }

    string getName() {
        return name;
    }

    int getGroup() {
        return group;
    }

    int getFacNumber() {
        return facNumber;
    }

    // Приятелска функция за изчисляване на среден успех
    friend double calculateAverage(Student& student);
};

    double calculateAverage(Student& student) {
        double sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += student.grades[i];
        }
        return sum / 5;
    }

int main() {
    // Инициализация на студентите
    int grades1[] = {5, 4, 6, 5, 5};
    Student student1("Aneta", 1, 12345, grades1);

    int grades2[] = {6, 6, 6, 4, 5};
    Student student2("Petar", 2, 54321, grades2);


     double average1 = calculateAverage(student1);
     double average2 = calculateAverage(student2);

        if (average1 > average2) {
            cout<<" "<<student1.getName()<<endl;
        } else if (average1 < average2) {
            cout<<" "<<student2.getName()<<endl;;
        } else {

            cout<<"Both students have the same average."<<endl;
        }

    return 0;
}
