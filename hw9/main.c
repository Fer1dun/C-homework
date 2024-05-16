#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union Person{
	char name[50];
	char adress[50];
	int phone;
};
union Loan{
	float amount;
	float intrestRate;
	int period;
};
struct BankAccount{
	union Person Customer[3];
	union Loan Loans[3];

};
// customerleri printliyor
void listCustomers(struct BankAccount*customer,int counter){
	int i;
	for(i=0;i<counter-1;i++){
		printf("Customer ID=%d\n",i+1);
		printf("Customer name=%s\n",customer[i].Customer[0].name);
		printf("Customer Phone=%d\n",customer[i].Customer[1].phone);
		printf("Customer adress=%s\n",customer[i].Customer[2].adress);	}


}
//strcuta customerları kaydediyor
void addCustomer(struct BankAccount*customer,int flag){
	int i;
	FILE*ptr;
	ptr=fopen("customer.txt","a");
	printf("Customer name:");
	fflush(stdin);
	scanf(" %[^\n]%*c",customer[flag-1].Customer[0].name);
	fprintf(ptr,"\n%s\n",customer[flag-1].Customer[0].name);
	printf("Customer phone:");
	fflush(stdin);
	scanf("%d",&customer[flag-1].Customer[1].phone);
	fprintf(ptr,"%d\n",customer[flag-1].Customer[1].phone);
	printf("Customer adress:");
	fflush(stdin);
	scanf(" %[^\n]%*c",customer[flag-1].Customer[2].adress);
	fprintf(ptr,"%s\n",customer[flag-1].Customer[2].adress);
	fclose(ptr);
}
//burada periyot,faiz miktarına göre toplam parayı hesaplıyor
void calulateLoan(float amount,int period,float intrestRate,char name[]){
	static float loan=1;
	static int a=0;
	FILE*ptr;
	ptr=fopen("loan.txt","a");
	if(period==0){
		fprintf(ptr,"%s\n%f\n%d\n",name,loan,period+a);
		a=0;
		fclose(ptr);
		return;
	}
	else{
		if(loan==1)
		loan=amount*(1+(intrestRate/100));
	else
		loan=(1+(intrestRate/100))*loan;
	a++;
	return calulateLoan(amount,period-1,intrestRate,name);
}
}
//burada en fazla 3 kredi alacak şekilde para bilgilerini giriyoruz
void newloan(struct BankAccount loan,struct BankAccount*customer){
	char name[50];
	char name2[50];
	int i=0,period;
	static int flag[50];
	float amount,intrestRate;
	 printf("isimini giriniz:");
	scanf(" %[^\n]%*c",name);

	for(i=0;i<50;i++){
	if(strcmp(name,customer[i].Customer[0].name)==0){
		if(flag[i]++<3){
		printf("para miktarını giriniz:");
		scanf("%f",&loan.Loans[0].amount);
		amount=loan.Loans[0].amount;
		printf("faiz oranını giriniz:");
		scanf("%f",&loan.Loans[1].intrestRate);
		intrestRate=loan.Loans[1].intrestRate;
		printf("toplam ayı giriniz:");
		scanf("%d",&loan.Loans[2].period);
		period=loan.Loans[2].period;
		calulateLoan(amount,period,intrestRate,name);
	}
     else 
     printf("kredi hakkınız dolmuştur\n");
}
		
}
}
//burada kişi bilgilerini veya aylık ödenmesi gereken parayı veriyor
void getReport(int chocie2){
	char name[50],realname[50],adress[50],loanname[50];
	int phone,i=0,cred;
	float loan[3],tloan,period[3],month;
	loan[0]=0;
	loan[1]=0;
	loan[2]=0;
	if(chocie2==1){
	FILE*ptr;
	ptr=fopen("customer.txt","r");
	FILE*out;
	out=fopen("loan.txt","r");
	printf("isiminizi giriniz:");
    scanf(" %[^\n]%*c",realname);
	while(!feof(ptr)){
     fscanf(ptr," %[^\n]%*c",name);
     if(strcmp(realname,name)==0){
     	if(i==0){
     	printf("name=%s\n",realname);
     	fscanf(ptr,"%d",&phone);
     	printf("phone=%d\n",phone);
     	fscanf(ptr," %[^\n]%*c",adress);
     	printf("adres=%s\n",adress);}
     	while(!feof(out)){
     		fscanf(out," %[^\n]%*c",loanname);
     		if(strcmp(realname,loanname)==0){
            fscanf(out,"%f",&loan[i]);
            i++;
     		}
     	}
     }
	}
	if(i!=0){
	tloan=loan[0]+loan[1]+loan[2];
	printf("loan=[%.2f+%.2f+%.2f]=%.2f\n",loan[0],loan[1],loan[2],tloan);}
	fclose(ptr);
	fclose(out);
     }
     if(chocie2==2){
     	FILE*ptr;
	ptr=fopen("customer.txt","r");
	FILE*out;
	out=fopen("loan.txt","r");
	printf("isiminizi giriniz:");
    scanf(" %[^\n]%*c",realname);
	while(!feof(ptr)){
     fscanf(ptr," %[^\n]%*c",name);
     if(strcmp(realname,name)==0){
     	while(!feof(out)){
     		fscanf(out," %[^\n]%*c",loanname);
     		if(strcmp(realname,loanname)==0){
            fscanf(out,"%f",&loan[i]);
            fscanf(out,"%f",&period[i]);
            i++;
     		}
     	}
     	printf("kaçıncı krediye baktınız:");
     	scanf("%d",&cred);
     	if(cred==1){
     		printf("total credit value=%.2f\n",loan[0]);
     		month=loan[0]/period[0];
     		for(int k=1;k<=period[0];k++){
     			printf("%d.month installment=%.2f\n",k,month);
     		}   
     	}
     	if(cred==2){
     		printf("total credit value=%.2f\n",loan[1]);
     		month=loan[1]/period[1];
     		for(int k=1;k<=period[1];k++){
     			printf("%d.month installment=%.2f\n",k,month);
     		}   
     }
     if(cred==3){
     		printf("total credit value=%.2f\n",loan[2]);
     		month=loan[2]/period[2];
     		for(int k=1;k<=period[2];k++){
     			printf("%d.month installment=%.2f\n",k,month);
     		}   
	}
     }

}
}}
//her şey burada başlıyor
int main(){
	int chocie,counter=1,flag=0,chocie2;
	struct BankAccount*customer;
	struct BankAccount loan;
	customer= (struct BankAccount*) malloc(sizeof(struct BankAccount)*50);
	
	printf("1. List All Customers\n2.Add New Customers\n3.New Loan Application\n4.Report menu\n5.EXIT\n");
	scanf("%d",&chocie);
	do{
	if(chocie==1){
		listCustomers(customer,counter);
		printf("1. List All Customers\n2.Add New Customers\n3.New Loan Application\n4.Report menu\n5.EXIT\n");
		scanf("%d",&chocie);

	}
	if(chocie==2){
		counter++;
		flag++;
		addCustomer(customer,flag);
		printf("1. List All Customers\n2.Add New Customers\n3.New Loan Application\n4.Report menu\n5.EXIT\n");
		scanf("%d",&chocie);

	}
	if(chocie==3){
		newloan(loan,customer);
		printf("1. List All Customers\n2.Add New Customers\n3.New Loan Application\n4.Report menu\n5.EXIT\n");
		scanf("%d",&chocie);

	}
	if(chocie==4){
		printf("1:customer details\n2:loan detail\n");
		scanf("%d",&chocie2);
		getReport(chocie2);
		printf("1. List All Customers\n2.Add New Customers\n3.New Loan Application\n4.Report menu\n5.EXIT\n");
		scanf("%d",&chocie);

	}
}while(chocie!=5);
	return 0;
}

	
