#include <iostream>

/*
크기가 8인 배열 pow[]를 선언하고 여기에 3의 제곱 값들을 저장해보자. 
즉 배열의 첫 번째 요소에는 3^0을 저장하고 두 번째 요소에는 3^1값을 저장한다. 
마지막 요소에는 3^7값을 저장한다. for 루프를 이용하여 pow[] 배열의 
전체 요소의 값을 출력하는 프로그램을 작성하라.
*/

using namespace std;
int main2() {
    int pow[8] = { 1, };

    for (int i = 1; i < 8; i++) {
        pow[i] = pow[i - 1] * 3;
    }
    for (int i = 0; i < 8; i++) {
        cout << pow[i] << endl;
    }
    return 0;
}
