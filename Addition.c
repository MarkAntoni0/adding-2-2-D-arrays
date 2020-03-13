//
//  main.c
//  Adding 2 arrays
//
//  Created by Mark Antonio on 3/13/20.
//  Copyright © 2020 Mark Antonio. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
  
    printf("this application prints the sum of two array\n");
    //receiving the array sizes
    int rows,cols;
    printf("insert the 2D of the array: ");
    scanf("%d %d", &rows, &cols);
    //receing the elements of the array
    int arr_1[rows][cols], arr_2[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            printf("Insert the element [%d][%d] in the first array: ", i+1, j+1);
            scanf("%d", &arr_1[i][j]);
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            printf("Insert the element [%d][%d] in the second array: ", i+1, j+1);
            scanf("%d", &arr_2[i][j]);
        }
    }
    //doind the sum process
    int sum[rows][cols];
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            sum[i][j] = arr_1[i][j]+arr_2[i][j];
        }
    }
    //printing the result
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
