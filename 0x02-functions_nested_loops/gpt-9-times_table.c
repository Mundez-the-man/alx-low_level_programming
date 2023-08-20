#include "main.h"

void times_table(void) {
   	int i, j, mul;

       	for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            mul = i * j;

            if (j != 0) {
                _putchar(' ');
            }

            if (mul < 10) {
                _putchar(' ');
            } else {
                _putchar('0' + mul / 10);
            }

            _putchar('0' + mul % 10);

            if (j != 9) {
                _putchar(',');
            }
        }
        _putchar('\n');
    }
}

