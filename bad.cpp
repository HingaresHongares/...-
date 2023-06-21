#include <iostream>
#include <random>
using namespace std;
int main() {
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dist(161, 255);
	char add = dist(mt);
	char sub = dist(mt);
	char outputc = dist(mt);
	char outputn = dist(mt);
	char mult2 = dist(mt);
	char div2 = dist(mt);
	int acc = 0;
	char inp;
	cout << add << " <- +\n" << sub << " <- -\n" << outputc << " <- output accumulator as character\n" << mult2 << " <- * by 2\n" << div2 << " <- / by 2\n" << outputn << " <- output accumulator as number\n";
	while (true) {
		cout << "\n";
		cin >> inp;
		if (inp == add) {
			acc = acc + 1;
		}
		if (inp == sub) {
			acc = acc - 1;
		}
		if (inp == mult2) {
			acc = acc * 2;
		}
		if (inp == div2) {
			acc = acc / 2;
		}
		if (inp == outputc) {
			cout << char(acc);
		}
		if (inp == outputn) {
			cout << acc;
		}
	}
}
//▀▀ΣΣΣΣΣ▀▀▀▀▀▀▀▀≥═══≥▀▀▀▀▀▀▀≥≥▀▀▀≥▀»════════≥Σ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀≥▀▀▀≥══════≥════════≥ <- was hello world at some point