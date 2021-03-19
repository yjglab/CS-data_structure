/*
typedef�� �̿��Ͽ�  Point��� �ϴ� ���ο� �ڷ����� �����϶�. 
Point �ڷ����� ����ü�μ� int���� ���� x�� y�� ���´�.
-> Point �ڷ������� ���� p1�� p2�� �����϶�. p1�� p2�� ���� (1,2)�� (5,4)�� �ʱ�ȭ �϶�.
*/

/*
-> �� �� ������ �Ÿ��� ����ϴ� �Լ��� �ۼ��϶�
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

