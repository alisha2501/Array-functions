//to delete an element in an array//
#include<stdio.h>
int delelement(int arr[], int num, int len);
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90}, num;
    printf("Enter a number you want to delete : ");
    scanf("%d", &num);
    int len=sizeof(arr)/sizeof(arr[0]);
    delelement(arr, num, len);
    return 0;
}
int delelement(int arr[], int num, int len){

    int i, cnt=0;
    for ( i=0;i<len;i++)
    {
        if(arr[i]==num){
            int j=i;
            for(j;j<len-1;j++){
                arr[j]=arr[j+1];
            }
            arr[len]=0;
            //Printing
            printf("Element Deleted, Here's your updated array :" );
            for(i=0;i<len-1;i++){
                printf(" %d ", arr[i]);
            }
            cnt=0;
        }
        else{
            cnt++;
        }

    }
    if (cnt>0){
        printf("Element Not Found \n");
    }
}
