#pragma once
class Student              //类声明
{
public:                   //公用成员函数原型声明
    void display();
    void set_value();
    Student(int num, const char* name1, char sex) ;
    Student() ;
private:
    int num;
    const char* name;
    char sex;
};

