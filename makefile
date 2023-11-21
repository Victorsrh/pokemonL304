$(CC) = g++

programa: main.o Pokemon.o Treinador.o PokemonEletrico.o PokemonExplosivo.o PokemonAquatico.o Campeonato.o
			g++ main.o Pokemon.o Treinador.o PokemonEletrico.o PokemonExplosivo.o PokemonAquatico.o Campeonato.o -o programa

main.o: main.cpp
			g++ -c main.cpp

Pokemon.o: Pokemon.cpp Pokemon.hpp
			g++ -c Pokemon.cpp

Treinador.o: Treinador.cpp Treinador.hpp
			g++ -c Treinador.cpp

PokemonEletrico.o: PokemonEletrico.cpp PokemonEletrico.hpp
			g++ -c PokemonEletrico.cpp

PokemonExplosivo.o: PokemonExplosivo.cpp PokemonExplosivo.cpp
			g++ -c PokemonExplosivo.cpp

PokemonAquatico.o: PokemonAquatico.cpp PokemonAquatico.hpp
			g++ -c PokemonAquatico.cpp

Campeonato.o : Campeonato.cpp Campeonato.hpp
			g++ -c Campeonato.cpp

clean:
		rm *.o programa