#include <stdio.h>  
#include <conio.h> 
#include <limits.h> 
int main()  
{  
    
    int n;
    scanf("%d",&n);
    int arr[n];
    
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++){
         if(arr[i]%2==0)
         printf("%d ",(i+1));
     }
    

    return 0;
}  
