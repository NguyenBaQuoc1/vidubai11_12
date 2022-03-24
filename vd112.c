#include<stdio.h>

int main(int argc, char const *argv[])
{
    int ary[10];
    int i , total , hight ;

    for(i=0 ; i<10 ; i++){
        printf("\nNhap gia tri %d :" , i+1);
        scanf("%d" , &ary[i]);
    }

    hight = ary[0];
    for(i=0 ; i<10 ; i++){
        if(ary[i] > hight){
            hight=ary[i];
        }
    }printf("So lon nhat la %d" , ary[i]);

    for(i=0,total=0;i<10;i++){
        total= total + ary[i];
    }printf("Gia tri trung binh la %d" , total/i);
        
    return 0;
}
