//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture fondotexture;
Sprite fondo;

int main() {
	fondotexture.loadFromFile("fondo.jpg");
	fondo.setTexture(fondotexture);

	int alto = (int)fondotexture.getSize().x;
	int ancho = (int)fondotexture.getSize().y;



	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"fondo");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(fondo);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}