#include<stdio.h>

void hello(){
int sum=0;

for(int x=1; x<=5;x++){
sum +=x;
    printf("%d\n",x);
}
     printf("the sum, which is :=%d\n",sum);
}
int main(){

hello();

}