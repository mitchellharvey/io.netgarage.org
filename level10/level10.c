#include <stdio.h>

int main(int argc, char** argv) {

	FILE *fp = fopen("/tmp/rar/test.txt", "r");

	int v1,v2,v3;
	struct {char pass[20], msg_err[20];} pwfile = {{0}};
	int value = atoi(argv[1]);
	printf("atoi value: %d\n", value);
	printf("Pointer Value: %p\n", fp);
	printf("Stack Location: %p\n", &fp);
	printf("Offset %d\n", (void*)fp - (void*)(&fp));
	printf("Our address %p\n", (void*)(&fp) + value);

	char buf[20] = {0};
	fread(buf, 1, 19, fp);

	printf("%s\n", buf);

	fread(buf, 1, 19, fp);

	printf("%s\n", buf);

	fclose(fp);

	return 0;
}

