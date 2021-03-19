/*
typedef를 이용하여  Point라고 하는 새로운 자료형을 정의하라. 
Point 자료형은 구조체로서 int형인 변수 x와 y를 갖는다.
-> Point 자료형으로 변수 p1과 p2를 선언하라. p1과 p2를 각각 (1,2)와 (5,4)로 초기화 하라.
*/

/*
-> 두 점 사이의 거리를 계산하는 함수를 작성하라
double get_distance(Point p1, Point p2)
*/

#include <iostream>
#include <cmath>
using namespace std;

typedef struct {
	int x, y;
} Point;
double get_distance(Point p1, Point p2) {
	int diff_x = pow(p1.x - p2.x, 2);
	int diff_y = pow(p1.y - p2.y, 2);
	double result = sqrt(diff_x + diff_y);

	return result;
}
int main3() {
	Point p1 = { 1, 2 };
	Point p2 = { 5, 4 };
	cout << get_distance(p1, p2);

	return 0;
}

