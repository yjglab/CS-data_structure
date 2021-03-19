/*
typedef�� �̿��Ͽ� Complex��� �ϴ� ���ο� �ڷ����� �����϶�. Complex�ڷ����� ����ü�μ� double���� ���� real�� imag �� ���´�.
-> Complex �ڷ������� ���� c1�� c2�� �����϶�.
*/

/*
���Ҽ�  a�� ���Ҽ� b�� �޾Ƽ�  a-b�� ����ϴ� �Լ��� �ۼ��غ���. 
�Լ��� ����ü�� ��ȯ�� �� �ִ�. ���Ҽ��� real+imag*i�� ���� ���¸� ���´�.
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
