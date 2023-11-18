// 2.8.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int kaigen(float a,float k) {
    float i;
    i = 0.5 * (k + a / k);
    if (i-k<1e-5&&i-k>-1e-5)
    {
        cout << "算术平方根为" << i<<endl;
    }
    else {
        kaigen(a, i);
    }
    return i;
}

int main()
{
    float  a;
    cout << "请输入数据" << endl;
    cin >> a;
    if (a < 0) { cout << "该数据没有平方根" << endl;  }
    if (a == 0) { cout << "该数据 平方根为0：" << endl; }
    kaigen(a, a);
    
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
