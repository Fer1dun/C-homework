#include <stdio.h>
#include <stdlib.h>
#define STACK_BLOCK_SIZE 10
struct Stack{
int maxsize;
int currentsize;
int *array;
};
// function to create a stack of given maxsize.
struct Stack* createStack(int maxsize){
    struct Stack* stack =(struct Stack*) malloc(sizeof(struct Stack));
    if(maxsize<=STACK_BLOCK_SIZE)
    stack -> maxsize = STACK_BLOCK_SIZE;
    else
    stack -> maxsize = maxsize;
    stack -> currentsize =0;
    stack -> array =(int*) malloc(sizeof(int)*stack -> maxsize);
    return stack;
}
// Function to add an item to stack. It increases
// currentsize by 1
int  push(struct Stack *stack, int item){
    if ((stack->currentsize == stack->maxsize))
        return 0;
    if(stack->currentsize!=0)
    stack->array=(int*)realloc(stack->array,(stack->currentsize+2)*sizeof(int));
    stack -> array[++stack -> currentsize] = item;
}
// Function to remove an item from stack. It
// decreases currentsize by 1
int pop(struct Stack* stack){
    if ((stack->currentsize == 0))
        return -1;
    stack->array=(int*)realloc(stack->array,(stack->currentsize+2)*sizeof(int));
    return stack -> array[stack -> currentsize--];
}
// Function to implement legal movement between
// two poles
void movedisk(struct Stack *n1,struct Stack *n3, int s, int d){
    int disk1 = pop(n1);
    int disk2 = pop(n3);
    // When pole 1 is empty
    if (disk1 == -1){
        push(n1, disk2);
       printf("Move the disk %d from \'%d\' to \'%d\'\n",disk2,d,s);}
    // When pole2 pole is empty
    else if (disk2 == -1){
        push(n3, disk1);
       printf("Move the disk %d from \'%d\' to \'%d\'\n",disk1,s,d);
    }
    // When currentsize disk of pole1 > currentsize disk of pole2
    else if (disk1 > disk2){
        push(n1, disk1);
        push(n1, disk2);
        printf("Move the disk %d from \'%d\' to \'%d\'\n",disk2,d,s);
    }
    // When currentsize disk of pole1 < currentsize disk of pole2
    else{
        push(n3, disk2);
        push(n3, disk1);
        printf("Move the disk %d from \'%d\' to \'%d\'\n",disk1,s,d);
    }
}
//Function to implement TOH puzzle
int main(){
    // Input: number of disks
    int disk,i=1;
    printf("ENTER THE DİSK NUMBER:");
    scanf("%d",&disk);
    struct Stack *n1, *n3, *n2;
    int s=1,d=3,a=2; 
    // Create three stacks of size 'disk'
    // to hold the disks
    n1 = createStack(disk);
    n2 = createStack(disk);
    n3 = createStack(disk);
    for (i = disk; i >= 1; i--)
        push(n1, i);
      i=1;
      if(disk%2==1)
  while(n3->currentsize!=disk){
        if (i % 3 == 1)
        movedisk(n1,n3,1,3); 
        else if (i % 3 == 2)
        movedisk(n1,n2,1,2);
        else if (i % 3 == 0)
        movedisk(n2,n3,2,3);
    i++;
    }
    else
     while(n3->currentsize!=disk){
        if (i % 3 == 1)
        movedisk(n1,n2,1,2); 
        else if (i % 3 == 2)
        movedisk(n1,n3,1,3);
        else if (i % 3 == 0)
        movedisk(n2,n3,2,3);
    i++;
    }
    return 0;
}   