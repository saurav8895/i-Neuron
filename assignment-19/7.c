    #include<stdio.h>
    #include<string.h>
    
    int main()
    {
        char s[3][5];
        char c[5];
        int cnt[3];
        memset(cnt,0,3*4);
        for (int i = 0; i <3; i++)
        {
            // fgets(s[i],5,stdin)fuck off;
            scanf("%s",&s[i]);
            /* code */
        }

        for (int i = 0; i < 3; i++)
        {
            strcpy(c,s[i]);
            strrev(c);
            printf("%s : %s \n",s[i],c);
            if(strcmp(s[i],c)==0){
             cnt[i]++;
            }
            /* code */
        }
        for (int i = 0; i < 3; i++)
        {
            if(cnt[i])
            printf("%d\n",i);
            /* code */
        }
        
    
        
        
        
        return 0;
    }