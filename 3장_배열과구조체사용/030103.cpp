/*
typedef를 이용하여 Complex라고 하는 새로운 자료형을 정의하라. Complex자료형은 구조체로서 double형인 변수 real과 imag 를 갖는다.
-> Complex 자료형으로 변수 c1과 c2를 선언하라.
*/

/*
복소수  a와 복소수 b를 받아서  a-b를 계산하는 함수를 작성해보자. 
함수는 구조체를 반환할 수 있다. 복소수는 real+imag*i와 같은 형태를 갖는다.
-> Complex complex_sub(Complex a, Complex b)
*/

#include <iostream>
using namespace std;

typedef struct {
    double real, imag;
} Complex;

Complex complex_sub(Complex a, Complex b) {
    Complex res;
    res.real = a.real - b.real;
    res.imag = a.imag - b.imag;
    return res;
}

int main() {
    Complex c1, c2;
    c1 = { 3.0, 6.3 };
    c2 = { 2.2, 4.9 };
    cout << complex_sub(c1, c2).real <<
        " " << complex_sub(c1, c2).imag <<
        "i";
    return 0;
}
