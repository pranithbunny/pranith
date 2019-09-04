#include <stdlib.h>
#include <stdio.h>
#include "sortMalloc.h"

static void sort_swap(int*,int*);

void sort_ascending(int** arr, int rows, int cols){
    int i, j, k, l;

    for(i=0; i<rows; i++){
            for (j=0;j<cols; j++){
              for(k=0;k<rows;k++){
                for(l=0;l<cols;l++){
                  if((*(*(arr+i)+j))<(*(*(arr+k)+l))){
                    //t=arr[i][j];
                    //arr[i][j]=arr[k][l];
                    //arr[k][l]=t;
                    sort_swap((*(arr+i)+j), (*(arr+k)+l));
                }
                }
            }
            }
        }
}

void sort_descending(int** arr, int rows, int cols){
    int i, j, k, l;

    for(i=0; i<rows; i++){
            for (j=0;j<cols; j++){
              for(k=0;k<rows;k++){
                for(l=0;l<cols;l++){
                  if((*(*(arr+i)+j))>(*(*(arr+k)+l))){
                    //t=arr[i][j];
                    //arr[i][j]=arr[k][l];
                    //arr[k][l]=t;
                    sort_swap((*(arr+i)+j), (*(arr+k)+l));
                }
                }
            }
            }
        }
}

void sort_clear(int** arr, int rows, int cols){
    int i,j;
    for(i=0; i<rows; i=i+1){
        for(j=0;j<cols;j=j+1){
            (*(*(arr+i)+j))=0;
        }
        printf("\n");
    }
}

void sort_initialize(int** arr, int rows, int cols){
      //int arr[5][5]={{3,1,2,6,4},{6,7,8,3,2},{7,9,0,6,7},{3,4,1,2,0},{8,3,5,1,9}};
      int i,j;
      for(i=0;i<rows;i=i+1){
        for(j=0;j<cols;j=j+1){
            scanf("%d",(*(arr+i)+j));
        }
        //printf("\n");
    }

}


static void sort_swap(int* int1, int* int2){
    int temp;
    temp=*int1;
    *int1=*int2;
    *int2=temp;
}

