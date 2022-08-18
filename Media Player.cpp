#include <iostream>
using namespace std;

class MP3 {
  public: 
    MP3(string t, int l, string g, string al, string ar) {
      title = t;
      album = al;
      length = l;
      genre = g;
      artist = ar;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    int GetLength() {
      return length;
    }

    void SetLength(int new_length) {
      length = new_length;
    }

    string GetGenre() {
      return genre;
    }

    void SetGenre(string new_genre) {
      genre = new_genre;
    }

    string GetAlbum() {
      return album;
    }

    void SetAlbum(string new_album) {
      album = new_album;
    }
  
    string GetArtist() {
      return artist;
    }

    void SetArtist(string new_artist) {
      artist = new_artist;
    }
  
  private:
    string title;
    int length;
    string genre;
    string album;
    string artist;
};

class Podcast : public MP3 {  
  public:
    Podcast(string t, int l, string g, string n, string d) : MP3(t, l, g, n, d) {
      name = n;
      date = d;
    }

    void DisplayTitle() {
      cout << "The title is " << MP3::GetTitle() << endl;
    }

    void DisplayLength() {
      cout << "The length is " << MP3::GetLength() << endl;
    }

    void DisplayGenre() {
      cout << "The genre is " << MP3::GetGenre() << endl;
    }

    void DisplayName() {
      cout << "The name is " << name << endl;
    }

    void DisplayDate() {
      cout << "The date is " << date << endl;
    }

  private:
    string name;
    string date;
};

int main() {
	Podcast p("The Verdict", 2940, "True Crime", "The Dropout", "5 Jan 2022");
	p.DisplayTitle();
	p.DisplayLength();
	p.DisplayGenre();
	p.DisplayName();
	p.DisplayDate();
	return 0;
}
