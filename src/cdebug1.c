//============================================================================
// Author      : Timesys
// Description : Debug sample code, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

extern int sub(int, int, int);

extern int sub_one(int, int, int);

extern int sub_two(int, int, int);

extern int sub_three(int, int, int);

extern int sub_four(int, int, int);

extern int sub_five(int, int, int);

extern int sub_six(int, int, int);

extern int sub_seven(int, int, int);

extern int sub_eight(int, int, int);

extern int sub_nine(int, int, int);

extern int sub_ten(int, int, int);


int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	puts("!!!Hello World!!!");
	sub(1, 2, 3);

	sub_one(1, 2, 3);
	sub_two(1, 2, 3);
	sub_three(1, 2, 3);
	sub_four(1, 2, 3);
	sub_five(1, 2, 3);
	sub_six(1, 2, 3);
	sub_seven(1, 2, 3);
	sub_eight(1, 2, 3);
	sub_nine(1, 2, 3);
	sub_ten(1, 2, 3);


	return EXIT_SUCCESS;
}
