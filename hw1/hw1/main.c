#include <stdio.h>
#include "util.h"


int main() {
   
    
    int a,b,c,k,f_I,l,p,password,m,q,counter=0;
    char tc[11];
    printf("enter first integer");
    scanf("%d",&a);
    printf("enter secend integer");
    scanf("%d",&b);
    printf("enter the divisor");
    scanf("%d",&c);
    f_I=find_divisible(a,b,c);
    l=find_nth_divisible(k,f_I,c);
    if(f_I==-1 || f_I==b)
    printf("There is not any integer between %d and %d can be divided by %d\n",a,b,c);
    else {
    printf("The first integer between %d and %d divided by %d is %d\n",a,b,c,f_I);
    printf("enter the number how many next");
    scanf("%d",&k);
    q=k+1;
    l=find_nth_divisible(k,f_I,c);
         if(l<=b)
          printf("The %d rd integer between %d and %d divided by %d is %d\n",q,a,b,c,l);
         else 
         printf("there is no how many next\n");
         }
    
    char sayi[11];
    printf("tcnizi kaydediniz=");
    scanf("%s",sayi);
    m=validate_identity_number(sayi);
    if(m==-1){
    while(m!=1){
    scanf("%s",sayi);
    m=validate_identity_number(sayi);
    }}
    if(m==1){
    printf("tciniz başarılı şekilde kaydedilmiştir\n");
    printf("4 haneli passwordu oluşturunuz=");
    scanf("%d",&password);
    while(counter!=1){
    if(password<10000 && password>999){
    printf("password başarılı şekilde oluşmuştur\n");
    counter=1;}
    else {
    printf("eksik ya da fazla giriş passwordu tekrar oluşturunuz=");
    scanf("%d",&password);}
    }
    create_customer(sayi,password);
    }
     
    float t;
    if(check_login(sayi,password)==2){
    printf("para miktarını giriniz=");
    scanf("%f",&t);
    withdrawable_amount(t);
    }
    
    
    
    
    
    
    
    
   
    return(0);
}
