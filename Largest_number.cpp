// Question = finding the 1st,2nd,3rd......so on largest numbers in an given input array
// Ending the array with 00 , need not to separately declare the size



#include <stdio.h>

int emad=0, val , xyz,i,ofo,y;
int arr[1000];
int a,z,number;

int main() {
    
    
    printf("enter the numbers : (after you have done entering please enter 00 to quit the array)\n");
    //scanf("%d",&val);
    
    
    
    for (i=0;i<100;i++)
    {
        if (emad==0)
        {
        scanf("%d",&arr[i]);
        xyz = arr[i];
       // printf("%d",xyz);
       // printf("\n");
        
    
        if (xyz==00)
        {
            printf("hogaye ittaich thai?? \n");
            emad=1;
             ofo = i;
         printf("total elements you have entered is:%d\n",ofo);
        }
        }
    }
    
    for (z=0;z<ofo-1;z++)
    
    {
        
    for (y=0;y<ofo-1;y++)
    {
        
        if (arr[y]<arr[y+1])
        {
            a=arr[y];
            arr[y]=arr[y+1];
            arr[y+1]=a;
        
        
        }
    }
    } 
    printf("specify which largest number you want to find:\n");
    
    for (i=1;i<=ofo;i++)
    {
        printf("%d's? , ",i);
    }
    printf("\n");
    scanf("%d",&number);
    
    printf("\nThe %d largest number is:\n %d",number,arr[number-1]);
    
       
    }