#include <stdio.h>

typedef unsigned char byte;
typedef unsigned short word;

byte check4Bite(word value, word k) {
	return (value & (15 << k)) >> k;
}


void hexRepresentation(word value) {
	for (int k = 12; k >= 0; k -= 4) {
		byte res = check4Bite(value, k);
		if (res < 10)printf("%d", res);
		else printf("%c", "A" + res - 10);
	}
}

int main() {
	word num;
	printf("Enter number(0 - 65535: ");
	scanf_s("%hu", &num);
	printf("Hexadecimal representation: ");
	hexRepresentation(num);
	printf("\n");
	return 0;
}