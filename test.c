//
// Created by jiyun on 2022/07/19.
//
#include "ft_printf.h"
#include <stdio.h>

int main() {
	int a = 29;

//	printf("%x", a);
	ft_printf("%x\n", a);
//	printf("%i", 2147483648);
	ft_printf("%i\n", 2147483648);
//	printf("%u", -2147483649);
	ft_printf("%u\n", -1);

}