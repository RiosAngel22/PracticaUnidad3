//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture plataformasTexture;
Sprite Plataformas;

int main() {
	plataformasTexture.loadFromFile("plataforma.jpg");
	Plataformas.setTexture(plataformasTexture);

	int alto = 800;
	int ancho = 600;



	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"plataformas");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		for (int i = 1; i < 8; i++) {
			Plataformas.setPosition((i * 55)-30, 600);
			Plataformas.setScale(0.12, 0.1 * -i*1.9);
			App.draw(Plataformas);
		}

		Plataformas.setPosition(420,260);
		Plataformas.setScale(1.45, 0.1);
		App.draw(Plataformas);

		// Mostramos la ventana
		App.display();
	}
	return 0;
}