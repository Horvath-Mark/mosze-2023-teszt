#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //pontos változónév használata
    std::cout << "1-100 ertekek duplazasa" << std::endl; // aposztróf helyett idézőjel, illetve hiányzó pontosvessző és sortörés
    for (int i = 0; i < N_ELEMENTS; i++) //hiányzó feltétel, ciklusváltozó növelése
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) //hiányzó feltétel
    {
        std::cout << "Ertek: " << b[i] << std::endl; //hiányzó pontosvessző, érték kiírásának pótlása
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //értékadás
    for (int i = 0; i < N_ELEMENTS; i++) //vessző lecserélése pontosvesszőre
    {
        atlag += b[i]; //hiányzó pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Hibak javitva " << std::endl;
    delete[] b; //memóriát fel kell szabadítani 
    return 0;
}
