#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	
va_list args;
int ret;
buffer_t *output;

if (format == NULL)
return (-1);
output = init_buffer();
if (output == NULL)
return (-1);
va_start(args, format);
ret = run_printf(format, args, output);
return (ret);
}
