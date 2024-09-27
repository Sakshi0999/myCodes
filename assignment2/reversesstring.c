#include<stdio.h>
#include<string.h>

int main(){

char name[20], c;

printf("enter a string: ");
 fgets(name, sizeof(name), stdin);  int l = strlen(name);

for(int i = 0; i < l/2; i++)
{

c = name[i];
name[i] = name[l-i-1];
name[l-i-1] = c;

}
    printf("Reversed string: %s\n", name);
return 0;
}