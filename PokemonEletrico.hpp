#ifndef POKEMON_ELETRICO_HPP
#define POKEMON_ELETRICO_HPP

#include "Pokemon.hpp"

class PokemonEletrico : public Pokemon {
private:
    double _potencia_raio;

public:
    PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);
    void falar_tipo_ataque() const override;
    double calcular_dano() const override;
    double ataque_eletrico() const;
};

#endif
