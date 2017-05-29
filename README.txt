                                    
                                           
                                           
                                           
                                           
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

 • Finden des optimalen Wertes bei gegebenen Gegenständen und gegebenem Volumen durch dynamische Programmierung 
 • Darstellung der gewählten Gegenstände in übersichtlicher Listenform
 • Anzeigen des maximalen Wertes
 • Einlesen der Daten durch Textdatei oder direkt über die Konsole möglich
 • Möglichkeit Gewichte und Wertigkeiten der Gegenstände zufällig generieren zu lassen
 • Laufzeitverhalten von O(Anzahl Gegenstände * Volumen des Rucksacks)


II. Mitgelieferte Dateien:
 In dem Ordner "knapsack_solver" befindet sich das gesamte Visual Studio Projekt.

 C++-Source: 		knapsack_solver\knapsack_solver\main.cpp
 Ausführbare .exe: 
			32Bit : knapsack_solver\Release\knapsack_solver.exe
			64Bit : knapsack_solver\x64\Release\knapsack_solver.exe

 Eine Installation ist nicht nötig.


III. Bedienungshinweise:

 1. Die Anwendung bitte nur über die Windows Konsole (Windows-Taste + R -> "cmd" [ohne ""]) starten.

 2. In dem Konsolenfenster mittels des cd-Befehls in das Verzeichnis mit der .exe wechseln. Der gesamte Pfad lässt sich
    durch ein Klicken auf die "Adresszeile" des Windows-Explorers zeigen und kopieren, sowie durch einen Rechtsklick im 
    Konsolenfenster einfügen.
 	• Beispiel: "cd C:\Users\Tobias\Documents\Visual Studio 2015\Projects\knapsack_solver\x64\Release"

 3. Nun die .exe durch Aufrufen von "knapsack_solver.exe" starten (optional kann noch eine .txt-Datei mit geöffnet werden,
    das erspart das Eingeben der Werte im Konsolenfenster.
	• Beispiel 1: "knapsack_solver.exe" 			-> würde lediglich das Programm starten
	• Beispiel 2: "knapsack_solver.exe knapsack2.txt"	-> würde die Werte aus knapsack2.txt verwenden

 4. Das Programm wird Sie durch die restlichen Schritte führen.


IV. Formatierung eigener Eingabedateien
  
Sie können auch eigene Eingabedateien anlegen. Diese sollten unbedingt die folgende Formatierung einhalten:

Anzahl Gegenstände
Volumen des Rucksacks
Wert Volumen
Wert Volumen
    .
    .
    .
Wert Volumen

Alternativ können Sie auch statt "Wert Volumen", "random" schreiben. Wert und Volumen werden für diesen Gegenstand dann 
zufällig erzeugt. 
Es liegen dem Programm 3 Eingabedateien bei (knapsack1-3.txt), welche Sie als Vorlage nutzen können.


Source-Code:
 • Funktions- und Variablennamen sind auf Englisch
 • Der Code ist allerdings ausführlich auf Deutsch kommentiert

