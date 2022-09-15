#include "main.h"

/**
* _isalpha - function checks aplahbetic cahracter
*
*@c: is the argument that will use the function
*
*Return 0 
*/
int _isalpha(int c)
{
	if(( c >= 'a' && c <= 'z' ) || (c >= 'A' && c <= 'z' ))
	{
		return (1);
	}

		else

		return (0);

}
