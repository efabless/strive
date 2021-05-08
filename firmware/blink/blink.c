#include "../striVe_defs.h"

// --------------------------------------------------------

/*
	GPIO Test
	Tests PU and PD on the lower 8 pins while being driven from outside
	Tests Writing to the upper 8 pins
	Tests reading from the lower 8 pins
*/
void main()
{
	int i, j;
	int w;
	int volatile x, y;

	w = 7000;

	/* Lower 8 pins are input and upper 8 pins are o/p */
	reg_gpio_data = 0xffff;
	reg_gpio_ena =  0x0000;

	// read the lower 8 pins, add 1 then o/p the result
	// checked by the TB
//	reg_gpio_data = 0xf;


	for (j = 0; j < w; j++);

	while (1) {
        reg_gpio_data = ~0x0000;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0001;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0002;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0004;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0008;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0004;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0002;
        for (j = 0; j < w; j++);
        reg_gpio_data = ~0x0001;
        for (j = 0; j < w; j++);
	}


}

