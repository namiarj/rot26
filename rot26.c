#include <stdio.h>
#include <string.h>

int main() {
	char buffer[512];
	memset(&buffer, 0, sizeof buffer);
	
	printf("Enter the cipher text: (max 512 chars)\n");
	scanf("%s", &buffer);

	printf("\nEnciphered text: \n%s\n", buffer);

	return 0;
}
