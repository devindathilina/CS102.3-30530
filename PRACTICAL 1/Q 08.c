#include<stdio.h>
main()
{
	printf("The color: %s\n", "blue");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);//output shown with four numbers
	printf("Third number: %i\n", 1234);// no change same as first number
	printf("Float number: %3.2f\n", 3.14159);//limit the decimals
	printf("Hexadecimal: %x\n", 255);// converted 255 to Hexadecimal number
	printf("Octal: %o\n", 255);// converted 255 to octal number
	printf("Unsigned value: %u\n", 150);// no change same as first number
	printf("Just print the percentage sign %%\n", 10);
}
