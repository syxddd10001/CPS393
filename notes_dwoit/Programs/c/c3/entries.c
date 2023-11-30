//This is from: https://c-for-dummies.com/blog/?p=3246
#include <stdio.h>
#include <dirent.h>

int main()
{
    DIR *folder;
    struct dirent *entry;
    int entries = 0;

    folder = opendir(".");
    if(folder == NULL)
    {
        perror("Unable to read directory");
        return(1);
    }

    while( (entry=readdir(folder)) )
    {
        entries++;
        printf("Entry %3d: %s\n",
                entries,
                entry->d_name
              );
    }

    closedir(folder);

    return(0);
}
