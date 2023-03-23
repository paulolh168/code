#include <iostream>
#include <algorithm>
int  plus[200], max[100];
int main() {
	int num;
	std::cin >> num;
	for (int i = 0;i < num;i++) {
		int many;
		std::cin >> many;
		for (int j = 0;j < 2 * many;j++) std::cin >> plus[j];
		for (int j = 0;j < 2 * many;j++) {
			std::stable_sort(plus, plus + 200, std::greater<int>());
			max[j] = plus[0];
			for (int k = 1;k < 2 * many - j;k++)
				if ((plus[0] / 4) * 3 == plus[k]) {
					plus[k] = 0;
					plus[0] = 0;
					break;
				}
		}
		std::cout << "Case #" << i + 1 << ": ";
		for (int j = many;j > 0;j--)std::cout << max[j - 1] / 4 * 3 << " ";
	}
	return 0;
}