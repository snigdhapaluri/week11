#include <stdio.h>
#include <string.h>
void bitStuff(char *in, char *stuffed)
{
    int count = 0; 
    int j = 0;    
    for (int i = 0; i < strlen(in); i++)
	{
        stuffed[j++] = in[i];
        if (in[i] == '1')
        {
            count++;
            if (count == 5)
            {
            	
                stuffed[j++] = '0';
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    stuffed[j] = '\0'; 
}
void bitDestuff(char *stuffed, char *destuffed)
{
    int count = 0;
    int j = 0;
    for (int i = 0; i < strlen(stuffed); i++)
    {
        destuffed[j++] = stuffed[i];
        if (stuffed[i] == '1')
        {
            count++;
            if (count == 5)
            {
                i++;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    destuffed[j] = '\0';
}
int main()
{
    char in[100];
    char stuffed[200];
    char destuffed[100];
    printf("Enter a binary string: ");
    scanf("%s", in);
    bitStuff(in, stuffed);
    printf("Stuffed string: %s\n", stuffed);
    bitDestuff(stuffed, destuffed);
    printf("Destuffed string: %s\n", destuffed);
    return 0;
}
