#include <stdio.h>

void arrPrintf2(int arr[][6], int line, int row);
void sortPao(int arr[][6],int line,int row);
int main()
{
    int arr[2][6] ={12,6234,84,7,34,5,5568,42,34,38,3,6} ;
    int len=0,line = 0, row = 0;
    int i=0, j=0;
    len = sizeof(arr);
    printf("sizeof:%d\n",len);
    line = sizeof(arr)/sizeof(arr[0]);
    row = sizeof(arr[0])/sizeof(arr[0][0]);
    printf("sizeof arr[0]:%d\n",len);
    
    printf("遍历6个整数:\n"); 
    arrPrintf2(arr,line,row);

    sortPao(arr,2,6);
    arrPrintf2(arr,2,6);
    
    return 0;
}

void arrPrintf2(int arr[][6], int line, int row)
{   
    int i,j;
     for(i = 0;i<line;i++){
        for (j = 0; j < row; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void sortPao(int arr[][6],int line,int row)
{
    int i=0,j=0,k=0;
    int temp;
    int flag = 0;

    for (i = 0; i < line;i++){
        for(k = 0;k < row-1; k++){
            flag = 0;
            for(j = 0; j < row-1-k;j++){
                if (arr[i][j]>arr[i][j+1]){
                    flag = 1;
                    temp = arr[i][j];
                    arr[i][j] = arr[i][j+1];
                    arr[i][j+1] = temp;
                }
            }
        }
        if (flag == 0)  
            break;
    }
}