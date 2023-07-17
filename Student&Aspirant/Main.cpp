#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int age;

public:
    Student(const std::string& name, int age) : name(name), age(age) {}

    void display() const {
        std::cout << "Student Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

class Aspirant : public Student {
private:
    std::string researchTopic;

public:
    Aspirant(const std::string& name, int age, const std::string& researchTopic)
        : Student(name, age), researchTopic(researchTopic) {}

    void display() const {
        Student::display();
        std::cout << "Research Topic: " << researchTopic << std::endl;
    }
};

int main() {
    Student student("John Doe", 20);
    student.display(); 

    std::cout << "----------------------" << std::endl;

    Aspirant aspirant("Jane Smith", 25, "Machine Learning");
    aspirant.display(); 

    return 0;
}
