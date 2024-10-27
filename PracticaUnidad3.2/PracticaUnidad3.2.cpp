//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

using namespace sf;

///Punto de entrada a la aplicación///
Texture TextBlanco;
Sprite spriteBlanco;
Texture TextNegro;
Sprite spriteNegro;

int main() {
	int alto = 800;
	int ancho = 800;

	TextBlanco.loadFromFile("chessw.png");
	TextNegro.loadFromFile("chessb.png");
	spriteBlanco.setTexture(TextBlanco);
	spriteNegro.setTexture(TextNegro);

	float escala = 0.4;
	int par = 0;

	spriteBlanco.setScale(escala, escala);
	spriteNegro.setScale(escala,escala);

	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"ajedrez");
	// Loop principal
	while (App.isOpen())
	{
		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena

		for (int y = 0; y < 800; y += 100) {
			for (int x = 0; x < 800; x += 100) {
				//linea par
				spriteBlanco.setPosition(x, y);
				App.draw(spriteBlanco);
				spriteNegro.setPosition(x + 50, y);
				App.draw(spriteNegro);
			}
			for (int z = 0; z < 800; z += 100) {
				spriteNegro.setPosition(z, y+ 50);
				App.draw(spriteNegro);
				spriteBlanco.setPosition(z + 50, y + 50);
				App.draw(spriteBlanco);

			}
		}

		// Mostramos la ventana
		App.display();


	}
	return 0;
}