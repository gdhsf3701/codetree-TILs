#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int temp;
    int a = 2;
    int b = 5;

    temp = a;
    a = b;
    b = temp;

    cout << a << endl << b;

    return 0;
}