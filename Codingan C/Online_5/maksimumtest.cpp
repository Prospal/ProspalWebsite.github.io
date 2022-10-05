#include <stdlib.h>
#include <stdio.h>

int main() {
        
        int tc; 
        
        scanf("%d", &tc);
        
        int count = 1; 
        
        while(tc--){
        
        long int largest = -1000001, large = -1000001, N;
        
        scanf("%ld", &N);
        
        long int A[N]; 
        
        for(long int i = 0; i<N; i++)
        {
                scanf("%ld", &A[i]); 
        }
        for(long int i = 0; i<N; i++) 
        {
                if(A[i] > largest) 
                {
                        if(largest > large)  
                                large = largest;
                                
                        largest = A[i];
                }
                else
                if(A[i] > large)
                {
                        large = A[i];
                }
        }
        
        printf ("Case #%d: %ld\n", count, (largest + large));
        
        count++;
        }
        return 0;
}

