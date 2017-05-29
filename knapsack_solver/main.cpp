#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>  
#include <vector>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iterator>
#include <ctime>

std::vector<std::vector<int> > results;





int knapsack(int currentVolume, int i, int n, std::vector<int> itemWorth, std::vector<int> itemVolume)
{
	if (i < n)																														//�berpr�fung, ob ein g�ltiger Index �bergeben wurde
	{
		if (results[i][currentVolume] != -1)																						//�berpr�fung, ob der Wert schon berechnet wurde
			return results[i][currentVolume];

		int a = knapsack(currentVolume, i + 1, n, itemWorth, itemVolume);															//Wert ohne den aktuellen Gegenstand
	    int b = 0;																													//Wert mit dem aktuellen Gegenstand, sofern Platz ausreicht
		if (currentVolume - itemVolume[i] >= 0)
			b = itemWorth[i] + knapsack(currentVolume - itemVolume[i], i + 1, n, itemWorth, itemVolume);

		results[i][currentVolume] = std::max(a,b);																					//Maximum der Berechnung speichern und zur�ckgeben
		return results[i][currentVolume];
	}
	return 0;
}

int getVolume(std::string line, int maxV) {
	if (line == "random") {
		return (std::rand() % maxV + 1);																							//zuf�lliges Volumen von 1 bis m zur�ckgeben
	}
	else {
		std::istringstream buf(line);																								//String in einen Stream laden
		std::istream_iterator<std::string> beg(buf), end;																			//�ber String iterieren

		std::vector<std::string> tokens(beg, end);																					//Vector mit den einzelnen Teilen

		return std::stoi(tokens[1]);																								//Volumen des Gegenstandes zur�ckgeben
	}
}


int getWorth(std::string line, int maxV) {
	if (line == "random") {
		return (std::rand() % maxV * 2 + 1);																						//Zuf�lligen Wert bestimmen
																																	//Maximaler Wert = 2*maximales Volumen
	}
	else {
		std::istringstream buf(line);
		std::istream_iterator<std::string> beg(buf), end;																			//�ber String iterieren

		std::vector<std::string> tokens(beg, end);																					//Vector mit den einzelnen Teilen

		return std::stoi(tokens[0]);																								//Volumen des Gegenstandes zur�ckgeben
	}
}


int main(int argc, char *argv[]) {
	int n, m, maxValue = 0;
	char c;
	std::vector<int> itemWorth, itemVolume, selected;

	std::cout << "********************************************************************************" << std::endl;					//Copyright ;)
	std::cout << "*                           Rucksackproblem-Solver v1.0                        *" << std::endl;
	std::cout << "*                            (c) 2017 Tobias Noethlich                         *" << std::endl;
	std::cout << "********************************************************************************" << std::endl << std::endl;
									
	std::srand(std::time(0));																										//Zufallszahlengenerator mit Systemzeit seeden
		
	if (argc == 1) {																												//Wenn das Programm durch Doppelklick auf die .exe gestartet wurde...
		std::cout << "================================================================================" << std::endl;				//...manuell wichtige Werte erfassen
		std::cout << "Anzahl der Gegenstaende: ";
		std::cin >> n;
		std::cout << std::endl;
		std::cout << "Volumen des Rucksacks: ";
		std::cin >> m;
		std::cout << std::endl;
		std::cout << "Attribute der Gegenstaende zufaellig generieren (j/n) : ";
		std::cin >> c;
		if (c == 'n' || c == 'N') {																									//sollen die Gegenst�nde nicht zuf�llig generiert werden...
			std::cout << std::endl;
			
			int w, v;
			
			for (int i = 1; i <= n; i++) {																							//...f�r jeden Gegenstand Wert und Volumen erfassen.
				std::cout << std::endl << "Wert des Gegenstands " << i << " : ";
				std::cin >> w;
				itemWorth.push_back(w);
				std::cout << std::endl << "Volumen des Gegenstands " << i << " : ";
				std::cin >> v;
				itemVolume.push_back(v);
			}

			std::cout << "================================================================================" << std::endl;
		}
		else
		{
			for (int x = 1; x <= n; x++) {
				int w, v;
				
				std::cout << std::endl << "Generiere Attribute des Gegenstandes " << x << " : " << std::endl;
				w = getWorth("random", m);
				std::cout << "Wert: " << w << std::endl;
				v = getVolume("random", m);
				std::cout << "Volumen: " << v << std::endl;

				itemWorth.push_back(w);
				itemVolume.push_back(v);
			}
			std::cout << "================================================================================" << std::endl;
		}
	}
	else{																															//Beim Starten mit 2 Argumenten -> aus txt-Datei auslesen.
		std::string line;
		std::ifstream f(argv[1]);
		int i = 1;

		if (!f.is_open()) {																											//Fehler abfangen
			std::cout << "Fehler beim Oeffnen der Datei";
		}
		while (std::getline(f, line)) {																								//Datei Zeile f�r Zeile auslesen
			switch (i)
			{
			case 1: n = std::stoi(line);																							//Zeile 1: Anzahl der Gegenst�nde
				break;
			case 2: m = std::stoi(line);																							//Zeile 2 Volumen des Rucksacks
				break;
			default: itemWorth.push_back(getWorth(line, m));																		//Zeilen 3 bis n: Wert und Volumen des Gegenstands
					 itemVolume.push_back(getVolume(line, m));
				break;
			}
			i++;

		}

	}
	results.resize(n);																												//Gr��e des �u�eren Vektors entsprechend der Anzahl der Gegenst�nde 
																																	//festlegen 
	for (int x = 0; x < n; x++) {																									
		results[x].resize(m + 1);																									//Gr��e der inneren Vektoren entsprechend des Gesamtvolumens festlegen
	}

	for (int j = 0; j < n; j++) {																									//Vektoren mit -1 f�llen
		for (int k = 0; k < m + 1; k++) {
			results[j][k] = -1;
		}
	}

	int opt = knapsack(m, 0, n, itemWorth, itemVolume);																				//Optimum bestimmen...
	std::cout << std::endl << "Maximaler Wert: " << opt << std::endl;																//... und ausgeben

	int currVol = -1;

	for (int i = 0; i <= m; i++){
		if (results[0][i] == opt)																									//belegtes Volumen beim Optimum suchen
			currVol = i;
	}

	for (int j = 0; j < n-1; j++) {																									//�ber alle Gegenst�nde iterieren
		if (currVol - itemVolume[j] >= 0 && opt - itemWorth[j] == results[j + 1][currVol - itemVolume[j]]) {						//�berpr�fen ob Gegenstand in Rucksack passt, dann aus dem 
																																	//Rucksack nehmen (wenn Wert an neuer Position = Maximum)
			selected.push_back(j + 1);																								//Gegenstand wurde gew�hlt
			opt -= itemWorth[j];																									//Volumen und Wert anpassen
			currVol -= itemVolume[j];
		}
	}

        //opt != 0 -> noch etwas im Rucksack -> muss letzter Gegenstand sein
	if (opt > 0) {																													//letzten Gegenstand gesondert behandeln (sonst Zugriffsfehler da 
																																	//da j+1 nicht existiert)
		selected.push_back(n);																										
	}

	std::cout << "Gewaehlte Gegenstaende:" << std::endl;

	for (int k = 0; k < selected.size(); k++) {
		std::cout << selected[k] << std::endl;																						//Ausgabe aller gew�hlten Gegenst�nde
	}

	std::cout << std::endl << std::endl;
	return 0;
}

