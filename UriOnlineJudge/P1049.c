#include<stdio.h>
#include<string.h>
int main()
{
    char name1[10],name2[10],name3[10],c11[]={"vertebrado"},c12[]={"ave"},c13[]={"mamifero"},c14[]={"carnivoro"},c15[]={"onivoro"},c16[]={"herbivoro"};
    char c21[]={"invertebrado"},c22[]={"inseto"},c23[]={"anelideo"},c24[]={"hematofago"};
    char c31[]={"aguia"},c32[]={"pomba"},c33[]={"homem"},c34[]={"vaca"},c35[]={"pulga"},c36[]={"lagarta"},c37[]={"sanguessuga"},c38[]={"minhoca"};
    scanf("%s",&name1);
    if(!strcmp(c11,name1)){
        scanf("%s",&name2);
        if(!strcmp(c12,name2)){
            scanf("%s",&name3);
            if(!strcmp(c14,name3)){
                printf("%s\n",c31);
            }else if(!strcmp(c15,name3)){
                printf("%s\n",c32);
            }
        }else if(!strcmp(c13,name2)){
            scanf("%s",&name3);
            if(!strcmp(c15,name3)){
                printf("%s\n",c33);
            }else if(!strcmp(c16,name3)){
                printf("%s\n",c34);
            }
        }
    }else if(!strcmp(c21,name1)){
        scanf("%s",&name2);
        if(!strcmp(c22,name2)){
            scanf("%s",&name3);
            if(!strcmp(c24,name3)){
                printf("%s\n",c35);
            }else if(!strcmp(c16,name3)){
                printf("%s\n",c36);
            }
        }else if(!strcmp(c23,name2)){
            scanf("%s",&name3);
            if(!strcmp(c24,name3)){
                printf("%s\n",c37);
            }else if(!strcmp(c15,name3)){
                printf("%s\n",c38);
            }
        }
    }

}
