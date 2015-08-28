/*

  写一个函数，输入int型，返回整数逆序后的字符串。如：输入123，返回"321"。要求必须用递归，不能用全局亦是，输入必须是一个参数，必须返回字符串。

**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
char *iter_string_reverse_from_int(unsigned int x, unsigned int i, char *part_chars) {

	if (x == 0) {
		return part_chars;
	}
	else {
		unsigned int ones = x % 10;
		part_chars[i] = (char)(ones + 0x30);
		return iter_string_reverse_from_int(x/10, i + 1, part_chars);
	}
}
*/
char *string_reverse_from_int(unsigned int x) {

    unsigned int ones = x % 10;
    unsigned int xx = x / 10;


    
    if (xx == 0) {
        return char(xx + '0');
    }
    else {
        
        char *t = string_reverse_from_int(xx);
        
    }
}

int main(int argc, char const *argv[])
{
	if (argc != 2) {
		printf("Usage: %s number\n", argv[0]);
		return -1;
	}

	int number = atoi(argv[1]);
        /*
	char chars[24];
	memset(chars, 0, 24);
	char * result =	iter_string_reverse_from_int(number, 0, chars);

	printf("%s\n", result);
	*/
	return 0;
}
