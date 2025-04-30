// Soal no 1 
#include <stdio.h>

int untukPembagian(int x, int i) {
    if (x <= 1) return 0;
    if (i * i > x) return 1;
    if (x % i == 0) return 0;
    // Rekursi: memeriksa pembagi berikutnya
    return untukPembagian(x, i + 1);
}


int frPrime(int x) {
    return untukPembagian(x, 2);
}

int main() {
    int Y, x;
    
    scanf("%d", &Y);
    
    for (int i = 1; i <= Y; i++) {
       
        scanf("%d", &x);
        
        
        int result = frPrime(x);
        
        
        if (result) {
            printf("Case #%d: Prime Number\n", i);
        } else {
            printf("Case #%d: Not Prime Number\n", i);
        }
    }
    
    return 0;
}

