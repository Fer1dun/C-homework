#ifndef _UTIL_H_
#define _UTIL_H_

#define CLOSE_ENOUGH 0.001

/* Example decision tree - see the HW2 description */


char dt1a(double length,double width);
char dt1b(double length,double width);

double dt2a(double x31,double x2,double x3,double x4,double x5);
double dt2b(double x1,double x2,double x3,double x4,double x5);

/* Write the prototype of the functions implementing the decision trees for the third problem */
int dt3a(double age,double weight,double binary,double region ,double month);
int dt3b(double age,double weight,double binary,double region,double month);

#endif /* _UTIL_H_ */
