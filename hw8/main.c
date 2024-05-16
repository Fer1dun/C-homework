#include <stdio.h>
#include <stdlib.h>
#include "util.h"
int main(){
	int size,first,*le,*ls,*arr,i,*looplen,a=0,k;
	int *h= (int*) malloc(sizeof(int)*100);
	int *loop= (int*) malloc(sizeof(int)*100);
	printf("enter the first element:");
	scanf("%d",&first);
	printf("enter the size of sequence:");
	scanf("%d",&size);
	check_loop_iterative(generate_sequence,0,size,loop,looplen);
	hist_of_firstdigits(generate_sequence,first,size,h,first);
	printf("\n");
	for(i=0;i<9;i++)
	printf("%d,",h[i]);
	return 0;
}