#include <stdio.h>

int main(void) {
	int m = 0;

	scanf("%d", &m);
	
	if (m == 1) {
		printf("%s\n", "January");
	} else if (m == 2) {
		printf("%s\n", "February");

	} else if (m == 3) {
		printf("%s\n", "March");

	} else if (m == 4) {
		printf("%s\n", "April");

	} else if (m == 5) {
		printf("%s\n", "May");

	} else if (m == 6) {
		printf("%s\n", "June");

	} else if (m == 7) {
		printf("%s\n", "July");

	} else if (m == 8) {
		printf("%s\n", "August");

	} else if (m == 9) {
		printf("%s\n", "September");

	} else if (m == 10) {
		printf("%s\n", "October");

	} else if (m == 11) {
		printf("%s\n", "November");

	} else {
		printf("%s\n", "December");

	}

	return 0;
}