#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
char getRandomCharacter(){
    int r = (rand() % 26) + 96;
    return (char)r;
}
int main(){
	char array[50][10],real[7][10];
	int i=0,x,j,k,m,y,r1;
	char board[15][15];
	FILE*fp;
	fp=fopen("wordlist.txt","r");
	while(feof(fp)==0){
		fscanf(fp,"%s",&array[i][10]);
		i++;

	}
	fclose(fp);
	srand(time(NULL));
	for(y=0;y<7;y++){
    x=1+rand()%50;
    strcpy(real[y],array[x]);
    printf("%s\n",real[y]);
    m=strlen(real[y]);
    r1=0+rand()%14;
    printf("%d,%d\n",r1,m);
    	for(k=0;k<m;k++){
    		board[r1][k]=real[y][k];
    	}
    }
     for(i=0;i<15;i++){
        for(j=0;j<15;j++){
        	if(board[i][j]=='\0'){
            char c=getRandomCharacter();
            board[i][j]=c;}}
    }

  for(i=0;i<15;i++){
  	for(j=0;j<15;j++){
  		printf("%c\t",board[i][j]);
  	}
  	printf("\n");
  }
	return 0;
}