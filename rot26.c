#include <stdio.h>
#include <string.h>

int main(){
	char buffer[512];
	memset(&buffer, 0, sizeof buffer);

	scanf("%s", &buffer);

	printf("\nEnciphered text: %s\n", buffer);

	return 0;
}
