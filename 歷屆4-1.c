#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int NumRer= 1,TimeS=0;
while(NumRer <= 256){
TimeS++;//加一 
NumRer <<= 1;//往右推一位 
}
	printf("%d ",TimeS);
	return 0;
}

