//find entered value is vowel or consonant
#include<stdio.h>
int main()
{
    char value;
    int l,u;
    printf("Enter value:");
    scanf("%c",&value);

    l=(value=='a'||value=='e'||value=='i'||value=='o'||value=='u');
    u=(value=='A'||value=='E'||value=='I'||value=='O'||value=='U');

    (l||u)?printf("its vowel"):printf("its consonant");
    return 0;
}
