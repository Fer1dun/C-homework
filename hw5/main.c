#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14
enum shapes{
	triangle=1,quadrilateral,circle,pyramid,cylinder
};
enum calculators{
	area=1,perimeter,volume
};
int select_shape(){
	int a,a1; 
	while(1){
	printf("Select the shape of calculate\n");
	printf("1:triangle\n2:quadrilateral\n3:circle\n4:pyramid\n5:cylinder\n0:exit");
	a1=scanf("%d",&a);
	if(a1==0){
		printf("Error please enter valid entry\n");
		getchar();
	}
	else 
		break;

}
	return a;

}
int select_calc(){
	int b,b1;
	while(1){
	printf("Select the calculator\n");
	printf("1:area\n2:perimeter\n3:volume\n0:exit");
	b1=scanf("%d",&b);
	if(b1==0){
		printf("ERROR please enter the valid entry\n");
		getchar();}
		else 
			break;
	
}
	return b;

}
int calc_triangle(int b){
	float n1,n2,n3,per,ar,s,a1,b1,c1;
	switch(b){
		case area: 
		while(1){
		printf("please enter the three side of triangle\n");
	a1=scanf("%f",&n1);
	b1=scanf("%f",&n2);
	c1=scanf("%f",&n3);
	    if(n1<=0 || n2<=0 || n3<=0 || a1==0 || b1==0 || c1==0){
		printf("Error please enter a valid entry\n");
	getchar();}
	else if(n1+n2<=n3 || n1+n3<=n2 || n3+n2<=n1)
		printf("Error please enter a valid triangle\n");
	else{
         s=(n1+n2+n3)/2;
         ar=sqrt(s*(s-n1)*(s-n2)*(s-n3));
         printf("are of the triangle:%.2f\n",ar);
         break;}
     }
		break;
		case perimeter:
		while(1){
		printf("please enter the three side of triangle\n");
	a1=scanf("%f",&n1);
	b1=scanf("%f",&n2);
	c1=scanf("%f",&n3);
	  if( n1<=0 || n2<=0 || n3<=0 || a1==0 || b1==0 || c1==0){
		printf("Error please enter a valid entry\n");
		getchar();}
	else if(n1+n2<=n3 || n1+n3<=n2 || n3+n2<=n1)
		printf("Error please enter a valid triangle\n");
	else{
         per=n1+n2+n3;
         printf("perimeter of the triangle:%.2f\n",per);
         break;}
     }
		break;
		case volume:
		printf("hatalı üçgenin hacmi yoktur\n");
		break;
	}
	return 0;
}


int calc_quadrilateral(int b){
	float n1,n2,n3,n4,s,ar,per,a1,b1,c1,d1;
	switch(b){
		case area:
		while(1){
		printf("Please enter the four sides of quadrilateral\n");
		a1=scanf("%f",&n1);
        b1=scanf("%f",&n2);
        c1=scanf("%f",&n3);
        d1=scanf("%f",&n4);
		if(n1<=0 || n2<=0 || n3<=0 || n4<=0 || a1==0 || b1==0 || c1==0 || d1==0){
			printf("please enter the valid entry\n");
			getchar();
		}
		else{
			s=(n1+n2+n3+n4)/2;
            ar=sqrt((s-n1)*(s-n2)*(s-n3)*(s-n4));
           printf("area of quadrilateral:%.2f\n",ar);
           break;
		}
	}
		break;
		case perimeter:
		while(1){
		printf("Please enter the four sides of quadrilateral\n");
		a1=scanf("%f",&n1);
        b1=scanf("%f",&n2);
        c1=scanf("%f",&n3);
        d1=scanf("%f",&n4);
		if(n1<=0 || n2<=0 || n3<=0 || n4<=0 || a1==0 || b1==0 || c1==0 || d1==0){
			printf("please enter the valid entry\n");
			getchar();
		}
		else{
		per=n1+n2+n3+n4;
		printf("perimeter of quadrilateral:%.2f\n",per);
		break;}
	}
		break;
		case volume:
		printf("Error you can not calculate the volume of quadrilateral\n");
		break;
	}

return 0;
}
int calc_circle(int b){
	float radius,ar,per,a1,b1,c1;
	switch(b){
		case area:
		while(1){
		printf("please enter the radius of circle\n");
		a1=scanf("%f",&radius);
			if(radius<=0 || a1==0){
				printf("please enter the valid entry\n");
				getchar();
		}
		else{
        ar=pi*radius*radius;
        printf("radius of the circle:%.2f\n",ar);
        break;}}
		break;
		case perimeter:
		while(1){
		printf("please enter the radius of circle\n");
		scanf("%f",&radius);
		if(radius<=0 || a1==0){
				printf("please enter the valid entry\n");
				getchar();}
		else{
		per=2*pi*radius;
		printf("perimeter of the circle:%.2f\n",per);
		break;}}
		break;
		case volume:
		printf("ERROR You can not calculate the volume of circle please try again\n");
		break;
			}
			return 0;
	}

int calc_pyramid(int b){
	float height,side,vol,base,lateral,surface,baseside,slant,per,a1,b1;
	switch(b){
		case area:
		while(1){
		printf("please enter the base side and slant height of a pyramid\n");
		a1=scanf("%f",&baseside);
		b1=scanf("%f",&slant);
		if(baseside<=0 || slant<=0 || a1==0 || b1==0){
				printf("please enter the valid entry\n");
				getchar();
		}
		else{
		base=baseside*baseside;
        lateral=2*baseside*slant;
        surface=base+lateral;
        printf("base surface area of pyramid:%.2f\n",base);
        printf("lateral surface area of pyramid:%.2f\n",lateral);
        printf("surface area of pyramid:%.2f\n",surface);
        break;}}
		break;
		case perimeter:
		while(1){
		printf("enter the base side of the pyramid\n");
		a1=scanf("%f",&baseside);
		if(baseside<=0 || a1==0){
				printf("please enter the valid entry\n");
				getchar();
		}
		else{
		per=4*baseside;
		printf("base perimeter of the pyramid:%.2f\n",per);
		break;}}
		break;
		case volume:
		while(1){
		printf("please enter the base side and height of the pyramid\n");
	a1=scanf("%f",&side);
	b1=scanf("%f",&height);
	if(side<=0 || height<=0 || a1==0 || b1==0){
		printf("please enter the valid entry\n");
				getchar();
	}
	else{
		vol=(1.0/3.0)*side*side*height;
		printf("volume of the pyramid:%.2f\n",vol);
		break;}}
		break;
	}
return 0;
}
int calc_cylinder(int b){
	float radius,height,vol,per,are,base,lateral,surface,a1,b1;
	switch(b){
		case area:
		while(1){
	printf("please enter the  radius and height of the cylinder\n");
	a1=scanf("%f",&radius);
	b1=scanf("%f",&height);
		if(height<=0 || radius<=0 || a1==0 || b1==0){
		printf("please enter the valid entry\n");
		getchar();
	}
	else{
		base=pi*radius*radius;
		lateral=2*pi*radius*height;
		surface=2*pi*radius*(radius+height);
		printf(" base surface area of cylinder:%.2f\n",base);
		printf("lateral surface area of cylinder:%.2f\n",lateral);
		printf("surface areo of cylinder:%.2f\n",surface);
		break;}}
		break;
		case perimeter:
		while(1){
		printf("please enter the radius of the cylinder\n");
		a1=scanf("%f",&radius);
		if(radius<=0 || a1==0){
		printf("please enter the valid entry\n");
		getchar();
	}
	else{
		per=2*pi*radius;
		printf("base surface perimeter of cylinder:%.2f\n",per);
		break;}}
		break;
		case volume:
		while(1){
		printf("please enter the  radius and height of the cylinder\n");
	a1=scanf("%f",&radius);
	b1=scanf("%f",&height);
		if(height<=0 || radius<=0 || a1==0 || b1==0){
		printf("please enter the valid entry\n");
		getchar();
	} 
	else{
			vol=pi*radius*radius*height;
			printf("volume of the cylinder:%.2f\n",vol);
			break;}}
		break;
	}
return 0;
}

int calculate(int (*select_shape)(),int (*select_calc)()){
	int a,b;
	do{
		a=(*select_shape)();
		if(a!=1 && a!=2 && a!=3 && a!=4 && a!=5 ){
			while(a!=1 && a!=2 && a!=3 && a!=4 && a!=5 && a!=0)
			a=(*select_shape)();}
		if(a==0)
			break;
		b=(*select_calc)();
		if(b!=1 && b!=2 && b!=3 ){
			while(b!=1 && b!=2 && b!=3 && b!=0)
			b=(*select_calc)();}
		if(b==0)
			break;
		
	switch(a){
		case triangle:
		calc_triangle(b);
		break;
		case quadrilateral:
		calc_quadrilateral(b);
		break;
		case circle:
		calc_circle(b);
		break;
		case pyramid:
		calc_pyramid(b);
		break;
		case cylinder:
		calc_cylinder(b);
		break;

	}
}while(1);
return 0;
}
int main(){
	printf("welcome to the geometric calculator\n");
	calculate(select_shape,select_calc);
	return 0;
}
