       /* print files in current directory in reverse order */
       #include <dirent.h>
       #include <stdio.h>
       main(){
           struct dirent **namelist;
           int n;

           n = scandir(".", &namelist, 0, alphasort);
           //n = scandir("aaaaa", &namelist, 0, alphasort); //to see perror
           //n = scandir("rw1.c", &namelist, 0, alphasort); //to see perror
           if (n < 0)
               perror("scandir");
           else {
               while(n--) {
                   printf("%s ", namelist[n]->d_name);
                   printf("%d ", namelist[n]->d_reclen);
                   printf("%d\n", namelist[n]->d_type);
                   free(namelist[n]);
               }
               free(namelist);
           }
       }


