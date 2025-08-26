#include <iostream>
using namespace std;

// Base class
class Person {
protected:   // accessible in derived classes
    string name;
    int age;

public:
    // Function to set person details
    void setPerson(string n, int a) {
        name = n;
        age = a;
    }

    // Function to display person details
    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    string course;

public:
    void setStudent(string n, int a, string c) {
        setPerson(n, a);   // reuse base class function
        course = c;
    }

    void displayStudent() {
        displayPerson();   // reuse base class function
        cout << "Course: " << course << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacher(string n, int a, string s) {
        setPerson(n, a);   // reuse base class function
        subject = s;
    }

    void displayTeacher() {
        displayPerson();   // reuse base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student s;
    s.setStudent("Alice", 20, "Computer Science");
    cout << "Student Details:" << endl;
    s.displayStudent();

    cout << endl;

    // Create Teacher object
    Teacher t;
    t.setTeacher("Mr. John", 40, "Mathematics");
    cout << "Teacher Details:" << endl;
    t.displayTeacher();

    return 0;
}
