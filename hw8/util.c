#include <stdio.h>
#include <stdlib.h>
#include "util.h"
void generate_sequence (int xs, int currentlen, int seqlen, int *seq){
	*(seq+currentlen)=xs;
	if ( seqlen== 0)
    {
        return;
    } 
    else if (xs % 2 == 0 && xs!=1)
    { 
        xs=xs/2;
        return generate_sequence(xs,currentlen+1,seqlen-1,seq);
    }
    else if (xs%2!=0 || xs==1)
    {
    	xs=(xs * 3) + 1;
        return generate_sequence(xs,currentlen+1,seqlen-1,seq);

}
}
void check_loop_iterative(void (*f)(int,int,int,int*), int xs, int seqlen, int *loop,int *looplen){
    /*
    int i;
    int *seq= (int*) malloc(sizeof(int)*100);
    f(xs,0,seqlen,seq);
    if(*looplen==seqlen)
        return;
    else if(*(seq+*looplen)==*(seq+*looplen+3) || *(seq+*looplen)==*(seq+*looplen-3)){
        *(loop+xs)=*(seq+*looplen);
        *looplen=*looplen+1;
        return check_loop_iterative(f,xs+1,seqlen,loop,looplen);
    }
    else{
        *looplen=*looplen+1;
        return check_loop_iterative(f,xs,seqlen,loop,looplen);
    }*/
}
int has_loop(int *arr, int n, int looplen, int *ls, int *le){

}
void hist_of_firstdigits(void (*f)(int,int,int,int*), int xs, int seqlen, int *h,int digit){
    int *seq;
    int currentlen=1;
    static int flag=0;
    
    if (digit>=10)
    {
        digit=digit/10;
    }

    if (digit<10)
    {
        *(h+digit-1)+=1;

        if (seqlen>1)
        {
            seq=(int *)malloc(seqlen * sizeof(int));

            generate_sequence(xs,currentlen,seqlen,seq);

            if (flag==0)
            {
                for (int i = 1; i <=seqlen; ++i)
                {
                    printf("%d ",seq[i]);
                }  
                flag++;  
            }   
            digit=seq[seqlen-1];
            
            free(seq);
            hist_of_firstdigits((*f),xs,seqlen-1,h,digit);
        }        
    }
    
    else
    {
        hist_of_firstdigits((*f),xs,seqlen,h,digit);
    }
}

