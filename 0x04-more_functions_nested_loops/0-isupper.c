#include "main.h"

/**
*_isupper - checks if a cahrcater is in upper case or not
*
*@c: cahracter to be tested
*
*Return:1 if true , 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}

		return (0);

}
