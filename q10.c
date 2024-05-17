#include<stdio.h>
#include<string.h>

void hello(){
char aman[]="hello";

int lenth= strlen(aman);
for(int i= lenth-1; i>=0; i--){
    printf("%c",aman[i]);
}


 
}
int main(){

hello();

}