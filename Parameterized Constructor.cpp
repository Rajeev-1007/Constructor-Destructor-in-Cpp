#include<iostream>
using namespace std;

class student {
    string name;
    int roll_no;
    string branch;
public:
    student(string n, int r, string b) { 
        name = n;
        roll_no = r;
        branch = b;
        cout << "Parameterized constructor called!" << endl;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {
    string name;
    int roll_no;
    string branch;  

    cout << "Enter student details" << endl;
    cout << "Name: ";
    cin >> name;     
    cout << "Roll No: ";
    cin >> roll_no;
    cout << "Branch: ";
    cin >> branch;   

    student s1(name, roll_no, branch);
    
    cout << "\nStudent details:" << endl;
    s1.display();
    
    return 0;
}
