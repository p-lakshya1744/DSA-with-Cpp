// This program tests the concepts of classes and objects in Object Oriented Programming (OOPS)

# include <iostream>
# include <string>

using namespace std;

class Teacher{
    private:
    double salary;

    public:
    // Attributes or Properties
    string name;
    string dept;
    string subject;

    // Methods or Functions
    void changeDept(string newDept){
        dept = newDept;
    }

    // Setter Function
    void setSalary(double s){
        salary = s;
    }

    // Getter Function
    int getSalary(){
        return salary;
    }
};

int main(){
    Teacher T1;
    T1.name = "Lakshya Patel";
    T1.dept = "Conputer Science and Engineering";
    T1.subject = "DSA";
    T1.setSalary(25000);

    cout << T1.getSalary() << endl;

    return 0;
}