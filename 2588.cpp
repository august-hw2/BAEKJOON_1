#include <iostream>

using namespace std;

int main() {

	int a, b;
	//���ϴ� ���� 2���� ����

	int b2;
	//���Ϸ��� ���ڵ��� �̿��ϱ� ���� ����

	int h_2 = 0;
	int t_2 = 0;
	int o_2 = 0;
	//h�� ���� �ڸ�, t�� ���� �ڸ�, o�� ���� �ڸ��� ���ϸ�,
	//2���� ���� �ڸ����� ���� �Ҵ�ޱ� ���� ����� ���ÿ� �ʱ�ȭ

	cin >> a; 
	cin >> b;

	/*-------------------*/
	b2 = b;

	h_2 = b2 / 100;
	b2 = b2 - (h_2 * 100);

	t_2 = b2 / 10;
	b2 = b2 - (t_2 * 10);

	o_2 = b2;

	/*-------------------*/

	cout << a * o_2 << endl;
	cout << a * t_2 << endl;
	cout << a * h_2 << endl;
	cout << a * b << endl;

	return 0;
}