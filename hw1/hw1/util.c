#include <stdio.h>
#include "util.h"
  int find_divisible(int x, int y, int z){

   if(x>y)
   return -1;
   if(x<y){
    while(x!=y){
    if(x%z==0){
    ;
    break;
    }
    
     x++;
     }
     }
     return x;
     
     }
     
 int find_nth_divisible(int n, int f_I, int z){
int a,l;
l=f_I+z*n;
 return l;

}
int validate_identity_number(char number [ ]){
int h=0,a,b,length=-1,c,password,i;
  while(c!='\0'){
c=number[h];
length++;
h++;
}	
  a=(((number[0]+number[2]+number[4]+number[6]+number[8]-48*5)*7)-(number[1]+number[3]+number[5]+number[7]-48*4))%10;
b=((number[1]+number[3]+number[5]+number[7]+number[0]+number[2]+number[4]+number[6]+number[8]+number[9])-(48*10))%10;
  for(i=0;i<=10;i++){
 if(number[i]>=48 && number[i]<=57 && number[0]!=48  && b==number[10]-48 && a==number[9]-48 && length==11){
 return 1;
 }
 else { 
 printf("tekrar giriniz");
 c=1;
 h=0;
 return -1;
 }
 }
 }
 int create_customer(char identity_number [ ], int password){
 FILE*outfile;
 outfile=fopen("customeraccount.txt","w");
 fprintf(outfile,"%s,%d",identity_number,password);
 fclose(outfile);
 }
 int check_login(char identity_number [ ], int password){
 char login[11];
 FILE*outfile;
 outfile=fopen("customeraccount.txt","r");
 fscanf(outfile,"%[^,]%*c%d",identity_number,&password);
 fclose(outfile);
 int id,i,k,m;
     printf("tc giriniz=");
    scanf("%s",login);
    printf("şifre giriniz=");
    scanf("%d",&id);
    for(i=0;i<=10;i++){
    if(identity_number[i]==login[i])
    k=1;
    else {
    k=3;
    break;}
    }
    
    if(id==password && k==1){
    printf("başarılı giriş \n");
    m=2;
    return 2;
    }
    else 
    printf("hatalı giriş");
    
 }
 int withdrawable_amount(float cash_amount){
 int money,real,new;
 money=cash_amount;
 real=money%10;
 new=money-real;
 printf("bu kadar para alabilrisiniz %d",new);
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 




    


