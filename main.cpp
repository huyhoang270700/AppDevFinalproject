#include "appdev.h"

int main(void) {
	rock r;
	printf("Application Developers Rock!\n");
	printf("Enter Rocker's name: ");
	scanf_s("%s", r.rname, (unsigned) _countof(r.rname));
	srand(time(NULL));
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("20011996\n");
	return 0;
}