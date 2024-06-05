#ifndef GRAFO
#define GRAFO
#include "vertice.cpp"
#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::endl;
using std::vector;
using std::string;

class Grafo
{
public:
    Grafo(vector<Vertice *> vertices):vertices(vertices){};
    vector<Vertice *> vertices;
    string verificar_adjacencia(int a, int b)
    {
        for (auto i : vertices)
        {
            if (i->id_vertice == a)
            {
                for (auto j : i->vertices_adjacentes)
                {
                    if (j == b)
                    {
                        return "true";
                    }
                }
            }
        }
        return "false";
    }
    void print_vertices_adjacentes(int vertice){
        for(auto i : vertices){
            if (i->id_vertice == vertice){
                i->print_vertices_adjacente();
            }

        }
    }
};

#endif