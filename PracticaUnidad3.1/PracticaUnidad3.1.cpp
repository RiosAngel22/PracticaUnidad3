//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture texture;
Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;

int main() {
	int alto = 800;
	int ancho = 600;

	texture.loadFromFile("rcircle.png");

	sprite.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);


	sprite2.setPosition(675, 0);
	sprite3.setPosition(0, 475);
	sprite4.setPosition(675, 475);


	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"sniper");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(sprite);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}