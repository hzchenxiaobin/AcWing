#include <iostream>

using namespace std;

int main()
{
    double a,b,c,d;
    cin >> a >> b >> c >>d;
    
    double media = a *0.2 + b * 0.3 + c * 0.4 + d * 0.1;
    printf("Media: %.1lf\n", media);
    
    if(media >= 7)
        printf("Aluno aprovado.\n");
    else if(media < 5)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        double y;
        cin >> y;
        printf("Nota do exame: %.1lf\n", y);
        double z = (media + y) / 2;
        if(z >= 5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f", z);
        
    }
}