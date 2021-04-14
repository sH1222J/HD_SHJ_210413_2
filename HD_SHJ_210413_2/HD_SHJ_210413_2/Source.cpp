/*
* https://devkoboso.com/entry/Loop-2
특별문제
2번 출력
2
4 6
8 10 12
14 16 18 20
22
24 26
28 30 32
34 36 38 40

*/

#include<stdio.h>
void main() {
	/*
	* 1
	* 12
	* 123
	* 1234
	* 123
	* 12
	* 1
	* 
	int index = 1;
	while (index < 5) {
		int i = 1;
		while (i <= index) {
			printf("%d", i);
			i++;
		}
		printf("\n");

		index++;
	}
	index = 3;
	while (index >= 1) {
		int i = 1;
		while (i <= index) {
			printf("%d", i);
			i++;
		}
		printf("\n");
		index--;
	}
}
*/


		int j = 2;
		int i = 1;
		int count = 0;
		int outloop = 0;

		while (outloop < 2) {

			while (i <= 4) {
				count = 1;
				while (count <= i) {
					printf("%d   ", j);
					j += 2;
					count++;
				}
				printf("\n");
				i++;
			}
			i = 1;

			outloop++;
		}
		fgetc(stdin);
}

