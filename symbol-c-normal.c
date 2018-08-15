#include <assert.h>
#include <errno.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stdio.h>

void __0() {
	assert(0);
}

void __1(int _0, ...) {
	int _1;
	jmp_buf _2;
	va_list _3;
	char _4[2];
	_1 = errno;
	setjmp(_2);
	longjmp(_2, 0);
	va_start(_3, _0);
	va_arg(_3, int);
	va_end(_3);
}

void __2() {
#ifdef gets
	gets(0);
#endif
}