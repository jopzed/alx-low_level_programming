/**
 * _isdigit - returns if  character is  digit or not
 * @c:  character being tested
 * Return: 1 for  digit, 0 for not  digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
