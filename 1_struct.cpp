#include<iostream>
using namespace std;

struct Student {

    string name;
    int id;
    float cgpa;

};


int main() {

    Student s1, s2, s3;

    cin >> s1.name >> s1.id >> s1.cgpa;
    cin >> s2.name >> s2.id >> s2.cgpa;
    cin >> s3.name >> s3.id >> s3.cgpa;

    if (s1.cgpa > s2.cgpa && s1.cgpa > s3.cgpa) {
        cout << "The Student with the highest CGPA is :\n";
        cout << "ID: " << s1.id << '\n' << "Name: " << s1.name;
    }
    else if (s2.cgpa > s1.cgpa && s2.cgpa > s3.cgpa) {
        cout << "The Student with the highest CGPA is :\n";
        cout << "ID: " << s2.id << '\n' << "Name: " << s2.name;             
    }
    else {
        cout << "The Student with the highest CGPA is :\n";
        cout << "ID: " << s3.id << '\n' << "Name: " << s3.name;
    }
}