/* Song.h declares a class for storing song information.
 * Peter Jung
 * Date: 7/25/2021 (lol)
 * Begun by: Joel Adams, for CS 112 at Calvin University.
 */

#ifndef SONG_H_
#define SONG_H_

#include <string>
#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

class Song {
public:
	Song();
	Song(const string& title, const string& artist, unsigned year);
	string getTitle() const;
	string getArtist() const;
	unsigned getYear() const;
	void readFrom(istream& in);
	void writeTo(ostream& out) const;
	bool operator==(const Song& song2);
	bool operator!=(const Song& song2);
private:
	string   myTitle;
	string   myArtist;
	unsigned myYear;
};

#endif /* SONG_H_ */
