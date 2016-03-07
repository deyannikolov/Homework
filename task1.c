#include <stdio.h>

int function(int []);

int main(){

    int counter_arr = 0;
    int arr[5];
    for(;counter_arr < 5; counter_arr++){
        scanf("%d", &arr[counter_arr]);
    }
    function(arr);

return 0;
}

int function(int arr[5]){

    int counter = 0;
    for(;counter < 5; counter++){
        printf("%p -> %d\n", &arr[counter], arr[counter]);
    }

return 0;
}
