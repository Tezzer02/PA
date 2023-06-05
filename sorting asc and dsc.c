#include<stdio.h>
#include<P18F4550.h>

 void main(void)
 {
 int i,j,key,temp;
 int arr[]={4,1,3,55,20};
 TRISD=0;
for(i=1;i<5;i++) //counter
{
 for(j=0;j<5-i;j++) // indexing
{
 if(arr[j]>arr[j+1])
{
 temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
}
}
}
for(i=0;i<5;i++){
 PORTD=arr[i];
}
}