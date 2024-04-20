#include <stdio.h>

int sum(int n);
int main(){
    int num, i;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    int flag = 0;
    for ( i = 2; i <= num/2; ++i)
    {
        if(sum(num - i)== 1){
            printf(" %d = %d + %d \n",num, i, num - i);
            flag = flag + 1;
        }

    }
    printf("NoofWays= %d",flag);    

if (flag == 0)
{
    printf("NoofWays=-1");
    

}
    return 0;
}

int sum (int n){
    int i , isPrime = 1;
    for ( i = 2; i <= n/2 ; ++i)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
        
    }
    return isPrime;
    
}