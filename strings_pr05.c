// write a program to decrypt problem no. 4.
#include<stdio.h>
void decrypt(char *c){
    char *ptr = c;
    while(*ptr != '\0'){
            *ptr = *ptr-1;
            ptr++;
    }
}
int main() {
    char c[] = "Btijti";
    decrypt(c);
    printf("Decrypted string is : %s", c);
    return 0;
}