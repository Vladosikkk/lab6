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

    Student student{ 1, 1, "�����" , 0 };
    Student student1{ 2, 3, "�����", 0 };

    cout << "������ ������� ��� �������� " << student.name << ": ";
    cin >> student.averageMark;

    cout << "������ ������� ��� �������� " << student1.name << ": ";
    cin >> student1.averageMark;


    cout << student.name << " ��������� � ���� " << student.averageMark << endl;
    cout << student1.name << " ��������� � ���� " << student1.averageMark << endl;
}