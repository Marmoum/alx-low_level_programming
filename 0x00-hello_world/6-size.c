#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

#ifdef __x86_64__
printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of a float:%lu byte(s)\n", sizeof(f));
#else
printf("Size of a char: %u byte(s)\n", sizeof(c));
printf("Size of an int: %u byte(s)\n", sizeof(i));
printf("Size of a long int: %u byte(s)\n", sizeof(li));
printf("Size of a long long int: %u byte(s)\n", sizeof(lli));
printf("Size of a float:%u byte(s)\n", sizeof(f));
#endif
return (0);
}
