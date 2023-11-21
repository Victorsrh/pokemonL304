#include "Pokemon.hpp"
#include <iostream>

Pokemon::Pokemon(std::string nome, std::string tipo_ataque, double forca_ataque): _nome(nome), _tipo_ataque(tipo_ataque), _forca_ataque(forca_ataque), _energia(100) {}

void Pokemon::falar_nome() {
    std::cout << _nome << "!" << std::endl;
}

void Pokemon::falar_tipo_ataque() const{
    std::cout << _tipo_ataque << "!" << std::endl;
}

void Pokemon::imprimir_status() {
    std::cout << _nome << "!" << std::endl;
    std::cout << "Energia: " << _energia << std::endl;
}

void Pokemon::imprimir_informacoes() {
    std::cout << "Pokemon: " << _nome << std::endl;
    std::cout << "Tipo ataque: " << _tipo_ataque << std::endl;
    std::cout << "Dano: " << calcular_dano() << std::endl;
    std::cout << "Energia: " << _energia << std::endl;
}

void Pokemon::atacar(Pokemon* outro_pokemon) {
    falar_nome();
    falar_tipo_ataque();
    double dano = calcular_dano();
    std::cout << "Dano: " << dano << std::endl;
    outro_pokemon->receber_dano(dano);
}

void Pokemon::receber_dano(double valor_dano) {
    _energia -= valor_dano;
    if (_energia <= 0) {
        _energia = 0;
        std::cout << _nome << " morreu!" << std::endl;
    }
}

std::string Pokemon::getNome() const {
    return _nome;
}

double Pokemon::getEnergia() const {
    return _energia;
}
