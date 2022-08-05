// structure.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct Student {
    int rollno;
    char name[20];
    float avg;
};

void show(Student* s) {
    cout << s->rollno << " " << s->name << " " << s->avg << " " << endl;
}
void accept(Student* s) {
    cout << "Enter rollno name and avg" << endl;
    cin >> s->rollno >> s->name >> s->avg;
}



int main()
{
    Student s1 = { 10 , "Deva",89.95 };
    //show(s1);//pass by reference
    show(&s1);//pass by address
    //cout << s1.rollno << " " << s1.name << " " << s1.avg << endl;

    Student s2;
    //cout << "Enter rollno name and avg" << endl;
    accept(&s2);
    show(&s2);
    //cin >> s2.rollno >> s2.name >> s2.avg;
    //cout << s2.rollno << " " << s2.name << " " << s2.avg << endl;


    return 0;
}
