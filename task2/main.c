#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "article.h"

int main(int argc, char *argv[]) {
	int length = strlen(article_string);
	printf("Article length is: %dByte\n", length);
	return 0;
}

