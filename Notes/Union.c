/*Union 1
#include <stdio.h>
#include <string.h>
union Data{
	int a;
	float b;
	char c[20];
};
int main()
{
	union Data data;
	data.a=10;
	printf("%d\n",data.a);
	data.b=3.6;
	printf("%f\n",data.b);
	strcpy(data.c,"Hello");
	printf("%s\n",data.c);
}*/