#ifndef VERTICE
#define VERTICE
#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

class Vertice
{
public:
    Vertice(int id_vertice):id_vertice(id_vertice){};
    int id_vertice;
    vector<int> vertices_adjacentes;
    void incerir_vertices_adjacente(vector<int> vertices)
    {
        for (auto i : vertices)
        {
            vertices_adjacentes.push_back(i);
        }
    }
    void incerir_vertices_adjacente(int vertice)
    {
       vertices_adjacentes.push_back(vertice);
    }
    void print_vertices_adjacente(){
        
        std::cout << "Vertice "<<id_vertice << endl;

        for (auto i : vertices_adjacentes)
        {
            std::cout << i << " ";
        }
        std::cout << endl;
    }
};

#endif