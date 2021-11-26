#include <stdio.h>
#include "my_mat.h"

int mat[10][10];

int create_mat(){
    int *p = &mat[0][0];
    for(int i=0; i<100; i++){
        scanf("%d", p+i);
    }
    return 1;
}

int shortest_path_mat(int temp[][10]){
    for(int k=0; k<10; k++){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if((temp[i][k] == 0 && i != k) || (temp[k][j] == 0 && k != j)){
                    //in case the path between i and k or between k and j does not exist 
                    temp[i][j] = temp[i][j];
                }
                else if(temp[i][j] == 0){
                    temp[i][j] = temp[i][k]+temp[k][j];             
                }
                else{
                    //insert the minimum
                    temp[i][j] =((temp[i][j] < (temp[i][k]+temp[k][j])) ? temp[i][j] : (temp[i][k]+temp[k][j])); 
                }
            }
        }
    }
    return 1;
}

//make a mat containing the shortest paths between every two vertices
int shortest_path(int i, int j){
    if(i == j){
        return -1;
    }
    int temp [10][10];
    //deep copy mat to temp
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            temp[i][j] = mat[i][j];
        }
    }
    shortest_path_mat(temp);
    int shortest = temp[i][j]; //temp[i][j] contains the shortest path between i and j
    if(shortest == 0){ //if there is no path
        return -1;
    }
    return shortest;
}

int is_path(int i, int j){
    int x = shortest_path(i,j);
    return x;
}

