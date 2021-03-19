#include <iostream>
using namespace std;
const int max_degree = 101;

struct polynomial {
	int degree;
	float coef[max_degree];
};

float coefficient(polynomial p, int t) {
	float result = p.coef[p.degree - t];
	cout << result << endl;
	return result;
}

int main77() {
	polynomial p1 = { 5, {7, 4, 2, 0, 3, 9} };
	coefficient(p1, 5);
	coefficient(p1, 3);
	return 0;
}

