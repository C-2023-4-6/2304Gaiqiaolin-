#pragma once
class Student              //������
{
public:                   //���ó�Ա����ԭ������
    void display();
    void set_value();
    Student(int num, const char* name1, char sex) ;
    Student() ;
private:
    int num;
    const char* name;
    char sex;
};

