/**
 * segf - let's segfault \0/
 *
 * Return: nothing.
 */
void segf(void)
{
	char *str;

	str = "Holberton";
	str[0] = 'S';
}
int main()
{
	segf();
	return (0);
}
