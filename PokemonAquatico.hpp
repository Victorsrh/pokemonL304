#ifndef POKEMON_AQUATICO_HPP
#define POKEMON_AQUATICO_HPP

#include "Pokemon.hpp"

class PokemonAquatico : public Pokemon {
private:
    double _litros_jato;

public:
    PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);
    void falar_tipo_ataque() const override;
    double calcular_dano() const override;
    double ataque_aquatico() const;
};

#endif
