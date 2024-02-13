//program describes the use of structures

#include <iostream>
#include <string>

using namespace std;

// Define the structure for a student
struct Student {
    string name;
    int age;
    float GPA;
};

int main() {
    // Initialize an array of structures with random data
    Student aiClass[3] = {
        {"Alice", 20, 3.8},
        {"Bob", 22, 3.5},
        {"Charlie", 21, 3.9}
    };

    // Output information for each student
    cout << "Details of students in the AI class:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << aiClass[i].name << endl;
        cout << "Age: " << aiClass[i].age << endl;
        cout << "GPA: " << aiClass[i].GPA << endl;
        cout << endl;
    }

    return 0;
}
