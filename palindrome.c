#include<stdio.h>

bool is_palindrome (string *s, int string_size) {
    
    char beginning[1], ending [1];
    int j = string_size;
    for (int i = 0; i < string_size / 2; i++) {
        if (s[i] != s[j])
                return false;
        --j;
    }
    
    return true;
}

int main() {
    string test_1 = 'abba';
    
    printf("Is %s a palindrome? %b", &test_1, is_palindrome(test_1, 4);

    return 0;
}