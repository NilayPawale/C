#include <stdio.h>
int main(void)
{
	int i=1,j=1;
	j=(i++ && (i==1));
	printf("\n i=%d j=%d",i,j);
	
	return 0;
}
