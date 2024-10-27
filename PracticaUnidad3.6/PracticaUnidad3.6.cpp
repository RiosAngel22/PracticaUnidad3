//////Bibliotecas//////
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;
///Punto de entrada a la aplicación///

Texture rojoTex;
Texture azulTex;
Texture amarilloTex;
Texture negroTex;

Sprite rojo;
Sprite azul;
Sprite amarillo;
Sprite negro;

float escalaX;
float escalaY;

int main() {
	int alto = 400;
	int ancho = 400;

	rojoTex.loadFromFile("cuad_red.png");
	azulTex.loadFromFile("cuad_blue.png");
	amarilloTex.loadFromFile("cuad_yellow.png");
	negroTex.loadFromFile("cuad_grey.png");


	rojo.setTexture(rojoTex);
	azul.setTexture(azulTex);
	amarillo.setTexture(amarilloTex);
	negro.setTexture(negroTex);
	
	//ajustamos las diferencias de escalas
	float heightRojo = (float)rojoTex.getSize().y;
	float widthRojo = (float)rojoTex.getSize().x;

	escalaX = widthRojo / (float)azulTex.getSize().x;
	escalaY = heightRojo / (float)azulTex.getSize().y;

	azul.setScale(escalaX, escalaY);

	escalaX = widthRojo / (float)amarilloTex.getSize().x;
	escalaY = heightRojo / (float)amarilloTex.getSize().y;

	amarillo.setScale(escalaX, escalaY);

	escalaX = widthRojo / (float)negroTex.getSize().x;
	escalaY = heightRojo / (float)negroTex.getSize().y;

	negro.setScale(escalaX, escalaY);



	//Creamos la ventana
	sf::RenderWindow App(sf::VideoMode(alto, ancho, 32),
		"cuadrados");
	// Loop principal
	while (App.isOpen())
	{
		//posicionamos los cuadrados
		amarillo.setPosition(200, 0);
		azul.setPosition(0, 200);
		negro.setPosition(200, 200);



		// Limpiamos la ventana
		App.clear();
		//Dibujamos la escena
		App.draw(rojo);
		App.draw(amarillo);
		App.draw(azul);
		App.draw(negro);


		// Mostramos la ventana
		App.display();
	}
	return 0;
}