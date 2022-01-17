#include <iostream>

using namespace std;

int main() {

	int a, b;
	//곱하는 숫자 2개의 변수

	int b2;
	//곱하려는 숫자들을 이용하기 위한 변수

	int h_2 = 0;
	int t_2 = 0;
	int o_2 = 0;
	//h는 백의 자리, t는 십의 자리, o는 일의 자리를 뜻하며,
	//2개의 숫자 자리마다 값을 할당받기 위해 선언과 동시에 초기화

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