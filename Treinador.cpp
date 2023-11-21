#include "Treinador.hpp"
#include "PokemonExplosivo.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonEletrico.hpp"
#include <iostream>

Treinador::Treinador(std::string nome) : _nome(nome) {}

void Treinador::cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio) {
    Pokemon* novo_pokemon = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato) {
    Pokemon* novo_pokemon = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    Pokemon* novo_pokemon = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    _pokemons.push_back(novo_pokemon);
}

Pokemon* Treinador::usar_pokemon(int idpk) {
    if (idpk >= 0 && idpk < static_cast<int>(_pokemons.size())) {
        return _pokemons[idpk];
    } 
    else {
        std::cout << "ID de Pokemon invalido!" << std::endl;
        return nullptr;
    }
}

void Treinador::imprimir_informacoes() const {
    std::cout << "Nome: " << _nome << std::endl;
    //std::cout << "----------" << std::endl;

    if (_pokemons.empty()) {
        std::cout << "Nenhum Pokemon cadastrado!" << std::endl;
    } 
    else {
        for (size_t i = 0; i < _pokemons.size(); ++i) {
            std::cout << "----------" << std::endl;
            _pokemons[i]->imprimir_informacoes();
        }
        std::cout << "----------" << std::endl;
    }
}

std::string Treinador::getNome() const {
    return _nome;
}