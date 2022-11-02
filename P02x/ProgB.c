#include <stdio.h>
#include <string.h>

void enc0d3(char *s)
{

	//           'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
	char *CODE = "A8CD3F6H1JKLMN0PQR57UVWXY2";
	int N = strlen(CODE);
	int n;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		n = s[i] - 'A';
		if (n >= 0 && n < N)
			s[i] = CODE[n];
	}
}

int main()
{

	printf("Enter text. Empty line to stop.\n");
	char text[100];
	while (1)
	{
		printf("text: ");
		fgets(text, 100, stdin);
		text[strlen(text) - 1] = '\0';
		if (*text == '\0')
			break;
		enc0d3(text);
		printf("code: %s\n", text);
	}
	return 0;
}
