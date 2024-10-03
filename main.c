#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Test function for ft_strjoin
/*
void test_ft_strjoin() {
    char *result = ft_strjoin("Hello, ", "World!");
    printf("ft_strjoin: %s\n", result);
}
*/

// Test function for ft_split
/*
void test_ft_split() {
    char **result = ft_split("Hello World 42", ' ');
    printf("ft_split:\n");
    for (int i = 0; result[i]; i++) {
        printf("[%d]: %s\n", i, result[i]);
    }
}
*/

void test_ft_strdup() {
    char *original = "Hello, World!";
    char *duplicate = ft_strdup(original);
    
    printf("ft_strdup:\n");
    printf("Original: %s\n", original);
    printf("Duplicate: %s\n", duplicate);
    
    // Asegúrate de liberar la memoria si ft_strdup asigna memoria dinámicamente
    free(duplicate);
}

void test_ft_calloc() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);
    
    int *arr = (int *)ft_calloc(num_elements, element_size);
    
    printf("ft_calloc:\n");
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu]: %d\n", i, arr[i]);  // Debería imprimir 0 para todos los elementos
    }
    
    // Asegúrate de liberar la memoria
    free(arr);
}

// Test function for ft_atoi
void test_ft_atoi() {
    printf("ft_atoi: %d\n", ft_atoi("1234"));
}

// Test function for ft_strlcat
void test_ft_strlcat() {
    char dest[20] = "Hello";
    printf("ft_strlcat: %zu\n", ft_strlcat(dest, " World", 20));
}

// Test function for ft_strlen
void test_ft_strlen() {
    printf("ft_strlen: %zu\n", ft_strlen("Hello, World!"));
}

// Test function for ft_strncmp
void test_ft_strncmp() {
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 2));
}

// Test function for character checks
void test_ft_isalpha() { printf("ft_isalpha: %d\n", ft_isalpha('A')); }
void test_ft_isdigit() { printf("ft_isdigit: %d\n", ft_isdigit('5')); }
void test_ft_isalnum() { printf("ft_isalnum: %d\n", ft_isalnum('A')); }
void test_ft_isascii() { printf("ft_isascii: %d\n", ft_isascii(127)); }
void test_ft_isprint() { printf("ft_isprint: %d\n", ft_isprint(32)); }

// Test function for memory functions
void test_ft_memset() {
    char str[] = "Hello, World!";
    ft_memset(str, '*', 5);
    printf("ft_memset: %s\n", str);
}

void test_ft_bzero() {
    char str[] = "Hello, World!";
    ft_bzero(str, 5);
    printf("ft_bzero: ");
    for (int i = 0; i < 13; i++) {
        if (str[i] == '\0')
            printf("\\0");
        else
            printf("%c", str[i]);
    }
    printf("\n");
}
void test_ft_memcmp() {
    char s1[] = "Hello";
    char s2[] = "Hellz";  // Diferencia en el último carácter
    printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, 5));  // Resultado esperado: valor distinto de 0
}


void test_ft_memcpy() {
    char dest[20];
    char src[] = "Hello";
    ft_memcpy(dest, src, 6);
    printf("ft_memcpy: %s\n", dest);
}

void test_ft_memmove() {
    char dest[20] = "123456789";
    ft_memmove(dest+2, dest, 5);  // Debería mover "12345" dos posiciones
    printf("ft_memmove: %s\n", dest);  // Resultado esperado: "121234567"
}


void test_ft_memchr() {
    char str[] = "Hello, World!";
    printf("ft_memchr: %s\n", (char*)ft_memchr(str, 'W', strlen(str)));
}

// Test functions for string search functions
void test_ft_strnstr() {
    char haystack[] = "Hello, World!";
    char needle[] = "World";
    printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, strlen(haystack)));
}

void test_ft_strchr() {
    char str[] = "Hello, World!";
    printf("ft_strchr: %s\n", ft_strchr(str, 'W'));  // Debería imprimir "World!"
}

void test_ft_strrchr() {
    char str[] = "Hello, World!";
    printf("ft_strrchr: %s\n", ft_strrchr(str, 'o'));  // Debería imprimir "orld!"
}


// Test conversion functions
void test_ft_toupper() {
    printf("ft_toupper: %c\n", ft_toupper('a'));
}

void test_ft_tolower() {
    printf("ft_tolower: %c\n", ft_tolower('A'));
}

int main() {
    // Llamar a cada función de prueba
    // test_ft_strjoin();
    // test_ft_split();
    test_ft_atoi();
    test_ft_strlcat();
    test_ft_strlen();
    test_ft_strncmp();
    
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memchr();
    test_ft_strdup();
    test_ft_calloc();
    
    test_ft_strnstr();
    test_ft_strchr();
    test_ft_strrchr();
    
    test_ft_toupper();
    test_ft_tolower();
    

    
    return 0;
}

