//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture texture;
Texture texturaAzul;
Sprite sprite;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
Sprite Azul;

sf::Vector2f mitad;

int main() {
	int alto = 600;
	int ancho = 600;

	sf::Vector2i centro = { ancho / 2,alto / 2 };

	texture.loadFromFile("rcircle.png");
	texturaAzul.loadFromFile("circuloAzul.png");

	sprite.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);
	Azul.setTexture(texturaAzul);

	sprite2.setPosition(480, 0);
	sprite3.setPosition(0, 480);
	sprite4.setPosition(480, 480);
	Azul.setPosition(200,200);
	Azul.setScale(0.5, 0.5);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"sniperAzul");
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
		App.draw(Azul);
		// Mostramos la ventana
		App.display();
	}
	return 0;
}