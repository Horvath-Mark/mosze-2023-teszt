#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //pontos változónév használata
    std::cout << '1-100 ertekek duplazasa' // aposztróf helyett idézőjel, illetve hiányzó pontosvessző
    for (int i = 0;) //hiányzó feltétel, ciklusváltozó növelése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hiányzó feltétel
    {
        std::cout << "Ertek:" //hiányzó pontosvessző, érték kiírásának pótlása
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //értékadás
    for (int i = 0; i < N_ELEMENTS, i++) //vessző lecserélése pontosvesszőre
    {
        atlag += b[i] //hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    //memóriát fel kell szabadítani
    return 0;
}
