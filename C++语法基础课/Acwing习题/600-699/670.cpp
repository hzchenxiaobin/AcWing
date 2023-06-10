#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a>>b>>c;
    
    if(a == "vertebrado")
    {
        if(b == "ave")
        {
            if(c =="carnivoro")
                printf("aguia");
            else if(c == "onivoro")
                printf("pomba");
        }
        
        if(b == "mamifero")
        {
            if(c =="onivoro")
                printf("homem");
            else if(c == "herbivoro")
                printf("vaca");
        }
    }
    else if(a == "invertebrado")
    {
        if(b == "inseto")
        {
            if(c =="hematofago")
                printf("pulga");
            else if(c == "herbivoro")
                printf("lagarta");
        }
        
        if(b == "anelideo")
        {
            if(c =="hematofago")
                printf("sanguessuga");
            else if(c == "onivoro")
                printf("minhoca");
        }
    }
}