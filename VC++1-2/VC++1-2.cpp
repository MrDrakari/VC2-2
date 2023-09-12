#include <iostream>
#include <conio.h>

int main()
{
    printf("VC++ 2주차 첫번째 문제\n\n");

    char code;
    char exit;
   
    
    while (1) {

        printf("CodeInput(G,Y,R,B) : ");

        while (1) {
            code = _getche();
            if (code == 27) {
                return(0);
            }
            if (code == 13)
            {
                break;
            }
        }

        printf("\n");
        

        
        switch (code) {
            case 'G':
                printf("G : 코드 그린\n");
                break;
            case 'Y':
                printf("Y : 코드 옐로\n");
                break;
            case 'R':
                printf("R : 코드 레드\n");
                break;
            case 'B':
                printf("B : 코드 블랙\n");
                break;
            default:
                printf("Error : 다시 입력해주세요.\n");
                break;
        }
    }
    return 0;
}