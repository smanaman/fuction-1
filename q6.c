#include<stdio.h>

void hello(){
int first_number=0;
int second_number=1;
int next;


printf("%d\n%d\n",first_number,second_number);
for(int x=1; x<10;x++){
next=first_number+second_number;
first_number=second_number;
second_number=next;
printf("%d\n",next);

}

 
  
}
int main(){

hello();

}