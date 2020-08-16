class Gamers {
  events:
    string e3[] = {"2019", "2018", "2017", "2016", "2015", "2014", "2013", "2012", "2011", "2010"};
};

int evnt;

cin >> evnt; // 2 (which will become 1 for the array)

string thatEvent = Gamers.events.e3[--evnt];

if(!thatEvent) return "The events only go back to 2010";

cout << thatEvent; // 2018

///

class Business {
  public: // Can be accessed
    string employees[] = {"Nick", "Seth", "Mia"};
  private: // Cannot be accessed
    double salary[] = {16.99, 14.99, 17.99};
};
