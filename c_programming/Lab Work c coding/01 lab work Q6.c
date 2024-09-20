#include<stdio.h>


main() {
	
    int h, d;

    for (h = 1; h <= 5; h++) {    
        for (d = 1; d <= h; d++) {
            printf("%d", d);  
        }
      
		for(d=h; d<5; d++){
			printf("  ");
		}
		for(d=h; d>=1; d--){	
		printf("%d",d);
	}

        printf("\n");  
    }

}
