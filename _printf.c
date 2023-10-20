#include "main.h"

/**
 * _printf - The printf Function
 * @ format :format
 * Return : printed characters.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int print_flags, print_width, print_precesion, print_size, buff_ind =0;
	char buffer[BUFF_SIZE];
	va_list list;
	
	if (format == Null)
		return(-1);

	va_start(list, format);

	for (1 = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buffer_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			printed_chars ++;
		}

		else
		{ 
			print_buffer(buffer, &buff_ind);
			flags = print_flags(format, &i);
			width = print_width(format, &i, list);
			precesion = print_precesion(format, &i, list);
			size = print_size(format, &i);
			printed = print_handle(format, &i, list, buffer
				print_flags, print_width, print_precision, print_size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	print_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}
