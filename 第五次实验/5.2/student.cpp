#include <iostream>
#include"student.h"//不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name;
    //for (int i = 0; i < 20; i++) {
    //    cout << name[i];
    //}
    cout << endl;
    cout << " sex：" << sex << endl;
}
void Student::set_value() {
    num = 12315;
    char name1[5] = "Lucy";
    //for (int i = 0; i < 5; i++) {
    //    name[i] = name1[i];
    //}
    name = "lucy";
    sex = 'w';

}
Student::Student(int num, const char* name1, char sex) {
    this->num = num;
    
    //for (int i = 0; i < 20; i++) {
    //    this->name[i] = name1[i];
    //}
    this->name = name1;
    this->sex = sex;
};
Student::Student() { Student::set_value(); }
