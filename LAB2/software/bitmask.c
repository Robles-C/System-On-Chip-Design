#include <stdio.h>

int main()
{
    //0xF0F0 = 1111000011110000
    // problem wants us to get bits 15-12 to 0 and bits 0 and 2 to 1
    //output should be 0xF5 = 11110101
	int a=0xF0F0;
    int mask = 0xF005;
    //xor with mask and number
    int result = a ^ mask;

    printf("%d",result);
	
	return 0;
}