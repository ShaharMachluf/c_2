#include <stdio.h>
#include "my_mat.h"

int main(){
    while(1){
        char c = ' ';
        int i = 0, j = 0;
        scanf("%c", &c);
        if(c == 'A'){
            create_mat();
        }
        else if(c == 'B'){
            scanf("%d %d", &i, &j);
            int x = is_path(i, j);
            if(x == -1){
                printf("False\n");
            } else{
                printf("True\n");
            }
        }
        else if(c == 'C'){
            scanf("%d %d", &i, &j);
            int x = shortest_path(i, j);
            printf("%d\n", x);
        }
        else if(c == 'D'){
            return 0;
        }
    }
}
