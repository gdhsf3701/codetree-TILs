#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a = 1;
    int b= 5;
    int c = 3;
    int temp;

    temp = c;
    c = a;
    a = a+temp;
    b = b - temp;

    cout << a << b << c ;
    return 0;
}