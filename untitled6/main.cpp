#include "name1.cpp"
int main() {

    printf("Input size of list:");
    do {
        scanf("%i",&s);
    }while(s<=0);
    Mas=(Dom*) malloc(sizeof(Dom)*s);
    bool* Zan=(bool*) calloc(s,sizeof(bool));


    bool work=true;
    while(work)
    {
        printf("Choose option:\n1.Add house\n2.Search house\n3.Delete\n4.Exit");
        int choose;
        do {
            scanf("%i",&choose);
        }while(!(1<=choose && choose<=5));

        switch(choose)
        {
            case 1:
                {
                    bool estmesto=false;
                    for(int i=0;i<s;++i)
                    {
                        if(!Zan[i])
                        {
                            initialization(&Mas[i]);
                            Zan[i]=1;
                            estmesto=true;
                        }
                    }
                    if(!estmesto)
                        printf("No place in list!");
                }
                break;
            case 2:
                search_dom();
                break;
            case 3:
                int pos;
                do {
                    printf("Enter correct pos in list:");
                    scanf("%d",&pos);
                }while(!(0<=pos && pos<s));
                strcpy(Mas[pos].adres,"NULL");
                Zan[pos]=0;
                break;
            case 4:
                work=false;
                break;
        }
    }
    return 0;
}
