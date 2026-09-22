/*
Q: To write or identify letters written in upeercase and lowercase input given by user
and print what letter is uppercsse & lowercase & convert all to uppercase
leave in vis-a-vis situation
*/

# include <stdio.h>

char hllo[500];
int upper=0,lower=0;
int main()
{
    printf("Enter your paragraph ");
    fgets(hllo,sizeof(hllo),stdin);
    printf("UPPERCASE LETTERS AND LOWERCASE LETTERS ARE AS FOLLOWS\n");
    for(int i=0 ; hllo[i] != '\0' ; i++)
    {
        if(hllo[i] >= 'A' && hllo[i] <= 'Z')
        {
        
            upper++;
        }
        else if(hllo[i] >= 'a' && hllo[i] <= 'z')
        {
             
            lower++;
            hllo[i] -= 32;
        }
    }
    printf("\n\nTotal lower case is %d and upper case is %d",lower,upper);
    printf("\n\nyour paragraph in uppercase is as follows -:\n");
    printf("%s",hllo);
    return 0;
}
