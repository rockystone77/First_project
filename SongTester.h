/* SongTester.h declares a test-class for class Song.
 * Peter Jung
 * Date: 7/25/2021 (lol)
 * Begun by: Joel Adams, for CS 112 at Calvin University.
 */

#ifndef SONGTESTER_H_
#define SONGTESTER_H_

#include "Song.h"

class SongTester {
public:
	void runTests();
	void testConstructors();
	void testReadFrom();
	void testWriteTo();
	void testoperand();
};

#endif /* SONGTESTER_H_ */
