#include "main.h"

/**
* _isalpha - checks if the character is an alphabet
* @c: a character
* Return: 1 if the character is an alphabet or 0 if it is not
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
