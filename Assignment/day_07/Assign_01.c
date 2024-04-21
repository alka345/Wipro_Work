

#include <stdio.h>
#define size n

int main(){
int n = 5;
// scanf("%d",&n);
int * ptr;
int arr[6] ;
for (int l = 0; l < 5; l++)
{
    scanf("%d",&arr[l]);
}

int i,j,k;

for (i = 0; i < n; i++)
{
    for ( j = 0; j < n; j++)
    {
if(*(ptr + j) <  *(ptr + i)){
    k = *(ptr + i);
    *(ptr + i) = *(ptr + j);
    *(ptr + j) = k;
}
    }
    
}



}