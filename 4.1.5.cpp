#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0;
    int len2 = 0;

    //计算s1和s2的长度
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
    
    //如果s1的长度大于s2的长度，直接返回-1
    if (len1 > len2) {
        return -1;
    }

    //遍历s2，检查s1是否为s2的子串
    for (int i = 0; i <= len2 - len1; i++) {
        int j = 0;
        //如果找到匹配，返回下标
        if (s2[i] == s1[j]) {
            while (s1[j] != '\0') {
                if (s2[i + j] != s1[j]) {
                    break;
                }
                j++;
            }
            if (s1[j] == '\0') {
                return i;
            }
        }
    }

    //如果没有找到匹配，返回-1
    return -1;
}
int main() {
    cout << "请输入字符串s2: ";
    string s2;
    cin >> s2;
    cout << "请输入字符串s1: ";
    string s1;
    cin >> s1;

    std::cout << indexOf(s1.c_str(), s2.c_str()) << std::endl;
    return 0;
}