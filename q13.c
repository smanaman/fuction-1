#include<stdio.h>

void hello(){
int sum=1;

for(int x=1; x<=10;x++){
sum=x*x;
    printf(" the squares of numbers %d*%d:= %d\n",x,x,sum);
}

}
int main(){

hello();

}