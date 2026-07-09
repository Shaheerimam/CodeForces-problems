#include <stdio.h>
int main()
{
    char str[250];
    // char vowels[10] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    gets(str);
    char str2[250];
    int i = 0;
    int k = 0;
    while (str[i] != '\0')
    {
 
        if (str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'I' && str[i] != 'o' && str[i] != 'O' && str[i] != 'u' && str[i] != 'U' && str[i] != 'Y' && str[i] != 'y')
        {
            // printf("%d %d
",str[i],vowels[j]);
            str2[k] = '.';
            k++;
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str2[k] = str[i] + 32;
                k++;
            }
            else
            {
                str2[k] = str[i];
                k++;
            }
 
            // break;
        }
 
        i++;
    }
    str2[k] = '\0';
    puts(str2);
 
    return 0;
}