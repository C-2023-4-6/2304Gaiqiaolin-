#include <iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
    int len1 = 0;
    int len2 = 0;

    //����s1��s2�ĳ���
    while (s1[len1] != '\0') {
        len1++;
    }
    while (s2[len2] != '\0') {
        len2++;
    }
    
    //���s1�ĳ��ȴ���s2�ĳ��ȣ�ֱ�ӷ���-1
    if (len1 > len2) {
        return -1;
    }

    //����s2�����s1�Ƿ�Ϊs2���Ӵ�
    for (int i = 0; i <= len2 - len1; i++) {
        int j = 0;
        //����ҵ�ƥ�䣬�����±�
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

    //���û���ҵ�ƥ�䣬����-1
    return -1;
}
int main() {
    cout << "�������ַ���s2: ";
    string s2;
    cin >> s2;
    cout << "�������ַ���s1: ";
    string s1;
    cin >> s1;

    std::cout << indexOf(s1.c_str(), s2.c_str()) << std::endl;
    return 0;
}