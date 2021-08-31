/* PlayListTester.cpp defines the PlayList test-methods.
 * Peter Jung
 * Date: 7/27/2021(lol)
 * Begun by: Joel Adams, for CS 112 at Calvin University.
 */

#include "PlayListTester.h"
#include <iostream>
using namespace std;

void PlayListTester::runTests() {
	cout << "\nTesting class PlayList..." << endl;
	testConstructors();
	testSearchByArtist();
	testSearchByYear();
	testSearchByTitlePhrase();
	testAddSong();
	testRomoveSong();
	cout << "All tests passed!" << endl;
}

void PlayListTester::testConstructors() {
	cout << "- constructors..." << flush;
	PlayList pList("testSongs.txt");
	assert( pList.getNumSongs() == 4 );
	cout << " 0 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testSearchByArtist() {
	cout << "- searchByArtist()... " << flush;
	// load a playlist with test songs
	PlayList pList("testSongs.txt");

	// empty case (0 artists)
	vector<Song> searchResult = pList.searchByArtist("Cream");
	assert( searchResult.size() == 0 );
	cout << " 0 " << flush;

	// case of 1 artist
	searchResult = pList.searchByArtist("Baez");
	assert( searchResult.size() == 1 );
	assert( searchResult[0].getTitle() == "Let It Be\r" );
	cout << " 1 " << flush;

	// case of 2 artists
	searchResult = pList.searchByArtist("Beatles");
	assert( searchResult.size() == 2 );
	assert( searchResult[0].getTitle() == "Let It Be\r" );
	assert( searchResult[1].getTitle() == "Penny Lane\r" );
	cout << " 2 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testSearchByYear() {
	cout << "- searchByYear()... " << flush;
	// load a playlist with test songs
	PlayList pList1("testSongs.txt");

	// empty case (0 artists)
	vector<Song> searchResult = pList1.searchByYear(2015);
	assert( searchResult.size() == 0 );
	cout << " 0 " << flush;

	// case of 1 artist
	searchResult = pList1.searchByYear(2012);
	assert( searchResult.size() == 1 );
	assert( searchResult[0].getTitle() == "Call Me Maybe\r" );
	cout << " 1 " << flush;

	// case of 2 artists
	searchResult = pList1.searchByYear(1967);
	assert( searchResult.size() == 2 );
	assert( searchResult[0].getTitle() == "Let It Be\r" );
	assert( searchResult[1].getTitle() == "Penny Lane\r" );
	cout << " 2 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testSearchByTitlePhrase() {
	cout << "- searchByTitle()... " << flush;
	// load a playlist with test songs
	PlayList pList2("testSongs.txt");

	// empty case (0 artists)
	vector<Song> searchResult = pList2.searchByTitlePhrase("Bob");
	assert( searchResult.size() == 0 );
	cout << " 0 " << flush;

	// case of 1 artist
	searchResult = pList2.searchByTitlePhrase("Call Me");
	assert( searchResult.size() == 1 );
	assert( searchResult[0].getArtist() == "Carly Rae Jepsen\r" );
	cout << " 1 " << flush;

	// case of 2 artists
	searchResult = pList2.searchByTitlePhrase("Let");
	assert( searchResult.size() == 2 );
	assert( searchResult[0].getArtist() == "The Beatles\r" );
	assert( searchResult[1].getArtist() == "Joan Baez\r" );
	cout << " 2 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testAddSong(){
	cout << "- addSong()... " << flush;
	//add a Song
	PlayList pList3("testSongs.txt");
	Song s("hello", "peter", 2021);
	Song s1("bye", "peter", 2020);
	//add one song
	pList3.addSong(s);
	vector<Song> searchResult = pList3.searchByArtist("peter");
	assert( searchResult.size() == 1 );
	cout << " 0 " << flush;
	//add another song
	pList3.addSong(s1);
	searchResult = pList3.searchByArtist("peter");
	assert( searchResult.size() == 2 );
	cout << " 1 " << flush;

	cout << " Passed!" << endl;
}

void PlayListTester::testRomoveSong() {
	cout << "- removeSong()... " << flush;
	//add a Song
	PlayList pList4("testSongs.txt");
	Song s("hello", "peter", 2021);
	Song s1("bye", "peter", 2020);
	//add two song
	pList4.addSong(s);
	vector<Song> searchResult = pList4.searchByArtist("peter");
	assert( searchResult.size() == 1 );
	cout << " 0 " << flush;
	//add another song
	pList4.addSong(s1);
	searchResult = pList4.searchByArtist("peter");
	assert( searchResult.size() == 2 );
	cout << " 1 " << flush;
	//remove a song
	pList4.removeSong(s1);
	searchResult = pList4.searchByArtist("peter");
	assert( searchResult.size() == 1 );
	cout << " 2 " << flush;


	cout << " Passed!" << endl;
}

