#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h , w;
    int jiswo ,  hj;
    cin >> h >> w;
    jiswo = (10000*w)/(h*h);
    if(jiswo >= 25){
        cout<< jiswo << endl << "Obesity";
    }
    else{
        cout << jiswo;
    }
    return 0;
}