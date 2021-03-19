#include <iostream>
using namespace std;

const int max_terms = 101;
struct {
	float coef;
	int expon;
} terms[max_terms] =
{ {14,3}, {5,1}, {2,0}, {11,3}, {9,2},{4,0} };

float coefficient2(int s, int e, int t) {
	float result = 0;
	for (int i = s; i <= e; i++) {
		if (terms[i].expon == t)
			result += terms[i].coef;
	}
	return result;
}
int main55(void) {
	int As = 0, Ae = 2, Bs = 3, Be = 5;
	cout << coefficient2(As, Ae, 3) << endl;
	cout << coefficient2(As, Ae, 2) << endl;
	cout << coefficient2(As, Ae, 1) << endl;
	cout << coefficient2(As, Ae, 0) << endl;
	return 0;
}

