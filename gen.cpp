#include <bits/stdc++.h>

#if __cplusplus >= 201103L
#define __CXX11__
#endif

void check_assert() {
	assert(0);
}

void check_ctype() {
	int x;
	x = isalnum(' ');
	x = isalpha(' ');
#ifdef __CXX11__
	x = isblank(' ');
#endif
	x = iscntrl(' ');
	x = isdigit(' ');
	x = isgraph(' ');
	x = islower(' ');
	x = isprint(' ');
	x = ispunct(' ');
	x = isspace(' ');
	x = isupper(' ');
	x = isxdigit(' ');
	x = tolower(' ');
	x = toupper(' ');
}

void check_errno() {
	int x = errno;
}

void check_setjmp() {
	jmp_buf buf;
	setjmp(buf);
	longjmp(buf, 0);
}

void check_stdio() {
	// remove
	// rename
	// tmpfile
	// tmpnam
	va_list l;
	char s[2];
	fclose(0);
	fflush(0);
	fopen("", "");
	freopen("", "", 0);
	setbuf(0, 0);
	setvbuf(0, 0, 0, 0);
	fprintf(stdout, " ");
	fscanf(0, " ");
	printf(" ");
	scanf(" ");
	sprintf(s, " ");
	sscanf(0, " ");
	vfprintf(stdout, " ", l);
	vprintf(" ", l);
	vsprintf(s, " ", l);
	fgetc(0);
	fgets(0, 0, 0);
	fputc(0, stdout);
	fputs("", stdout);
	getc(0);
	getchar();
#ifdef gets
	gets(0);
#endif
	putc(0, stdout);
	putchar(0);
	puts("");
	ungetc(0, 0);
	fread(0, 0, 0, 0);
	fwrite(s, 0, 0, stdout);
	fgetpos(0, 0);
	fseek(0, 0, 0);
	fsetpos(0, 0);
	ftell(0);
	rewind(0);
	clearerr(0);
	feof(0);
	ferror(0);
	perror(0);
#ifdef __CXX11__
	snprintf(s, 2, " ");
	vfscanf(0, " ", l);
	vscanf(" ", l);
	vsnprintf(s, 2, " ", l);
	vsscanf(0, " ", l);
#endif
}

#ifdef __CXX11__
void check_fenv() {
	int x;
	x = feclearexcept(0);
	x = feraiseexcept(0);
	x = fegetexceptflag(0, 0);
	x = fesetexceptflag(0, 0);
	x = fegetround();
	x = fesetround(0);
	x = fegetenv(0);
	x = fesetenv(0);
	x = feholdexcept(0);
	x = feupdateenv(0);
	x = feupdateenv(0);
}

void check_inttypes() {
	intmax_t x;
	uintmax_t y;
	imaxdiv_t t;
	x = imaxabs(0);
	t = imaxdiv(0, 0);
	x = strtoimax(0, 0, 0);
	y = strtoumax(0, 0, 0);
	x = wcstoimax(0, 0, 0);
	y = wcstoumax(0, 0, 0);
}
#endif

int main() {
	check_assert();
	check_ctype();
	check_errno();
	// float
	// iso646
	// limits
	// locale
	// math: all builtin
	// signal
	// stdarg: all buitlin
	// stddef
	check_setjmp();
	check_stdio();

#ifdef __CXX11__
	check_fenv();
	check_inttypes();
	// stdbool
	// stdint
#endif
}