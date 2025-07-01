#include <iostream>
#include <string.h>
using namespace std;

class student {
    int rno;
    string name;
    double fee;

public:
    //Parameterized constructor
    student(int, string, double);
    //copy constructor
    student(student& t){
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }

    //function to display student details
    void display();    
};
//Parameterized constructor
student::student(int no, string n, double f){
    rno = no;
    name = n;
    fee = f;
}

void student::display(){
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main() {
    student s(06, "KienNV24", 2001);
    s.display();

    //create another student object using the copy constructor
    student kien(s);
    kien.display();
}
