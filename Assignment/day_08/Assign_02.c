/* Program to find nth number made of given four digits 1, 4,6 and 9 as the only digits..

Input Format:

The First Line Of Input Contains T no of test cases
The Second Line Of Input Contains N as input taken.

Output Format:
Print the number of digits in the nth number .

Constraints:

1<=T<=100
1<=N<=100

Examples:

Input : 6
Output : 14

1,4 6, 9,11,14

Input : 21
Output : 111 */

#include <stdio.h>

int countDigits(int n){
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count ++;
    }
    return count ++;
}

int main()
{
    int N;  
    scanf("%d",&N);
    int num = 0;
    int count = 0;

    while (count < N)
    {
        num++;
        int temp = num;
        while (temp!=0)
        {
            int digit = temp % 10;
            if(digit != 1 && digit != 4 && digit !=6 && digit !=9){
                break;
            }
            temp/=10;
        }
        if(temp == 0){
        count ++;
        }
        
    }
    printf("%d\n",countDigits(num));

return 0;

}