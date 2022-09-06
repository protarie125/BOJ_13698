#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(int& x, int& y) {
	x ^= y;
	y ^= x;
	x ^= y;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto cups = vector<int>{ 1,0,0,2 };

	auto s = string{};
	cin >> s;

	for (const auto& x : s) {
		if ('A' == x) {
			swap(cups[0], cups[1]);
		}
		else if ('B' == x) {
			swap(cups[0], cups[2]);
		}
		else if ('C' == x) {
			swap(cups[0], cups[3]);
		}
		else if ('D' == x) {
			swap(cups[1], cups[2]);
		}
		else if ('E' == x) {
			swap(cups[1], cups[3]);
		}
		else if ('F' == x) {
			swap(cups[2], cups[3]);
		}
	}

	auto a = int{ -1 };
	auto b = int{ -1 };
	for (auto i = 0; i < 4; ++i) {
		if (1 == cups[i]) {
			a = i + 1;
		}

		if (2 == cups[i]) {
			b = i + 1;
		}
	}

	cout << a << '\n'
		<< b;

	return 0;
}