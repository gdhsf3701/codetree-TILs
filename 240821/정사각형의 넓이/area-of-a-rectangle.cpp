#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int g;

    cin >> a ;
    g = a*a;

    if(g < 5){
        cout << g << endl << "tiny";

    }
    else{
        cout << g;
    }

    return 0;
}