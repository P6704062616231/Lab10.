#include <stdio.h>
#include <string.h>
typedef struct {
    char loginname[64];
    char password[64];
} account ;
typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC;
} hoststd;

int main(){
    hoststd cs[5] = {
        {"66-040626-2686-9","MR.A",{"user1","passwd1"}},
        {"66-040626-2687-0","MR.B",{"user2","passwd2"}},
        {"66-040626-2688-1","MR.C",{"user3","passwd3"}},
        {"66-040626-2689-2","MR.D",{"user4","passwd4"}},
        {"66-040626-2690-3","MR.E",{"user5","passwd5"}}
    };
    char login[64], pass[64];
    int i, found = 0;

    printf("Enter login : ");
    scanf("%s", login);

    printf("Enter password : ");
    scanf("%s", pass);
    for(i = 0; i < 5; i++){
        if(strcmp(login, cs[i].stdACC.loginname) == 0 &&
           strcmp(pass, cs[i].stdACC.password) == 0){
            found = 1;
        }
    }
    if(found == 1)
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}
