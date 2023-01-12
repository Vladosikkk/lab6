#include <windows.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    struct Student
    {
        int id;
        int group;
        string name;
        double averageMark;
    };

    Student student{ 1, 1, "¬ас€г" , 0 };
    Student student1{ 2, 3, "ѕетро", 0 };

    cout << "¬вед≥ть середн≥й бал студента " << student.name << ": ";
    cin >> student.averageMark;

    cout << "¬вед≥ть середн≥й бал студента " << student1.name << ": ";
    cin >> student1.averageMark;


    cout << student.name << " навчаЇтьс€ в груп≥ " << student.averageMark << endl;
    cout << student1.name << " навчаЇтьс€ в груп≥ " << student1.averageMark << endl;
}