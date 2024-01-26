#include <iostream>
#include <string>

using namespace std;

// Базов клас People
class People {
protected:
    std::string name;
    std::string EGN;

public:
    // Конструктор за People
    People(string n, string egn){
        name = n;
        EGN = egn;
    }

    // Метод за извеждане на информация за човек
    void displayInfo() const {
        std::cout << "Name: " << name << "\nEGN: " << EGN << std::endl;
    }
};

// Производен клас Student
class Student : public People {
protected:
    int facultyNumber;
    double averageGrade;

public:
    // Конструктор за Student, извиква конструктора на базовия клас People
    Student(const string& n, const string& egn, int fno, double avgGrd)
    : People(n, egn), facultyNumber(fno), averageGrade(avgGrd) {}


    // Метод за извеждане на информация за студент
    void displayInfo() const {
        People::displayInfo();  // Извикване на метода от базовия клас
        std::cout << "Faculty Number: " << facultyNumber << "\nAverage Grade: " << averageGrade << std::endl;
    }
};

// Производен клас PStudent (платен студент)
class PStudent : public Student {
public:
    // Конструктор за PStudent, извиква конструктора на Student
    PStudent(const std::string& n, const std::string& egn, int facNum, double avgGrade)
        : Student(n, egn, facNum, avgGrade) {}

    // Метод за получаване на стипендия
    void getScholarship() const {
        if (averageGrade > 4.5) {
            std::cout << "The student is eligible for a scholarship." << std::endl;
        } else {
            std::cout << "The student is not eligible for a scholarship." << std::endl;
        }
    }
};

int main() {
    // Създаване на обекти от класовете
    People person("John Doe", "123456789");
    Student student("Alice Smith", "987654321", 12345, 4.8);
    PStudent pStudent("Bob Johnson", "456789012", 54321, 4.2);

    // Извеждане на информацията за обектите
    std::cout << "Person:\n";
    person.displayInfo();
    std::cout << "\nStudent:\n";
    student.displayInfo();
    std::cout << "\nPaying Student:\n";
    pStudent.displayInfo();
    pStudent.getScholarship();  // Извикване на метод от производния клас

    return 0;
}

