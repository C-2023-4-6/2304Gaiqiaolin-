#include <iostream>
using namespace std;
int parsehex(const char* const hexstring) {
    int result = 0;
    for (int i = 0; hexstring[i] != '\0'; i++) {
        char c = hexstring[i];
        if (c >= '0' && c <= '9') {
           result += (c - '0') * pow(16, i);
        }
        else if (c >= 'a' && c <= 'f') {
          result += (c - 'a' + 10) * pow(16, i);
        }
       else if (c >= 'a' && c <= 'f') {
           result += (c - 'a' + 10) * pow(16, i);
       }
       else {
            cerr << "invalid hexadecimal character: " << c << endl;
            return -1;  
        }
    }
    return result;
}
int main() {
   
   cout  << parsehex("a5") << endl;
    return 0;
}