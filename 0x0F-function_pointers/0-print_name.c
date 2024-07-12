#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - print out a name
* @name: param1
* @f: param2
*
* Description: print out a name
*
* Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
