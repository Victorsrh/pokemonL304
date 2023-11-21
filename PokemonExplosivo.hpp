#ifndef POKEMON_EXPLOSIVO_HPP
#define POKEMON_EXPLOSIVO_HPP

#include "Pokemon.hpp"

class PokemonExplosivo : public Pokemon {
private:
    double _temperatura_explosao;

public:
    PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);
    void falar_tipo_ataque() const override;
    double calcular_dano() const override;
    double ataque_explosivo() const;
};

#endif
