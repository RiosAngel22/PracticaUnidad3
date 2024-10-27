//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture textureRotacion;
Sprite spriteRotacion;

float rotacion;

int main() {
	int alto = 800;
	int ancho = 600;

	textureRotacion.loadFromFile("chessw.png");
	spriteRotacion.setTexture(textureRotacion);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"rotacion");
	// Loop principal
	while (App.isOpen())
	{
		rotacion = spriteRotacion.getRotation();
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena

		spriteRotacion.setPosition(alto/2,ancho/2);
		spriteRotacion.setRotation(rotacion + 0.2);
		App.draw(spriteRotacion);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}