#ifndef NOTEIO_H
#define NOTEIO_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Purpose:
// 	handle writing to, reading from,
// 	saving, and deleting files
// 	to and from the local system of the 
// 	user. 

// Assumes the use of C strings

// Assumes a destination folder 
// already provided in install for storing note files


/*
*   Loads content from specified file from current working directory into buffer.
*
*   This may not be necessary, since input.c uses get_input which seems very similar.
*/
char* load_file(const char *filename);

/*
*   Basic file saving. Takes what is in buffer, writes to a file, then closes the file.
*/
int save_file(const char *filename, const char *content);

/*
*   Allows opening of an existing file. Currently calls load_file to get content of the file into buffer.
*   Depending on the applicability of get_input to handle the load_file functionality, this may change.
*/
int open_file(const char *filename, char *buffer);

/*
*   Clears what is currently in buffer, essentially creating a blank slate.
*/
void new_note(char *buffer);

/*
* TODO:
*   new_note_set
*   save_note_set
*   open_note_set
*
*   possibly storing files as binary data rather than text for optimizaion
*/
#endif
