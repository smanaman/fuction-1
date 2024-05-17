#include<stdio.h>

void hello(){
int a;
for(a=1 ;a<=20 ; a++){
   if(a%2==0){
    printf("%d\n",a);
   }
}
}
int main(){

hello();

}