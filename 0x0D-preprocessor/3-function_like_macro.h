#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO

#define ABS(x) if (x < 0) \
	return (-x) \
	else \
		return (x)
#endif
