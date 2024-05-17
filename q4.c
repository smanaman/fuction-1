#include<stdio.h>

void hello(){
int a,sum=0;
for(a=1 ;a<=10 ; a++){
  printf("%d\n",a);
 sum +=a;
}
  printf("sum of all number:=%d\n",sum);
}
int main(){

hello();

}