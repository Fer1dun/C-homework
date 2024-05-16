#include <stdio.h>
#include "util.h"

/* Example decision tree - see the HW2 description */
char dt1a(double length,double width){
if(length<2.45 )
return 'a';
else {

  if(width<1.75 ){
    if(length<4.95){
      if(width<1.65)
        return 'c';
        else  
         return 'd';
         }
    else 
    return 'd';
  }
 else
  return 'd';
}}

char dt1b(double length,double width){
  if(length<2.55)
    return 'a';
  else {
    if(width<1.69){
       if(length<4.85)
         return 'c';
        else
          return 'd';
      }
    else 
      return 'd';
  }

}

double dt2a(double x1,double x2,double x3,double x4,double x5){
  if(x1<31.5){
    if(x2>-2.5)
      return 5;
     else {
      if(x2-0.1<=x1 && x1<=x2+0.1)
        return 2.1;
      else 
        return -1.1;
     }
  }
  else {
    if(-1<=x3 && x3<=2)
      return 1.4;
    else {
      if(x4==1 && x5==1)
        return -2.23;
      else  
      return 11;
    }
  }
}
double dt2b(double x1,double x2,double x3,double x4,double x5){
if(12<x1 && x1<22){
  if(x3/(5/3))
    return -2;
  else {
    if(x1-0.1<=x3 && x3<=x1+0.1)
      return 1.01;
    else  
      return -8;
  }
}
else {
  if(x4==1 && x5==1)
    return -1;
  else {
    if(-1<=x2 && x2<=2)
      return -1/7;
    else 
      return 0.47;
  }
}
}
int dt3a(double age,double weight,double binary,double region,double month){

  if(age<25){  
      if(weight<80){
        if(region==1 || region==2 ||region==3){
          if(month==12 || month==9 || month==6 || month==3 || month==1)
            return 1;
          else 
            return 2;
        }
        else 
          return 3;
      }
      else 
        return 4;      
    }
    else {
      if(weight<60){
        if(region==5 || region==4 || region==7){
          if(month==2 || month== 4 || month== 7){
            if(binary==1)
              return 5;
            else 
              return 6;
          }
          else 
            return 7;
        }
        else {
          if(binary==0)
            return 8;
          else 
            return 9;
        }
}
else {
  if(month==5 || month== 8 || month==11)
    return 10;
  else 
    return 11;
}
}
}
int dt3b(double age,double weight,double binary,double region,double month){
  if(age<30){  
      if(weight<100){
        if(region==1 || region==4 ||region==3){
          if(month==12 || month==9 || month==8 || month==5 || month==1)
            return 1;
          else 
            return 2;
        }
        else 
          return 3;
      }
      else 
        return 4;      
    }
    else {
      if(weight<70){
        if(region==1 || region==6 || region==7){
          if(month==12 || month== 5 || month== 3){
            if(binary==1)
              return 5;
            else 
              return 6;
          }
          else 
            return 7;
        }
        else {
          if(binary==0)
            return 8;
          else 
            return 9;
        }
}
else {
  if(month==2 || month== 12 || month==7)
    return 10;
  else 
    return 11;
}
}
}
