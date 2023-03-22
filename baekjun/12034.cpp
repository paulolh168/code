#include <iostream>
int  plus[200];
int main() {
	int num,max[100];
	std::cin >> num;
	for (int i = 0;i < num;i++) {
		int many,max[100];
		std::cin >> many;
		for (int j = 0;j < 2*many;j++) std::cin >> plus[i]; 
		for (int j = 0;j < 2 * many;j++){
			if (plus[2 * many - 1] / 4 == plus[j]) {
				break;
			}
	}
