/*#include <stdio.h>
#include<string.h>

struct profile
{
	char* name;
};
int main(void)
{
	char arr[10] = "bongmin"
	struct profile bm;

	bm.name = arr;

}*/
#include <stdio.h>
#include <string.h>

struct profile {
    char* name;
};

int main(void) {
    char arr[10] = "bongmin";  // Add the missing semicolon here
    struct profile bm;

    bm.name = arr;

    // Printing the profile name to verify
    printf("Profile name: %s\n", bm.name);

    return 0;
}
