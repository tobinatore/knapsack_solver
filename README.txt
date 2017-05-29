                                    
                                           
                                           
                                           
                                           
			            ;;;;;;;;;;;;;;;;;;;`           
			           ;;;;;;;;;;;;;;;;;;;;;:          
			          ;;;;;;;;;;;;;;;;;;;;;;;`         
			         .;;;;...............:;;;;         
			         ;;;;                 :;;;         
			         ;;;;                 .;;;         
			         ;;;;                 .;;;         
			         ;;;;                 .;;;         
			         ;;;;                 .;;;         
			         ;;;;   ;;;;   ,;;;   .;;;         
			         ;;;;   ;;;;   ,;;;   .;;;         
			         ;;;;   ;;;;   ,;;;   .;;;         
			         ;;;;;;;;;;;;;;;;;;;;;;;;;         
			         ;;;;;;;;;;;;;;;;;;;;;;;;;         
			         ;;;;;;;;;;;;;;;;;;;;;;;;;         
			          ;;;;;;;;;;;;;;;;;;;;;;;.         
			           ;;;, ;;;;   ,;;;  ;;;           
			           ;;;, ;;;;   ,;;;  ;;;           
			           ;;;,              ;;;           
			        .,,;;;,              ;;;,,,        
			      ;;;;;;;;,              ;;;;;;;;      
			     ;;;;;;;;;, ;;;;;;;;;;;  ;;;;;;;;;     
			    :;;;;;;;;;, ;;;;;;;;;;;  ;;;;;;;;;;    
			    ;;;;   ;;;, ;;;;;;;;;;;  ;;;   :;;;    
			    ;;;.   ;;;, ;;;;;;;;;;;  ;;;    ;;;`   
			    ;;;;;;;;;;,              ;;;;;;;;;;.   
			    ;;;;;;;;;;,              ;;;;;;;;;;.   
			    ;;;;;;;;;;,              ;;;;;;;;;;.   
			    ;;;.   ;;;,              ;;;    ;;;.   
			    ;;;.   ;;;,              ;;;    ;;;.   
			    ;;;.   ;;;,              ;;;    ;;;.   
			    ;;;.   ;;;,              ;;;    ;;;.   
			    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;.   
			    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;.   
			    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;    
			     `................................     
                                                                                 	
                                           
		  _  __                                 _       _____       _                
		 | |/ /                                | |     / ____|     | |               
		 | ' / _ __   __ _ _ __  ___  __ _  ___| | __ | (___   ___ | |_   _____ _ __ 
		 |  < | '_ \ / _` | '_ \/ __|/ _` |/ __| |/ /  \___ \ / _ \| \ \ / / _ \ '__|
		 | . \| | | | (_| | |_) \__ \ (_| | (__|   <   ____) | (_) | |\ V /  __/ |   
		 |_|\_\_| |_|\__,_| .__/|___/\__,_|\___|_|\_\ |_____/ \___/|_| \_/ \___|_|   
                		  | |                     ______                             
		                  |_|                    |______|                                                                      
                                           
__________________________________________________________________________________________________________________________

Hier meine Einsendung zur Code Competition Mai.
Die Konsolenanwendung "knapsack_solver wurde in Visual Studio 2015 in C++ geschrieben.


Inhalt:
	I. 	Nennenswerte Features
	II. 	Mitgelieferte Dateien
	III.	Bedienungshinweise
	IV. 	Formatierung eigener Eingabedateien
	V. 	Source-Code


I. Nennenswerte Features:

 � Finden des optimalen Wertes bei gegebenen Gegenst�nden und gegebenem Volumen durch dynamische Programmierung 
 � Darstellung der gew�hlten Gegenst�nde in �bersichtlicher Listenform
 � Anzeigen des maximalen Wertes
 � Einlesen der Daten durch Textdatei oder direkt �ber die Konsole m�glich
 � M�glichkeit Gewichte und Wertigkeiten der Gegenst�nde zuf�llig generieren zu lassen
 � Laufzeitverhalten von O(Anzahl Gegenst�nde * Volumen des Rucksacks)


II. Mitgelieferte Dateien:
 In dem Ordner "knapsack_solver" befindet sich das gesamte Visual Studio Projekt.

 C++-Source: 		knapsack_solver\knapsack_solver\main.cpp
 Ausf�hrbare .exe: 
			32Bit : knapsack_solver\Release\knapsack_solver.exe
			64Bit : knapsack_solver\x64\Release\knapsack_solver.exe

 Eine Installation ist nicht n�tig.


III. Bedienungshinweise:

 1. Die Anwendung bitte nur �ber die Windows Konsole (Windows-Taste + R -> "cmd" [ohne ""]) starten.

 2. In dem Konsolenfenster mittels des cd-Befehls in das Verzeichnis mit der .exe wechseln. Der gesamte Pfad l�sst sich
    durch ein Klicken auf die "Adresszeile" des Windows-Explorers zeigen und kopieren, sowie durch einen Rechtsklick im 
    Konsolenfenster einf�gen.
 	� Beispiel: "cd C:\Users\Tobias\Documents\Visual Studio 2015\Projects\knapsack_solver\x64\Release"

 3. Nun die .exe durch Aufrufen von "knapsack_solver.exe" starten (optional kann noch eine .txt-Datei mit ge�ffnet werden,
    das erspart das Eingeben der Werte im Konsolenfenster.
	� Beispiel 1: "knapsack_solver.exe" 			-> w�rde lediglich das Programm starten
	� Beispiel 2: "knapsack_solver.exe knapsack2.txt"	-> w�rde die Werte aus knapsack2.txt verwenden

 4. Das Programm wird Sie durch die restlichen Schritte f�hren.


IV. Formatierung eigener Eingabedateien
  
Sie k�nnen auch eigene Eingabedateien anlegen. Diese sollten unbedingt die folgende Formatierung einhalten:

Anzahl Gegenst�nde
Volumen des Rucksacks
Wert Volumen
Wert Volumen
    .
    .
    .
Wert Volumen

Alternativ k�nnen Sie auch statt "Wert Volumen", "random" schreiben. Wert und Volumen werden f�r diesen Gegenstand dann 
zuf�llig erzeugt. 
Es liegen dem Programm 3 Eingabedateien bei (knapsack1-3.txt), welche Sie als Vorlage nutzen k�nnen.


Source-Code:
 � Funktions- und Variablennamen sind auf Englisch
 � Der Code ist allerdings ausf�hrlich auf Deutsch kommentiert

