/* PlayListTester.h tests the PlayList class.
	Peter Jung
 * Date: 7/24/2021 (lol)
 * Begun by: Joel Adams, for CS 112 at Calvin University.
 */

#ifndef PLAYLISTTESTER_
#define PLAYLISTTESTER_

#include <string>
#include "PlayList.h"
using namespace std;

class PlayListTester {
public:
	void runTests();
	void testConstructors();
	void testSearchByArtist();
	void testSearchByYear();
	void testSearchByTitlePhrase();
	void testAddSong();
	void testRomoveSong();
};

#endif /*PLAYLISTTESTER_*/
