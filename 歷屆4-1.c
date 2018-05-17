#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int j= 1,a=0;
while(j <= 256){
a++;
j <<= 1;
}
	printf("%d ",a);
	return 0;
}

