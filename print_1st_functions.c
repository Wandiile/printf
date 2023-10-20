

#include "main.h"

/**
* print_unsigned - prints an unsigned number
* @types: list a of arguments
* @buffer: buffer array to handle print
* @print_flags:  calculates active flags
* @print_width: get width
* @print_precision: Precision specification
* @print_size: Size specifier
* Return: Number of chars printed.
*/

int print_unsigned(va_list types, char buffer[],

int print_flags, int print_width, int print_precision, int print_size)

{

int i = BUFF_SIZE - 2;

unsigned long int num = va_arg(types, unsigned long int);


num = convert_size_unsgnd(num, print_size);

if (num == 0)

buffer[i--] = '0';

buffer[BUFF_SIZE - 1] = '\0';


while (num > 0)

{

buffer[i--] = (num % 10) + '0';

num /= 10;

}


i++;

return (write_unsgnd(0, i, buffer, flags, width, precision, size));

}


/**
* print_octal - Prints an unsigned number in octal notation
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @print_flags:  Calculates active flags
* @print_width: get width
* @print_precision: Precision specification
* @print_size: Size specifier
* Return: Number of chars printed
*/

int print_octal(va_list types, char buffer[],

int print_flags, int print_width, int print_precision, int print_size)

{


int i = BUFF_SIZE - 2;

unsigned long int num = va_arg(types, unsigned long int);

unsigned long int init_num = num;


UNUSED(print_width);


num = convert_size_unsgnd(num, print_size);


if (num == 0)

buffer[i--] = '0';


buffer[BUFF_SIZE - 1] = '\0';


while (num > 0)
{

buffer[i--] = (num % 8) + '0';

num /= 8;
}

if (print_flags & FLAG_HASH && init_num != 0)

buffer[i--] = '0';


i++;


return (write_unsgnd(0, i, buffer, print_flags, print_width, print_precision, print_size));

}


/**
* print_hexadecimal - Prints an unsigned number in hexadecimal notation
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @print_flags:  Calculates active flags
* @print_width: get width
* @print_precision: Precision specification
* @print_size: Size specifier
* Return: Number of chars printed
*/

int print_hexadecimal(va_list types, char buffer[],

int print_flags, int print_width, int print_precision, int print_size)

{

return (print_hexa(types, "0123456789abcdef", buffer,

print_flags, 'x', print_width, print_precision, print_size));

}




/**
* print_hexa_upper - Prints an unsigned number in upper hexadecimal notation
* @types: Lista of arguments
* @buffer: Buffer array to handle print
* @print_flags:  Calculates active flags
* @print_width: get width
* @print_precision: Precision specification
* @print_size: Size specifier
* Return: Number of chars printed
*/

int print_hexa_upper(va_list types, char buffer[],

int print_flags, int print_width, int print_precision, int print_size)

{

return (print_hexa(types, "0123456789ABCDEF", buffer,
print_flags, 'X', print_width, print_precision, print_size));

}

/**
* print_hexa - Prints a hexadecimal number in lower or upper
* @types: Lista of arguments
* @map_to: Array of values to map the number to
* @buffer: Buffer array to handle print
* @flags:  Calculates active flags
* @flag_ch: Calculates active flags
* @print_width: get width
* @print_precision: Precision specification
* @print_size: Size specifier
* @print_size: Size specification
* Return: Number of chars printed
*/

int print_hexa(va_list types, char map_to[], char buffer[],

int print_flags, char flag_ch, int print_width, int print_precision, int print_size)

{

int i = BUFF_SIZE - 2;

unsigned long int num = va_arg(types, unsigned long int);

unsigned long int init_num = num;


UNUSED(print_width);


num = convert_size_unsgnd(num, size);


if (num == 0)

buffer[i--] = '0';


buffer[BUFF_SIZE - 1] = '\0';


while (num > 0)

{

buffer[i--] = map_to[num % 16];

num /= 16;
}


if (print_flags & FLAG_HASH && init_num != 0)

{

buffer[i--] = flag_ch;

buffer[i--] = '0';
}


i++;

return (write_unsgnd(0, i, buffer, print_flags, print_width, print_precision, print_size));
}

sum += a[i];
if (sum || i == 31)

{

char z = '0' + a[i];

write(1, &z, 1);

count++;

}
}
return (count);
}
