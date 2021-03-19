#include <iostream>
using namespace std;

const int max_terms = 101;

struct {
	float coef;
	int expon;
} terms[max_terms] =
{ {14,3}, {5,1}, {2,0}, {11,3}, {9,2},{4,0} };

double eval_poly(int s, int e, int x) {
	double result = 0;
	for (int i = s; i <= e; i++) {
		double expon_sum = 1;
		for (int j = 0; j < terms[i].expon; j++) {
			expon_sum *= x;
		}
		result += terms[i].coef * expon_sum;
	}

	return result;
}

int main()
{
	int As = 0, Ae = 2, Bs = 3, Be = 5;
	cout << eval_poly(As, Ae, 8) << endl;
	cout << eval_poly(Bs, Be, 6) << endl;
	return 0;
}

