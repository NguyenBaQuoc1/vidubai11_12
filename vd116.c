#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int i, n = 0;
    int item;
    char x[10][12];
    char temp[12];
    printf("Nhap chuoi cho cac gia tri  \n");
    printf("Nhap END khi muon ket thuc \n");

    do {
        printf("String %d : " , n+1);
        scanf("%s" , &x[n]);
    }while(strcmp(x[n++], "END")); // n = 5

    /*sắp xếp lại các chuỗi trong danh sách*/
    n = n-1  ; // n = 4 
    for(item=0; item<n-1; ++item){ // item = 0 ; item < 3 ( tức 4 - 1) , item = 1 ( tức ++item)
        for(i=item+1; i<n; ++i){ // i =2 ; và i < n ( tức 2 < 4) ; 3
            if(strcmp (x[item], x[i]) > 0){
                strcpy (temp , x[item]); // temp = x[0] => tức temp = seen
                strcpy (x[item] , x[i]); // x[0] = x[2] => sẽ gán x[1] = alice
                strcpy (x[i] , temp); // x[2] = temp 
            }
        }
    }
    //Hiển thị danh sách các chuỗi sau khi đã sắp xếp
    printf("Recorded list of strings");
    for(i=0 ; i < n ; ++i){
        printf("\nChuoi %d la %s" , i+1 , x[i]);
    }
    return 0;
}
