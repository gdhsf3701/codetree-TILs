#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a =0 ;

    cin >> a ; 


    if(a >= 80){
        cout << "pass";
    }
    else{
       cout << (80-a) << " " << "more score";
    }
    return 0;
}