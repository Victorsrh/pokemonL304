#include "Campeonato.hpp"
#include <iostream>
#include <sstream>
#include <string>

#include "avaliacao_basica_pokemon.hpp"

int main() {
    Campeonato campeonato;

    std::string command;
    while (true) {
        std::getline(std::cin, command);

        if (command == "b") {
            avaliacao_basica();
            break;
        }

        std::istringstream iss(command);
        std::string cmd;
        iss >> cmd;

        if (cmd == "t") {
            // comando para cadastrar um treinador no campeonato. 
            std::string nome;
            iss >> nome;
            campeonato.cadastrar_treinador(nome);
        } 
        else if (cmd == "i") {
            // comando para imprimir as informações de um treinador de acordo com o id. 
            int idt;
            iss >> idt;
            campeonato.imprimir_informacoes_treinador(idt);
        } 
        else if (cmd == "e") {
            //  comando para adicionar um PokemonEletrico ao treinador informado.
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, potencia_raio;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
            campeonato.cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, potencia_raio);
        } 
        else if (cmd == "q") {
            // comando para adicionar um PokemonAquatico ao treinador informado.
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, litros_jato;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
            campeonato.cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, litros_jato);
        } 
        else if (cmd == "x") {
            // comando para adicionar um PokemonExplosivo ao treinador informado.
            int idt;
            std::string nome, tipo_ataque;
            double forca_ataque, temperatura_explosao;
            iss >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
            campeonato.cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, temperatura_explosao);
        } 
        else if (cmd == "h") {
            // comando para realizar uma batalha de acordo com os ids informados.
            int idt1, idpk1, idt2, idpk2;
            iss >> idt1 >> idpk1 >> idt2 >> idpk2;
            campeonato.executar_batalha(idt1, idpk1, idt2, idpk2);
        }
    }

    return 0;
}
