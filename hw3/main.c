#include <stdio.h>
#include <math.h>
int sum(int n1,int n2,int flag){
	int count,result=0,i;
	if(flag==0){
		if(n1%2==0){
			for(i=n1+2;i<n2;i+=2){
				result=result+i;
				printf("%d",i);
				if(i<n2-2)
					printf("+");
			}
			return result;
		}
		if(n1%2==1 || n1%2==-1){
			for(i=n1+1;i<n2;i+=2){
				result=result+i;
				printf("%d",i);
				if(i<n2-2)
					printf("+");
			}
			return result;
	}

}
if(flag==1){
		if(n1%2==1){
			for(i=n1+2;i<n2;i+=2){
				result=result+i;
				printf("%d",i);
				if(i<n2-2)
					printf("+");
			}
			return result;
		}
		if(n1%2==0){
			for(i=n1+1;i<n2;i+=2){
				result=result+i;
				printf("%d",i);
				if(i<n2-2)
					printf("+");
			}
			return result;
	}
}
}
int multi(int n1,int n2,int flag){
	int count,result=1,i;
	if(flag==0){
		if(n1%2==0){
			for(i=n1+2;i<n2;i+=2){
				result=result*i;
				printf("%d",i);
				if(i<n2-2)
					printf("*");
			}
			return result;
		}
		if(n1%2==1 || n1%2==-1){
			for(i=n1+1;i<n2;i+=2){
				result=result*i;
				printf("%d",i);
				if(i<n2-2)
					printf("*");
			}
			return result;
	}

}
if(flag==1){
		if(n1%2==1){
			for(i=n1+2;i<n2;i+=2){
				result=result*i;
				printf("%d",i);
				if(i<n2-2)
					printf("*");
			}
			return result;
		}
		if(n1%2==0){
			for(i=n1+1;i<n2;i+=2){
				result=result*i;
				printf("%d",i);
				if(i<n2-2)
					printf("*");
			}
			return result;
	}

}
}
int isprime(int a){
	int k,cont;
		for(k=2;k<=sqrt(a);k++){
			if(a%k==0 ){
				cont=1;
				return k;
			}
			cont=0;
			
		}
		if(cont!=1)
				return 0;

}
void write_file(int number){
	FILE*outfile;
         outfile=fopen("results.txt","a");
         fprintf(outfile," %d",number);
         fclose(outfile);
	
}
void print_file (){
	int number;
	      FILE*outfile;
         outfile=fopen("results.txt","r");
         while(feof(outfile)==0){
         	fscanf(outfile,"%d ",&number);
         	printf("%d ",number);
         }

         fclose(outfile);

}
void sort_file(){
	int num1=2147483646,num2=2147483646,num3=2147483646,number,count=0,a=2147483646,b=2147483646,c=-2147483646,i,x,y;
	      FILE*outfile;
	      FILE*ptr;
         outfile=fopen("results.txt","r");
         while(feof(outfile)==0){
         	fscanf(outfile,"%d",&number);
         	count++;}
         	for(x=0;x<=count/3;x++){
         	for(i=0;i<=count;i++){
         		outfile=fopen("results.txt","r");
         	  while(feof(outfile)==0){
         	fscanf(outfile,"%d",&number);
         	if(a!=number && b!=number && c!=number){
         		if(number>c){
         	if(number<num1)
         		num1=number;
         	if(number>num1){
         		if(number<num2)
         	num2=number;
      }	
         	if(number>num2 && number>num1){
         			if(number<num3)
         				num3=number;
         		}
         	}}}
         	
         	         	}
         	         	a=num1,b=num2,c=num3;
         	
         ptr=fopen("temporary.txt","a");
         if(num3!=2147483646 && num1!=2147483646 && num2!=2147483646)
         fprintf(ptr,"%d %d %d ",a,b,c);
      else if(num2!=2147483646 && num3==2147483646 && num1!=2147483646)
      	fprintf(ptr,"%d %d",a,b);
      else if(num3==2147483646 && num1!=2147483646 )
      	fprintf(ptr,"%d",a);
         fclose(ptr);
         num1=2147483646,num2=2147483646,num3=2147483646;
}
         
         ptr=fopen("temporary.txt","r");
    outfile=fopen("results.txt","w");
    while(!feof(ptr)){
        fscanf(ptr,"%d ",&y);
        fprintf(outfile,"%d ",y);
    }
    fclose(ptr);
    fclose(outfile);
    outfile=fopen("results.txt","r");
   while(!feof(outfile)){
   	fscanf(outfile,"%d ",&y);
   	printf("%d ",y);

   }

}
int main(){

    int selection,num1,num2,flag,num3,k,count,prime,a,number;
    printf("1:Calculate sum/mult between two numbers\n2:Calculate prime nubmers\n3:Show number sequence in file\n4:Short number sequence in file\n");
	printf("yapacağınız işlemi seçiniz:");
	scanf("%d",&selection);

	switch(selection){
		case 1:
		printf("please enter 0 for sum,1 for multiplication:");
		scanf("%d",&num1);
		printf("please enter 0 to work  on even nubemrs,1 to work  on odd nubmers:");
		scanf("%d",&flag);
		printf("please enter two numbers:");
			scanf("%d%d",&num2,&num3);		
			switch(num1){
		case 0:
			if(num3<num2){
				count=num2;
				num2=num3;
				num3=count;		
			}
			k=sum(num2,num3,flag);
			printf("=%d\n",k);
		break;
		case 1:
		
			if(num3<num2){
				count=num2;
				num2=num3;
				num3=count;		
			}
			k=multi(num2,num3,flag);
			if(k==1){
				printf("=0");}
			else{
			printf("=%d\n",k);}
			break;
			default:
			printf("Hatalıdır");
			printf("0 ve 1 i girerken dikkat ediniz");
			break;		
		}
		write_file(k);
			break;
   

   case 2:
         printf("please enter an integer");
         scanf("%d",&prime);
         for(a=2;a<prime;a++){
         	k=isprime(a);
         if(k==0)
         	printf("%d is prime number\n",a);
         	else
         	printf("%d is not prime number ,it is dividible %d\n",a,k);
         } 
         break;

   case 3:
        print_file();
            
   break;

    case 4:
    sort_file();
    break;
    default:
    printf("Hatalıdır");
    break;
 	}

	return 0;
}