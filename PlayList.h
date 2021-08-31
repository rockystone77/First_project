/* PlayList.h declares class PlayList.
 * Peter Jung
 * Date: 7/27/2021 (lol)
 * Begun by: Joel Adams, for CS 112 at Calvin University.
 */

#ifndef PLAYLIST_H_
#define PLAYLIST_H_

#include <string>
#include <cassert>
#include <vector>
#include "Song.h"

using namespace std;

class PlayList {
public:
   PlayList(const string& fileName);
   unsigned getNumSongs() const;
   vector<Song>searchByArtist(const string& artist) const;
   vector<Song>searchByYear(unsigned year) const;
   vector<Song>searchByTitlePhrase(const string& phrase) const;
   void addSong(const Song& newSong);
   void removeSong(const Song& aSong);
   void save() const;
private:
   vector<Song> mySongs;
};

#endif /*PLAYLIST_H_*/
