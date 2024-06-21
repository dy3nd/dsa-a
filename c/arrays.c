#include <stdio.h>

int main() {
    // //ARRAY DECLARATION
    // // elements_type array_name[size];
    // int int_array[3];

    // //ARRAY INITIALIZATION
    // // elements_type array_name[] = {element1, element2, element3}
    // int indexes_array[] = {0, 1, 2};
    
    // //ARRAY INPUTS
    // // for each index, scan and store value.
    // for(int i = 0; i < 3 ; i++) {
    //     printf("Index [%d] receives: ", i);
    //     scanf("%d", &int_array[i]);
    // }

    // //ARRAY PRINTING
    // // for each index, print data.
    // for(int i = 0; i < 3; i++) {
    //     printf("%d \n", int_array[i]);
    // }

    //ARRAY CHALLENGE: FIND THE ONLY ELEMENT IN AN ARRAY THAT DOESN'T REPEAT ITSELF
    int challenge_array[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5,7,8,9};

    //ME SOLVING THE CHALLENGE
    for(int ii = 0; ii < 17; ii++) {
        int checking_num = challenge_array[ii]; 
        int num_aparisons = 0;

        for(int i = 0; i < 17; i++) {
            int current_num = challenge_array[i];

            if (current_num == checking_num) {
                num_aparisons++;
            }
        }
        if (num_aparisons == 1) {
            printf("Number %d only appears one time\n", checking_num);
        }

    } 

    //MATERIAL'S SOLUTION
    // using the xor operator ^ to check
    int res = 0;
    for(int i = 0; i < 17; i++) {
        res = res ^ challenge_array[i];
    }
    printf("%d", res);

}