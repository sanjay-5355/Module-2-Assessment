
#include <stdio.h>
#include <string.h>

// Function to reverse a string

void reverseString(char str[])
 {
    int len = strlen(str);

    printf("Reversed string: ");
    
    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }

    printf("\n");
}

// Function to concatenate strings

void concatenateStrings(char str[])
{
    char str2[100];
    printf("Enter another string to concatenate: ");
    scanf("%s",str2);
    strcat(str, str2);
    printf("Concatenated string: %s\n", str);
}

// Function to check palindrome

void checkPalindrome(char str[])
 {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            printf("The string is not a palindrome.\n");
            return;
        }
    }
        printf("The string is a palindrome.\n");
        
}


// Function to copy a string

void copyString(char str[])
{
    char copy[100];
    strcpy(copy, str);
    printf("Copied string: %s\n", copy);
}

// Function to calculate length of the string

void stringLength(char str[]) 
{   
    int length;
    length=strlen(str);
    printf("Length of the string: %d\n", length);
}

// Function to find frequency of a character

void charFrequency(char str[]) 
{
    char ch;
    int count = 0;
    printf("Enter character to find frequency: ");
    scanf(" %c", &ch);

    for (int i = 0; str[i]; i++) 
    {
        if (str[i] == ch)
            count++;
    }
    printf("Frequency of '%c': %d\n", ch, count);
}

// Function to count vowels and consonants
void countVowelsConsonants(char str[])
{
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i]; i++) 
    {
        char c = str[i];
        {
            if (c == 'a' ||c == 'A' ||c == 'E' || c == 'e' || c == 'I' ||c == 'i' || c == 'O' ||c == 'o' || c == 'U' ||c == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
}

// Function to count spaces and digits

void countSpacesDigits(char str[])
 {
    int spaces = 0, digits = 0;
    
    for (int i = 0; str[i]; i++) 
    {
        if (str[i]>0 && str[i]<<9)
        digits++;
        if (str[i] == ' ') 
        spaces++;
    }

    printf("Spaces: %d, Digits: %d\n", spaces, digits);
}

int main() 
{
    char str[200];
    int choice;
    char cont;

    printf("Enter a string: ");
    scanf("%s",str);

    do 
    {
        printf("\n---- String Operation Menu ----\n");
        printf("1. Reverse String\n");
        printf("2. Concatenation\n");
        printf("3. Palindrome Check\n");
        printf("4. Copy String\n");
        printf("5. Length of String\n");
        printf("6. Frequency of Character\n");
        printf("7. Count Vowels and Consonants\n");
        printf("8. Count Spaces and Digits\n");
        printf("Enter your choice (1-8): ");

        scanf("%d", &choice);
        

        switch (choice)
         {
            case 1:
            reverseString(str); 
            break;
            case 2: 
            concatenateStrings(str); 
            break;
            case 3: 
            checkPalindrome(str);
            break;
            case 4: 
            copyString(str); 
            break;
            case 5: 
            stringLength(str); 
            break;
            case 6: 
            charFrequency(str); 
            break;
            case 7: 
            countVowelsConsonants(str); 
            break;
            case 8: 
            countSpacesDigits(str); 
            break;
            default:
            printf("Invalid choice. Please select from 1 to 8.\n");
        }

        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &cont);
        
    } while (cont == 'y' || cont == 'Y');

    printf("Thank you! Program exited.\n");
    return 0;
}
