#include <stdio.h>

int	main()
{
	
	/*ASCII LESSON
	
	https://www.youtube.com/watch?v=Xpk67YzOn5w&ab_channel=BasicsExplained%2CH3Vtux
	https://docs.oracle.com/cd/E19253-01/817-6223/chp-typeopexpr-2/index.html
	https://www.tutorialspoint.com/cprogramming/c_data_types.htm

	When you put 548, with printf c, il will print $, because $ ascii value is 34 and 548 = 36 + 256 * 2
	Because a char is 1 byte (8 bits) so it can only go to 256 (due to binary limitation), so that as on char it will read only the first 8 bytes,
	it will print only the 36 because it is not able to read the binary after.
	*/
	printf("%c\n", 548);
	return 0;
}