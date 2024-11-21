#include <stdio.h>
#include <string.h>

int main(){
    int t,i,j,k,l;
    char temp[1005];
    char nim[1005][100], nama[1005][100];

    FILE *file = fopen("testdata.in", "r");

    fscanf(file,"%d\n", &t);
    for(i = 1; i <= t; i++){
        fscanf(file,"%s %s\n",nim[i],nama[i]);
    }

    for (j = 1; j <= t; j++){
        for(k = 1; k <= t - j; k++){
            if(strcmp(nim[k],nim[k+1]) > 0){
                strcpy(temp,nim[k]);
                strcpy(nim[k],nim[k+1]);
                strcpy(nim[k+1],temp);

                strcpy(temp,nama[k]);
                strcpy(nama[k],nama[k+1]);
                strcpy(nama[k+1],temp);
            }
        }
    }

    for(i = 1; i <= t; i++){
        printf("%s %s\n",nim[i],nama[i]);
    }

    fclose(file);
}