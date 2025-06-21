// This program tests the concept of Constructors in Object Oriented Programming (OOPS)

# include <iostream>
# include <string>

using namespace std;

class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;

    // Non-Parameterized Constructor
    Teacher(){
        cout << "This is a constructor function." << endl;
    }

    // Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary){
        this -> name = name;
        this -> dept = dept;
        this -> subject = subject;
        this -> salary = salary;
    }

    // Copy Constructor
    Teacher(Teacher &orgObj){
        this -> name = orgObj.name;
        this -> dept = orgObj.dept;
        this -> subject = orgObj.subject;
        this -> salary = orgObj.salary;
    }
};

int main(){
    Teacher T1;
    Teacher T2("Lakshya Patel", "Computer Science and Engineering", "DSA", 25000);
    Teacher T3(T2);

    cout << T2.name << endl;
    cout << T2.dept << endl;
    cout << T2.subject << endl;

    cout << T3.name << endl;
    cout << T3.dept << endl;
    cout << T3.subject << endl;

    return 0;
}