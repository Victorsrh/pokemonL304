#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

class Pokemon {
protected:
    std::string _nome;
    std::string _tipo_ataque;
    double _forca_ataque;
    double _energia;

public:
    Pokemon(std::string nome, std::string tipo_ataque, double forca_ataque);
    void falar_nome();
    virtual void falar_tipo_ataque() const;
    void imprimir_status();
    void imprimir_informacoes();
    virtual double calcular_dano() const = 0;
    void atacar(Pokemon* outro_pokemon);
    void receber_dano(double valor_dano);
    std::string getNome() const;
    double getEnergia() const;
};

#endif
