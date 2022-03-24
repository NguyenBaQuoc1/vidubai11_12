#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ary[5];
    int i ;

    printf("\n Nhap chuoi :");
    scanf("%s" , &ary);
    printf("\n Chuoi ban nhap la : %s\n" , ary);

    for(i=0 ; i <5 ; i++ ){
        printf("\t%d" , ary[i]);
    }
    return 0;
}
