#include <iostream>
using namespace std;
const int max_degree = 101;

struct polynomial {
	int degree;
	float coef[max_degree];
};

float eval_poly(polynomial p, int x) {
	float result = 0;
	for (int i = 0; i <= p.degree; i++) {
		float degree_sum = 1;
		for (int j = 0; j < p.degree - i; j++) {
			degree_sum *= x;
		}
		result += p.coef[i] * degree_sum;
	}

	return result;
}

int main23() {
	// 7x^5 + 4x^4 + 2x^3 + 0x^2 + 3x^1 + 9x^0
	polynomial p2 = { 5, {7, 4, 2, 0, 3, 9} };

	cout << eval_poly(p2, 2) << endl;

	return 0;
}

