/*	JUP_Global - description
 *
 *	Purpose: Define shapes of programmable cursor forms 1-7.
 *
 *	Written by: Bob Deen
 *	Date:	    February, 1990
 *
 */

/* A variety of intensities are used in the hope that the cursor will	*/
/* always be visible no matter what the stretch (not always, but at	*/
/* least most of the time).  The intensities are set by make_cursor()	*/
/* based on the current display mode and whether the cursor is on the	*/
/* image or overlay planes.						*/

#define OO 0		/* Zero (transparent) */
#define XX 1		/* White (or desired cursor color) */
#define HH 2		/* Half intensity */
#define BB 3		/* (almost) Black (not transparent) */

globaldef int jup_cursorshape[7][20][20] = {
{  /* Cursor 1: 5 pixels in a + shape with darkness around */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO },
   { OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,HH,XX,HH,OO },
   { OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO }
},
{  /* Cursor 2: solid + */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,BB,HH,HH,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,HH,HH,BB,OO },
   { OO,OO,HH,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,HH,OO },
   { OO,OO,BB,HH,HH,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,HH,HH,BB,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO }
},
{  /* Cursor 3: box with center dot */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,OO }
},
{  /* Cursor 4: + with center missing */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,BB,HH,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,HH,BB,OO },
   { OO,OO,HH,XX,XX,XX,XX,XX,XX,OO,OO,OO,XX,XX,XX,XX,XX,XX,HH,OO },
   { OO,OO,BB,HH,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,HH,BB,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO }
},
{  /* Cursor 5: + using double lines */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,OO,HH,BB,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,BB,HH,HH,HH,HH,HH,BB,XX,OO,XX,BB,HH,HH,HH,HH,HH,BB,OO },
   { OO,OO,HH,XX,XX,XX,XX,XX,XX,OO,OO,OO,XX,XX,XX,XX,XX,XX,HH,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,HH,XX,XX,XX,XX,XX,XX,OO,OO,OO,XX,XX,XX,XX,XX,XX,HH,OO },
   { OO,OO,BB,HH,HH,HH,HH,HH,BB,XX,OO,XX,BB,HH,HH,HH,HH,HH,BB,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,OO,XX,HH,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,OO,HH,BB,OO,OO,OO,OO,OO,OO,OO }
},
{  /* Cursor 6: X */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,OO },
   { OO,OO,BB,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,BB,OO },
   { OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO },
   { OO,OO,OO,OO,HH,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,HH,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,XX,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,HH,XX,OO,OO,OO,OO,OO,OO,OO,OO,OO,XX,HH,OO,OO,OO },
   { OO,OO,OO,HH,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,HH,OO,OO },
   { OO,OO,BB,XX,HH,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,HH,XX,BB,OO },
   { OO,OO,HH,BB,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,BB,HH,OO }
},
{  /* Cursor 7: large box with large + in it (window pane) */
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO,OO },
   { OO,OO,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,BB,HH,XX,HH,BB,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,BB,XX,BB,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO,OO,OO,OO,OO,OO,OO,XX,OO },
   { OO,OO,XX,BB,OO,OO,OO,OO,OO,BB,XX,BB,OO,OO,OO,OO,OO,BB,XX,OO },
   { OO,OO,XX,HH,BB,OO,OO,OO,BB,HH,XX,HH,BB,OO,OO,OO,BB,HH,XX,OO },
   { OO,OO,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,XX,OO }
}
};
