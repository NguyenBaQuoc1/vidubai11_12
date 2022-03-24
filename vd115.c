#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[2][3];
    int row , col ;
    for(row=0 ; row <2 ; row++){
        for(col=0 ; col <3 ; col++){
            printf("\nNhap gia tri cho arr[%d][%d] : " , row , col);
            scanf("%d" , &arr[row][col]);
        }     
    }
    for(row=0 ; row <2 ; row++){
        for(col=0 ; col <3 ; col++){
            printf("\nBan da nhap gia tri arr[%d][%d] la %d" , row , col , arr[row][col]);
        }
    }
    return 0;
}
