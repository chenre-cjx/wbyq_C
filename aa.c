#include <stdio.h>

void arrsize(int *p,int len);
void arrbainli(int *p,int len);
int arrfind(int *p,int num,int len);
int arrchange(int *p ,int num_a,int num_b,int len);
int arr_inster(int *p, int num ,int loca,int len);

int main()
{
    // int p[] = {12,13,14};
    int arr1[10] = {12,13,888,123,1235};
    int len;
    int location = -1;      //chushihua
    printf("%ld\n",sizeof(arr1));
    //binali
    arrbainli(arr1, sizeof(arr1)/sizeof(int));

    //find
    location = arrfind(arr1,888,sizeof(arr1)/sizeof(int));
    printf("%d\n",location);

    //change
    printf("change\n");
    arrchange(arr1,999,888,sizeof(arr1)/sizeof(int));
    arrbainli(arr1, sizeof(arr1)/sizeof(int));
    //insiter
    int num = 0;
    printf("please input a number:\n");
    scanf("%d",&num);
    printf("location:%d\n",arrfind(arr1,999,sizeof(arr1)/sizeof(int))+1);
    arr_inster(arr1,num,arrfind(arr1,999,sizeof(arr1)/sizeof(int))+1,sizeof(arr1)/sizeof(int));
    arrbainli(arr1, sizeof(arr1)/sizeof(int));
}

void arrbainli(int *p,int len)
{
    int i = 0;
    printf("arrrp:\n");
    while(i<len){
        printf("%d\n",p[i++]);
    }
    /*
    // printf("arrn:\n");
    // for(i = len-1;i>=0;i--)
    // {
    //     printf("%d\n",p[i]);
    // }
    // printf("sizeof(p):%ld\n",sizeof(p));
    */
}
int arrfind(int *p,int num,int len){
    int i = 0;
    for (i = 0; i<len; i++){
        if (num == p[i]){
            return i;
        }
    }
    return -1;
}

int arrchange(int *p ,int num_a,int num_b,int len)
{
    int i = 0;
    int location = -1;      

    location = arrfind(p,num_b,len);
    if(location == -1){
        return 0;
    }else{
        p[location] = num_a;
    }
    return 1;
}

int arr_inster(int *p, int num ,int where,int len)
{

    printf("faction location:%d\tlen:%d\n",where,len);
    int i = len - 1;
    for(i = 0;i<len;i++){
        printf("p[%d] = %d\n",i,p[i]);
    }
    for (i = len -1;i>where;i--)
    {
        p[i]=p[i-1];
        printf("p[%d] = %d\n",i,p[i]);
    }
    p[where] = num;
    // printf("faction:\n");
    
}