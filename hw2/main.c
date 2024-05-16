#include <stdio.h>
#include <stdlib.h>
#include "util.h"


int main() {

    /* Ask for the problem selection (1,2,3) .....  */
    int ask,x=0;;
    double plength,pwidth,result;
    double x1,x2,x3,x4,x5,a,b,age,weight,binary,region,month;
    char k,m;
    printf("1=bitkinin türünü bulma\n");
    printf("2=sayı ağacı bulmacası\n");
    printf("3=Burç tahmin etme durumu (gerçekle alaksı yoktur)\n");
    printf("yapacağınız işlemi şeçiniz:");
    scanf("%d",&ask);
    /* problem birin başlangıcı*/

    if(ask==1){
    printf("Üst yaprak uzunluğunu giriniz:");
    scanf("%lf",&plength);
    printf("Üst yaprak genişliğini giriniz:");
     scanf("%lf",&pwidth); 
    k=dt1a(plength,pwidth);
    m=dt1b(plength,pwidth);
     if(k=='a' && m=='a') 
     printf("Bitki Setosa türüne aittir");
     else if(k=='a'|| m=='a')
    printf(" bitkinin  türü Setosa'dır");
    
     if(k=='d' && m=='d')
     printf("Bitkinin türü Virginica'dır");
     else if(k=='d' || m=='d')
     printf(" ve Bitkinin türü Virginica'dır");

     if(k=='c' && m=='c')
     printf("bitkinin türü Versicolor'dır");
     
    else if(m=='c' || k=='c')
    printf(" ve bitkinin türü  Versicolor'dır"); 
    }
    printf("\n");
    if(ask==2){
    printf("sayılari giriniz\n");
    printf("x1:");
    scanf("%lf",&x1);
    printf("x2:");
    scanf("%lf",&x2);
    printf("x3:");
    scanf("%lf",&x3);
    printf("binary değer giriniz (0 ve 1 ) x4:");
    scanf("%lf",&x4);
    printf("binary değer giriniz (0 ve 1) x5:");
    scanf("%lf",&x5);
    a=dt2a(x1,x2,x3,x4,x5);
    b=dt2b(x1,x2,x3,x4,x5);
    if(a<=b){
    if(b-a<=CLOSE_ENOUGH){
        result=(a+b)/2;
        printf("%lf",result);
        x=1;
    }}
    if(b<=a){
     if(a-b<=CLOSE_ENOUGH){
        result=(a+b)/2;
        printf("%lf",result);
        x=1;

    }}
    if(x!=1){
        printf("decison tree 1 için");
    if(a== 5)
        printf("sonuç 5'tir\n");
    if(a==2.1)
        printf("sonuç 2.1'dir\n");
    if(a==-1.1)
        printf("sonuç -1.1'dir\n");
    if(a==1.4)
        printf("sonuç 1.4'tür\n");
    if(a==-2.23)
        printf("sonuç -2.23'tür\n");
    if (a==11)
        printf("sonuç 11'dir\n");
     printf("decison tree 2 için");
    if(b==-2)
        printf("sonuç -2 dir");
    if(b==1.01)
        printf("sonuç 1.01'dir");
    if(b==-8)
        printf("sonuç -8'dir");
    if(b==-1)
        printf("sonuç -1'dir");
    if (b==(-1/7))
        printf("sonuç -1/7'dir");
    if (b==0.47)
        printf("sonuç 0.47'dir"); 
   }
    
}

    if(ask==3){
        printf("1:ocak\n2:şubat\n3:mart\n4:nisan\n5:mayıs\6:haziran\n7:temmuz\n8:ağustos\n9:eylül\n10:ekim\n11:kasım\n12:aralık \n Doğduğunuz ayı şeçiniz:");
        scanf("%lf",&month);
        printf("yaşını giriniz:");
        scanf("%lf",&age);
        printf("1:Akdeniz\n2:Marmara\n3:Ege\n4:Karadeniz\n5:Doğu Anadaolu\n6:İç Anadaolu\n7:Güneydoğu Anadolu\n Bölgenizi Seçiniz:");
        scanf("%lf",&region);
        printf("binary sayıyı giriniz 0 ya da 1:");
        scanf("%lf",&binary);
        printf("kiloyu giriniz:");
        scanf("%lf",&weight);
        dt3a(age,weight,binary,region,month);
        dt3b(age,weight,binary,region,month);
        if(dt3a(age,weight,binary,region,month)==1 && dt3b(age,weight,binary,region,month)==1)
            printf("Burcunuz başaktır");
        else if(dt3a(age,weight,binary,region,month)==1 || dt3b(age,weight,binary,region,month)==1)
            printf("Burcunuz terazidir\n");
        if(dt3a(age,weight,binary,region,month)==2 && dt3b(age,weight,binary,region,month)==2)
            printf("Burcunuz oğlaktır");
        else if(dt3a(age,weight,binary,region,month)==2 || dt3b(age,weight,binary,region,month)==2)
            printf("Burcunuz boğadır\n");
        if(dt3a(age,weight,binary,region,month)==3 && dt3b(age,weight,binary,region,month)==3)
            printf("Burcunuz kovadır");
         else if(dt3a(age,weight,binary,region,month)==3 || dt3b(age,weight,binary,region,month)==3)
            printf("Burcunuz başaktır\n");
        if(dt3a(age,weight,binary,region,month)==4 && dt3b(age,weight,binary,region,month)==4)
            printf("Burcunuz yengeçtir");
        else if(dt3a(age,weight,binary,region,month)==4 || dt3b(age,weight,binary,region,month)==4)
            printf("Burcunuz oğlaktır\n");
        if(dt3a(age,weight,binary,region,month)==5 && dt3b(age,weight,binary,region,month)==5)
            printf("Burcunuz boğadır");
         else if(dt3a(age,weight,binary,region,month)==5 || dt3b(age,weight,binary,region,month)==5)
            printf("Burcunuz aslandır\n");
        if(dt3a(age,weight,binary,region,month)==6 && dt3b(age,weight,binary,region,month)==6)
            printf("Burcunuz ikizlerdir");
        else if(dt3a(age,weight,binary,region,month)==6 || dt3b(age,weight,binary,region,month)==6)
            printf("Burcunuz yaydır\n");
        if(dt3a(age,weight,binary,region,month)==7 && dt3b(age,weight,binary,region,month)==7)
            printf("Burcunuz aslandır");
        else if(dt3a(age,weight,binary,region,month)==7 || dt3b(age,weight,binary,region,month)==7)
            printf("Burcunuz ikizlerdir\n");
        if(dt3a(age,weight,binary,region,month)==8 && dt3b(age,weight,binary,region,month)==8)
            printf("Burcunuz yaydır");
         else if(dt3a(age,weight,binary,region,month)==8 || dt3b(age,weight,binary,region,month)==8)
            printf("Burcunuz kovadır\n");
        if(dt3a(age,weight,binary,region,month)==9 && dt3b(age,weight,binary,region,month)==9)
            printf("Burcunuz terazidir");
         else if(dt3a(age,weight,binary,region,month)==9 || dt3b(age,weight,binary,region,month)==9)
            printf("Burcunuz akreptir\n");
        if(dt3a(age,weight,binary,region,month)==10 && dt3b(age,weight,binary,region,month)==10)
            printf("Burcunuz  balıktır");
        else if(dt3a(age,weight,binary,region,month)==10 || dt3b(age,weight,binary,region,month)==10)
            printf("Burcunuz yengeçtir\n");
        if(dt3a(age,weight,binary,region,month)==11&& dt3b(age,weight,binary,region,month)==11)
            printf("Burcunuz akreptir");
         else if(dt3a(age,weight,binary,region,month)==11 || dt3b(age,weight,binary,region,month)==11)
            printf("Burcunuz  balıktır\n");


    }

   

    return 0;
}
