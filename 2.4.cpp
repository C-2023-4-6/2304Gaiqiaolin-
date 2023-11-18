// 2.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int add (int n1, int n2){
    int sum = n1 + n2;
    cout << sum << endl;
    return sum;
}
int jian (int n1, int n2) {
    int sum = n1 -n2;
    cout << sum << endl;
    return sum;
}
int cheng (int n1, int n2) {
    int sum = n1 * n2;
    cout << sum << endl;
    return sum;
}
int chu (int n1, int n2) {
    int sum = n1 /n2;
    cout << sum << endl;
    return sum;
}
int quyu (int n1, int n2) {
    int sum = n1 % n2;
    cout << sum << endl;
    return sum;
}
int main()
{
    int a, b;
    char c;
    cout << "请输入一个数字" << endl;
    cin >> a;
    cout << "请输入一个数字" << endl;
    cin >> b;
    cout << "请输入一个符号" << endl;
    cin >> c;
   
    
    switch ( c) {
    case '+': add(a, b); break;
    case '-': jian(a, b); break;
    case '*': cheng(a, b); break;
    case '/': if (b == 0) {
        cout << "分母不能为零" << endl;
    }
            else chu(a, b); break;
    case '%': quyu(a, b); break;
    default:cout << " 非法运算符" << endl; break;
    }
        return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
