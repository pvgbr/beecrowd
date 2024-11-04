#include <stdio.h>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    char a1[20], a2[20], a3[20];
    map<string, map<string, map<string, string>>> mp;

    mp["vertebrado"]["ave"]["carnivoro"] = "aguia";
    mp["vertebrado"]["ave"]["onivoro"] = "pomba";
    mp["vertebrado"]["mamifero"]["onivoro"] = "homem";
    mp["vertebrado"]["mamifero"]["herbivoro"] = "vaca";
    mp["invertebrado"]["inseto"]["hematofago"] = "pulga";
    mp["invertebrado"]["inseto"]["herbivoro"] = "lagarta";
    mp["invertebrado"]["anelideo"]["hematofago"] = "sanguessuga";
    mp["invertebrado"]["anelideo"]["onivoro"] = "minhoca";

    scanf("%s",a1);
    scanf("%s",a2);
    scanf("%s",a3);
    printf("%s\n",mp[a1][a2][a3].c_str());

    return 0;
}
