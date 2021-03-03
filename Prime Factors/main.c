//
//  main.c
//  Prime Factors
//
//  Created by yogendra singh on 3/3/21.
//  Copyright © 2021 yadavboy. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int n;
    printf("Enter a a number to generate Prime Factors \n");
    scanf(" %d",&n);
    
    for (int i=2; n>1; i++) {
        
    //flag = 1;
        while (n%i==0) {
            
       printf(" %d ",i);
            n=n/i;
        }
    }
   
    
    
    return 0;
}
