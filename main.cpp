#include <iostream>

using namespace std;

int main() {
    int total{0};
    unsigned int counter{1};
    int numberOfStudents{10};

    int grade;

    while (counter <= numberOfStudents) {
        cout << "Enter grade: ";
        cin >> grade;

        total += grade;

        counter++;
    }

    int average{total / numberOfStudents};

    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Class average = " << average << endl;
}
