#include<stdio.h>
int n_term_of_fib(int n){
if(n==1||n==2){
    return 1;
}
return n_term_of_fib(n-1)+n_term_of_fib(n-2);


}
int main(){
int n;
scanf("%d",&n);
int a=n_term_of_fib(n);
printf(" %dth term of fibonacci is %d",n,a);
return 0;
}