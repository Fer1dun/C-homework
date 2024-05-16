#include <stdio.h>
int main(){
    int choice,a,b,c,k,i,l,x,y,flag=0,z,num=15,t,m,p;
	printf("Select an operation..\n1:Enter the coefficients\n2:Draw the graph\n3:Printf the graph into a txt file\n4:Exit");
	scanf("%d",&choice);
	printf("choice:%d\n",choice);
     FILE*fp;
     FILE*outfile;
     while(choice!=4){
	if(choice==1){
		printf("please enter the coefficient  for the following equation:x=a*(y*y)+b*y+c\n");
		printf("a:");
		scanf("%d",&a);
		printf("b:");
		scanf("%d",&b);
		printf("c:");
		scanf("%d",&c);
		printf("equation:x=%d*(y*y)+%d*y+%d",a,b,c);
		fp=fopen("coefficients.txt","w");
		fprintf(fp,"%d,%d,%d",a,b,c);
		fclose(fp);
		printf("Select an operation..\n1:Enter the coefficients\n2:Draw the graph\n3:Printf the graph into a txt file\n4:Exit");
	scanf("%d",&choice);
	printf("choice:%d\n",choice);
	}  
	if(choice==2){
		if ((fp = fopen("coefficients.txt", "r")) == NULL) {
      printf("Dosya açma hatası!Dosya yoktur\n");
      break;
  } 
  else{
		fp=fopen("coefficients.txt","r");
		fscanf(fp,"%d,%d,%d",&a,&b,&c);
		fclose(fp);
  
	b=b*-1;

        for(i=-15;i<=15;i++){
        	for(k=-55;k<=55;k++){
        		if(k==(a*i*i)+(b*i)+c){
        			if(i==0){
        				for(z=0;z<=55;z++){
        					printf("-");			
        				if(z==55+c){
        					printf("\033[0;31m");
        					printf("#");
        					printf("\033[0m");
        				}
        			}
        			}
        			if(i!=0){
        			for(x=-55;x<=k;x++){
        				if(i==1 && x%10==0 && x<=0)
        					printf("\b\b%d",x);
        			else if(i==1 && x%10==0 && x>0)
        					printf("\b%d",x);
        				else 
        				printf(" ");
        				if(x==0){
        					if(i==-15 || i==-10 || i==-5 )
        		         printf("|%d",-i);
        	              else if(i==10 || i==5 || i==15)
        		        printf("|%d",-i);
        		    else if(i==1)
        		    	printf("  |");
        		    else
        					printf("|");
        				}
        		}
        		if(k*i<0){
        		if(i==-15 || i==-10)
        			printf("\b\b");
        		if(i==-5 || i==0 )
        			printf("\b");}
        		if(k*i>0 && i==5)
        			printf("\b\b");
        			if(k*i>0){  	
        		if(i==15 || i==10)
        			printf("\b\b\b");}
        		if(a==0 && b==0 && c==0){
        			if(i==-15 || i==-10 || i==5)
        				printf("\b\b\b#");
        			else if(i==15 || i==10)
        				printf("\b\b\b\b#");
        			else if(i==-5)
        				printf("\b\b#");
        			else
        			printf("\b#");}
        		else{
        		printf("\033[0;34m");
        		printf("#");
        		printf("\033[0m");}
        		if(k==-1)
        			printf("|");
        		if(i==1 ){
        		for(m=k+1;m<=55;m++){
        			printf(" ");
        			if(m%10==0 && i==1 && m!=0)
        				printf("\b\b%d",m);
        			
        		}}
        	}
        		
        		if(i==0){
        				for(z=0;z<=55;z++){
        					printf("-");
        			if(z==c && c!=0){
        				printf("\033[0;32m");
        				printf("#");
        				printf("\033[0m");
        				}}
        			}
        		if(k<0 && i!=0 && i!=1){
        			for(flag=k;flag<=-2;flag++){
        				printf(" ");	
        			if(flag==-2){
        				if(i==-15 || i==-10 || i==-5)
        		         printf("|%d",-i);
        	              else if(i==10 || i==5 || i==15)
        		        printf("|%d",-i);
        		    else 
        					printf("|");
        			}
        				}
        		}
        			
                printf("\n"); 
   break;
        	}
        	if(k==54){
        		if(i==-15 || i==-10 || i==-5 || i==0)
        		printf("\t\t\t\t\t\t\t|%d\b\n",-i);
        	 else if(i==10 || i==5 || i==15)
        		printf("\t\t\t\t\t\t\t|%d\b\n",-i);

        	else 
        		printf("\t\t\t\t\t\t\t|\n");
        	}
        		
        	}
        	
        }
        }   
        printf("Select an operation..\n1:Enter the coefficients\n2:Draw the graph\n3:Printf the graph into a txt file\n4:Exit");
	scanf("%d",&choice);
	printf("choice:%d\n",choice);   
	}
	if(choice==3){
		if ((fp = fopen("coefficients.txt", "r")) == NULL) {
      printf("Dosya açma hatası!Dosya yoktur\n");
      break;}
      else {
		fp=fopen("coefficients.txt","r");
		fscanf(fp,"%d,%d,%d",&a,&b,&c);
		fclose(fp);
		outfile=fopen("graph.txt","w");
		b=b*-1;
        for(i=-15;i<=15;i++){
        	for(k=-55;k<=55;k++){
        		if(k==(a*i*i)+(b*i)+c){
        			if(i==0){
        				for(z=0;z<=55;z++){
        					fprintf(outfile,"-");			
        				if(z==55+c)
        					fprintf(outfile,"#");}
        			}
        			if(i!=0){
        			for(x=-55;x<=k;x++){
        				fprintf(outfile," ");
        				if(x==0){
        					fprintf(outfile,"|");
        				}
        		}

        		fprintf(outfile,"#");
        		if(k==-1)
        			fprintf(outfile,"|");
        	}
        		
        		if(i==0){
        				for(z=0;z<=55;z++){
        					fprintf(outfile,"-");
        			if(z==c && c!=0)
        				fprintf(outfile,"#");
        				}
        			}
        		if(i!=0){
        			for(flag=k;flag<=-2;flag++){
        				fprintf(outfile," ");	
        			if(flag==-2){ 
        					fprintf(outfile,"|");
        			}
        				}}
        		
        			
                fprintf(outfile,"\n"); 
   break;
        	}
        	if(k==54){ 
        		for(p=0;p<=55;p++)
        			fprintf(outfile," ");
        		fprintf(outfile,"|\n");
        	}
        		
        	}
        	
        }
		printf("grafik dosyaya yazılmıştır\n");
		fclose(outfile);
	}
	printf("Select an operation..\n1:Enter the coefficients\n2:Draw the graph\n3:Printf the graph into a txt file\n4:Exit");
	scanf("%d",&choice);
	printf("choice:%d\n",choice);
}
if(choice!=1 && choice!=2 && choice!=3 && choice!=4){
printf("hatalı sayı girdiniz");
break;}
}

return 0;
} 