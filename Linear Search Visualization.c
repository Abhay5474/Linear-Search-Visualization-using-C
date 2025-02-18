#include<stdio.h> 
void main() 
{ 
int a[10],i,key,n,flag=0,next; 

printf("\nEnter size of array:"); 
scanf("%d",&n); 
printf("\nEnter the array elements: ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\n Array elements are: ");
    for(i=0;i<n;i++)
    {
    printf("\n _____\n");
    printf("|  %d |\n",a[i]);
    printf("|_____|");
    } 
     printf("\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab1;
    lab1:
printf("\nEnter key element to be search:"); 
scanf("%d",&key); 
printf("\n Now we have to search the element %d",key);
    printf("\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab3;
    lab3:
     printf("\n _____\n");
    printf("|  %d |<---\n",a[0]);
    printf("|_____|    |\n");
    printf("           |\n");
    printf(" _____     |\n");
    printf("|  %d |<---\n",key);
    printf("|_____|");
    printf("\n\nNow we will check if the key element and array element is same of not");
    printf("\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab4;
    lab4:
    if(a[0]==key)
    {
        printf("Element Found!!!");
        flag=1;
        printf("\n ------------");
        printf("\n|  %d = %d  |",a[0],key);
        printf("\n|           |");
        printf("\n ------------");
        goto success;
    }
    else{
         printf("Element Not Found!!!");
        
        printf("\n ------------");
        printf("\n|  %d != %d |",a[0],key);
        printf("\n|           |");
        printf("\n ------------");
        goto next1;
    }
    next1:
    printf("\n\nWe will move further....");
    printf("\n\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab5;
    lab5:
    if(a[1]==key)
    {
        printf("Element Found!!!");
        flag=1;
        printf("\n ------------");
        printf("\n|  %d = %d  |",a[1],key);
        printf("\n|           |");
        printf("\n ------------");
        goto success;
    }
    else{
         printf("Element Not Found!!!");
        
        printf("\n ------------");
        printf("\n|  %d != %d |",a[1],key);
        printf("\n|           |");
        printf("\n ------------");
        goto next2;
    }

     next2:
    printf("\n\nWe will move further....");
    printf("\n\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab6;
    lab6:
    if(a[2]==key)
    {
        printf("Element Found!!!");
        flag=1;
        printf("\n ------------");
        printf("\n|  %d = %d  |",a[2],key);
        printf("\n|           |");
        printf("\n ------------");
        goto success;
    }
    else{
         printf("Element Not Found!!!");
        
        printf("\n ------------");
        printf("\n|  %d != %d |",a[2],key);
        printf("\n|           |");
        printf("\n ------------");
        goto next3;
    }
  
   next3:
   printf("\n\nWe will move further....");
    printf("\n\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab7;
    lab7:
    if(a[3]==key)
    {
        printf("Element Found!!!");
        flag=1;
        printf("\n ------------");
        printf("\n|  %d = %d  |",a[3],key);
        printf("\n|           |");
        printf("\n ------------");
        goto success;
    }
    else{
         printf("Element Not Found!!!");
        
        printf("\n ------------");
        printf("\n|  %d != %d |",a[3],key);
        printf("\n|           |");
        printf("\n ------------");
       goto next4;
    }

     next4:
    printf("\n\nWe will move further....");
    printf("\n\n Press 1 for next");
    scanf("%d",&next);
    if(next==1)
    goto lab8;
    lab8:
    if(a[4]==key)
    {
        printf("Element Found!!!");
        flag=1;
        printf("\n ------------");
        printf("\n|  %d = %d  |",a[4],key);
        printf("\n|           |");
        printf("\n ------------");
        goto success;
    }
    else{
         printf("Element Not Found!!!");
        
        printf("\n ------------");
        printf("\n|  %d != %d |",a[4],key);
        printf("\n|           |");
        printf("\n ------------");
    }

    success:
    printf("Your key element found successfully...");
}