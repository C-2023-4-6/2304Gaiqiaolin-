#include <iostream>
#include"student.h"//��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name;
    //for (int i = 0; i < 20; i++) {
    //    cout << name[i];
    //}
    cout << endl;
    cout << " sex��" << sex << endl;
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
