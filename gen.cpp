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
#endif

int main() {
	check_assert();
	check_ctype();
	check_errno();
#ifdef __CXX11__
	check_fenv();
#endif
}