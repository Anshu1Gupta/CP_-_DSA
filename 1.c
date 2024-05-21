#include <stdio.h>
int fact=1;
int a;
void main1(){
if(a>1){
    fact=fact*a;
    a--;
    main1();
}
}
int main(){
    printf("Enter the number ");
    scanf("%d",&a);
    printf("the factorial of %d is \n",a);
    main1();
    printf("%d \n",fact);
    return 0;
    }