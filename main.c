#include <stdio.h>
int index;
char arr[1024];
int isMingan(char x)
{
    int count = 0;
    for (int i = 0; i< index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
        if (count == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main()
{
    int coude;
    printf("minganciguanlixitong\n");
    while (1)
    {
        printf("1---tianjia\n");
        printf("2--shanchu\n");
        printf("3----chaozhao\n");
        printf("4----tihuan\n");
        printf("5---tuichu\n");
        printf("qingshurugongnengbianhao\n");
        if (coude == 1)
        {
            char x;
            char i;
            printf("qinshuruyaotianjiade minganzhifu\n");
            scanf("%c", &x);
            scanf("%c", &x);
            arr[index] = x;
            index++;
            scanf("%c", &i);
            scanf("%c", &i);
        }
        if (coude == 2)
        {
            char  x;
            if(index>0)
            {
                index--;
                printf("chenggngjixu\n");
                scanf("%c",&x);
                scanf("%c",&x);
            }
            else
            {
                printf("shibai\n");
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
        if (coude == 3)
        {
        }
        if (coude == 4)
        {
        }
        if (coude == 5)
        {
        
        }
    }

    return 0;
}