//To check size of
#include <stdio.h>
struct Data{
	int a;
	float b;
	char c[30];
};
int main()
{
	printf("%d",sizeof(Data));
}
