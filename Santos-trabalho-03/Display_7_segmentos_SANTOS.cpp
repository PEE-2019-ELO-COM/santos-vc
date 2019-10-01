#include<stdio.h>
#include<stdlib.h>

int main()
{
	char in ,out; //in char de entrada e out char de saída
	int a,b,c,d,e,f,g;
	printf("Entre com o numero:\n");
	scanf("%c",&in);
	
	char A = in&0X01?1:0;
	char B = in&0X02?1:0;
	char C = in&0X04?1:0;
	char D = in&0X08?1:0;

	out = (D|B|!(A^C))*1+(!C|!(A^B))*2+(C|!B|A)*4+(D|(!A^(!B&C))|(B&!C))*8+(!A&(B|!C))*16+(D|(!B&C)|!A&(!B|C))*32+(D|(C&!A)|(B^C))*64;
	printf("%d%d%d%d%d%d%d%d",out&0x80?1:0,out&0x40?1:0,out&0x20?1:0,out&0x10?1:0,out&0x08?1:0,out&0x04?1:0,out&0x02?1:0,out&0x01?1:0);
	return 0;
}
