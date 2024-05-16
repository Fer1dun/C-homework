#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printMap(char array[15][30],int x,int sum,int mod,int modp){
int i,y;

for(i=0;i<15;i++){
     	for(y=0;y<30;y++){
if(i==0 || i==14){
    printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
else if(y==0 || y==29){
    printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
else if((i==2 || i==12) && y!=1 && y!=28){
printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
else if((y==2 || y==27) && i!=1 && i!=13){
    printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
else if((i==4|| i==10) && y!=1 && y!=3 && y!=28 && y!=26){
    printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
 else if((y==4 || y==25) && i!=1 && i!=13 && i!=3 && i!=11 && i!=4 && i!=10){
printf("\033[0;31m");
printf("%c",array[i][y]);
printf("\033[0m");}
else if(((i==1 || i==13) && y==14) || ((i==3 || i==11) && (y==10 || y==18)) || ((i==10 || i==5) && y==26)|| (i==7 && y==28)){
    printf("\033[0;31m");
 printf("%c",array[i][y]);
 printf("\033[0m");}
else if((i==2 && y==1) || (i==4 && y==3)){
    printf("\033[0;31m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if((i==1 && x==y) ||(x>80 && y==x-79 && i==1)){
    printf("\033[0;33m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(x>41 && i==13 && y==28-modp && x<=68){
    printf("\033[0;33m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(x>=29 && 1+modp==i && y==28 && x<=41){
    printf("\033[0;33m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(x>68 && y==1 && i==13-modp){
    printf("\033[0;33m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if((i==3 && sum==y && y<27) || (sum>=63 && y==sum-61 && i==3)){
    printf("\033[0;32m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(sum>=27 && 5+mod==i && y==26 && i<=11 && sum<=33){
    printf("\033[0;32m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(i==11 && sum>33 && y==26-mod && sum<=56){
    printf("\033[0;32m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else if(sum>56 && y==3 && i==11-mod && sum<63){
    printf("\033[0;32m");
    printf("%c",array[i][y]);
    printf("\033[0m");}
else
 printf("%c",array[i][y]);

     	}
     	printf("\n");
     }
}
int dice(){
    int x;
    srand(time(NULL));
    x=1+rand()%6;
return x;

}
int startGame(int (*dice)()){
    int a,b;
    while(1){
    printf("first dice is:");
    getchar();
    a=(*dice)();
    printf("%d\n",a);
    printf("second dice is:");
    getchar();
    b=(*dice)();
    printf("%d\n",b);
    if(b>a){
        return 2;
    }
    else if(a==b){
        printf("same dice try again\n");
    }
    else {
        return 1;
    }
}

}
int main(){
	char array[15][30];
	int i,y,x,a=0,b=0,k,count=0,t=0,p=1,sum=3,fl=0,flag,mod,modp;
    k=startGame(dice);
    if(k==2)
        printf("second dice begins\n");
    else
        printf("firs dice begins\n");
    while(1){
     for(i=0;i<15;i++){
     	for(y=0;y<30;y++){
 if(i==0 || i==14)
 array[i][y]='.';
 else if(y==0 || y==29)
 array[i][y]=':';
 else if((i==2 || i==12) && y!=1 && y!=28)
 array[i][y]='.';
 else if((y==2 || y==27) && i!=1 && i!=13)
 array[i][y]=':';
 else if((i==4|| i==10) && y!=1 && y!=3  && y!=28 && y!=26)
 array[i][y]='.';
 else if((y==4 || y==25) && i!=1 && i!=13 && i!=3 && i!=11 && i!=4 && i!=10)
 array[i][y]=':';
 else if(((i==1 || i==13) && y==14) || ((i==3 || i==11) && (y==10 || y==18)) || ((i==10 || i==5) && y==26)|| (i==7 && y==28))
 array[i][y]='X';
 else if((i==2 && y==1) || (i==4 && y==3))
     array[i][y]='_';
 else if((i==1 && p==y) ||(p>80 && y==p-79 && i==1))
    array[i][y]='1';
 else if(p>=29 && 1+modp==i && y==28 && p<=41)
    array[i][y]='1';
 else if(p>41 && i==13 && y==28-modp && p<=68)
    array[i][y]='1';
else if(p>68 && y==1 && i==13-modp && p<=80)
    array[i][y]='1';
 else if((i==3 && sum==y && y<27) || (sum>=63 && y==sum-61 && i==3))
    array[i][y]='2';
 else if(sum>=27 && 5+mod==i && y==26 && i<=11 && sum<=33 )
    array[i][y]='2';
else if(i==11 && sum>33 && y==26-mod && sum<=56)
    array[i][y]='2';
else if(sum>56 && y==3 && i==11-mod && sum<63)
    array[i][y]='2';
 else
 array[i][y]=' ';
     	}
     }
     printMap(array,p,sum,mod,modp);
      if(sum>=63){
            printf("2. zar kazanmıştır");
            break;
        }
      if(p>=79){
            printf("1. zar kazanmıştır");
            break;
        }
        if(k==1){
        if(p<79 && sum<63){
    a=dice();
    t=p;
    count=a;
    p=t+a;
    printf("first dice is:");
    getchar();
    printf("%d\n",a);
        }    
    b=dice();
    fl=sum;
    flag=b;
    sum=fl+b;
      printf("second dice is:");
    getchar();
    printf("%d\n",b);}
    else {
    b=dice();
    fl=sum;
    flag=b;
    sum=fl+b;
      printf("second dice is:");
    getchar();
    printf("%d\n",b);
    if(p<79 && sum<63){
    a=dice();
    t=p;
    count=a;
    p=t+a;
    printf("first dice is:");
    getchar();
    printf("%d\n",a);
        }    
    }
    if(p==14 || p==35 || p==55){
        printf("1. zar için penaltınoktasına geldiniz\n");
        p=p-2;
    }
    if(p>=29){
    modp=p%29;
    if(p>41){
    modp=p%41;
    if(p>68)
        modp=p%68;
                 }
      }
    if(sum==10 || sum==18 || sum==27 || sum==32 || sum==41 || sum==49){
        printf("2. zar için penaltınoktasına geldiniz\n");
        sum=sum-2;
    }
    if(sum>=27){
        mod=sum%27;
        if(sum>33){
            mod=sum%33;
            if(sum>56){
                mod=sum%56;
            if(sum==63)
                sum=64;}
        }
    }
}
     return 0;
}