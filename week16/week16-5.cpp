#include <stdio.h>
char line [300]="10101001010101010101010101010100";
int main()
{
    int ans=0;
    for(int i=0;i<100;i++){
        if(line[i]=='1') ans++;

    }
    printf("¦³%d­Ó1\n",ans);
}
