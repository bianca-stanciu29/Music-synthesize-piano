# Music-synthesize-piano

Acest proiect consta in implementarea unui pian care va reda sunete la atingerea clapelor pe mai multe tonalitati: pian, vioara. Ideea a pornit de la un pian 
destinat incepatorilor, avand drept scop invatarea unor melodii simple cantate la pian.

Pianul va avea posibilitatea ca la apasarea butoanelor destinate rolului de clape, sa redea sunetele corespunzatoare. Deasemenea, pianul va avea posibilitatea 
si de a reda melodii automat. Pianul poate fi resetat, pornit sau oprit. Cand pianul va fi on, va avea un led corespunzator, semnalizand faptul ca este aprins.

Descriere implementare
In implementarea acestui proiect care consta in redarea anumitor note muzicale am definit pentru inceput notele fundamentale: DO, RE, MI, FA, SO, LA, SI dar si 
tonurile pentru melodii.

Pianul este capabil sa redea si melodii, iar pentru acest lucru exista un vector cu notele specifice melodiei. Pentru a porni pianul, trebuie apasat butonul de on 
iar led-ul se va aprinde semnaland faptul ca pianul este functionabil. Celelalte note sau functionalitati nu vor merge cand led-ul este stins.

Pentru a canta la pian se vor folosi butoanele pentru note, cu varianta de redare fie de pian, fie de trompeta.

Redarea melodiei se va face apasand butonul corespunzator. Pentru a opri melodia si a putea sa fie redata urmatoarea atunci se va apasa butonul de NEXT.
