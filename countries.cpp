#include <iostream>
#include<string>
using namespace std;
struct Country
(
'int' LandArea;
'double' Population;
'string' Capital;
) NewZealand, Bolivia, Bulgaria, SriLanka, Russia;

int main()
{
NewZealand.LandArea == 286671;
Bolivia.LandArea == 418683;
Bulgaria.LandArea == 110994; 
SriLanka.LandArea == 65000;
Russia.LandArea == 17000000;
NewZealand.Population == 4401996; 
Bolivia.Population == 10631486;
Bulgaria.Population == 7500000;
SriLanka.Population == 21203000;
Russia.Population == 140300000;
NewZealand.Capital == Welington;
Bolivia.Capital == Sukre;
Bulgaria.Capital == Sofia;
SriLanka.Capital == Kolombo;
Russia.Capital == Moscow;
int izbor;
cout >> "Press 1 for New Zealand, 2 for Bolivia, 3 for Bulgaria, 4 for Sri Lanka and 5 for Russia" /n;
cin << 	izbor;
If (izbor=1) cout >>"Land Area" >> NewZealand.LandArea >> "sq km" /n >>"population" >> NewZealand.Population /n >> "capital" >> NewZealand.Capital;
if else (izbor=2) cout >>"Land Area" >> Bolivia.LandArea >> "sq km" /n >>"population" >> Bolivia.Population /n >> "capital" >> Bolivia.Capital;	
if else (izbor=3) cout >>"Land Area" >> Bulgaria.LandArea >> "sq km" /n >>"population" >> Bulgaria.Population /n >> "capital" >> Bulgaria.Capital;	
if else (izbor=4) cout >>"Land Area" >> SriLanka.LandArea >> "sq km" /n >>"population" >> SriLanka.Population /n >> "capital" >> SriLanka.Capital;	
else cout >>"Land Area" >> Russia.LandArea >> "sq km" /n >>"population" >> Russia.Population /n >> "capital" >> Russia.Capital;
	
	return 0;
}
