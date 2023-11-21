#include "Campeonato.hpp"
#include <iostream>

void Campeonato::cadastrar_treinador(std::string nome) {
    _treinadores.push_back(new Treinador(nome));
}

void Campeonato::cadastrar_pokemon_eletrico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio) {
    _treinadores[idt]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato) {
    _treinadores[idt]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    _treinadores[idt]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int idt) {
    _treinadores[idt]->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2) {
    std::cout << "### Batalha ###" << std::endl;
    std::cout << _treinadores[idt1]->getNome() << " (" << _treinadores[idt1]->usar_pokemon(idpk1)->getNome() << ") vs. " << _treinadores[idt2]->getNome() << " (" << _treinadores[idt2]->usar_pokemon(idpk2)->getNome() << ")" << std::endl;
    
    // Ataque do primeiro treinador
    _treinadores[idt1]->usar_pokemon(idpk1)->atacar(_treinadores[idt2]->usar_pokemon(idpk2));
    
    // Impressão das informações do Pokémon atacado
    std::cout << _treinadores[idt2]->usar_pokemon(idpk2)->getNome() << "!" << std::endl;
    std::cout << "Energia: " << _treinadores[idt2]->usar_pokemon(idpk2)->getEnergia() << std::endl;

    std::cout << "#########" << std::endl;
}
