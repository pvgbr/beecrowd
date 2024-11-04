#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int i;
    char word[30];
    map<string, string> trad;
    trad.insert( {"brasil", "Feliz Natal!"} );
    trad.insert( {"alemanha", "Frohliche Weihnachten!"} );
    trad.insert( {"austria", "Frohe Weihnacht!"} );
    trad.insert( {"coreia", "Chuk Sung Tan!"} );
    trad.insert( {"espanha", "Feliz Navidad!"} );
    trad.insert( {"grecia", "Kala Christougena!"} );
    trad.insert( {"estados-unidos", "Merry Christmas!"} );
    trad.insert( {"inglaterra", "Merry Christmas!"} );
    trad.insert( {"australia", "Merry Christmas!"} );
    trad.insert( {"portugal", "Feliz Natal!"} );
    trad.insert( {"suecia", "God Jul!"} );
    trad.insert( {"turquia", "Mutlu Noeller"} );
    trad.insert( {"argentina", "Feliz Navidad!"} );
    trad.insert( {"chile", "Feliz Navidad!"} );
    trad.insert( {"mexico", "Feliz Navidad!"} );
    trad.insert( {"antardida", "Merry Christmas!"} );
    trad.insert( {"canada", "Merry Christmas!"} );
    trad.insert( {"irlanda", "Nollaig Shona Dhuit!"} );
    trad.insert( {"belgica", "Zalig Kerstfeest!"} );
    trad.insert( {"italia", "Buon Natale!"} );
    trad.insert( {"libia", "Buon Natale!"} );
    trad.insert( {"siria", "Milad Mubarak!"} );
    trad.insert( {"marrocos", "Milad Mubarak!"} );
    trad.insert( {"japao", "Merii Kurisumasu!"} );

    while(scanf("%s",word) != EOF){
        string key(word);
        if(trad.find(key) != trad.end()){
            printf("%s\n",trad[key].c_str());
        }
        else{
            printf("--- NOT FOUND ---\n");
        }
    }


    return 0;
}

