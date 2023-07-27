#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
typedef struct buffer_s
{
	char *buffer;
	char *start;
	unsigned int len;
} buffer_t;
#endif