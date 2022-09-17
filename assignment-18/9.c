#include <stdio.h>
#include <string.h>
int main(){
    char c[]="a man has arrived";
    char c2[17];
    int count = 0,si = 0,ei = 0;
    int i,j=16;
    for(i=0;i<17;i++){
        if(c[i]!=' '){
            count++;
        }else{
            ei=i-1;
            si=ei-count;
            count=0;
        }
        for(i=si;i<=ei;i++){

        }
    }
    return 0;
}
// void reverse(char s[], int len)
// {
//     char c[len];int si=0,c_len=len,sub_len=0;int i=0,j=0;
//     while(j<len)
//     {sub_len=0;
//        while(j<len)
//     {
//         if(s[j]!=' '){

//          sub_len++;
//          j++;
//         //  printf("f");
//         }
//         else
//         break;
//         /* code */
//     }
//     printf("%d",j);
//     for (int k = 0; k < sub_len;k++)
//     {
//         c[(c_len-sub_len)+j]=s[i-(sub_len-j)];
//         /* code */
//     }
//     c[(c_len-sub_len)-1]=' ';
//     c_len-=sub_len+1;
//     j++;
    
//     }
    
    
//     strcpy(s,c); 
//     printf("%s",s);
// }
// int main()
// {
//     char s[100];int i=0;
//     fgets(s, 100, stdin);
//     for ( i = 0;s[i]; i++)
//     {
//     }
//     reverse(s,i);
//     return 0;
// }


  