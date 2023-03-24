@stdarg.h~ allows functions to accept an indefinite number of args
syntax for declaration:
int check(int a, double b, ...);
To access the unnamed arguments, one must declare a variable of type va_list in the variadic function
The macro va_start is then called with two arguments: the first is the variable declared of the type va_list, the second is the name of the last named parameter of the function
