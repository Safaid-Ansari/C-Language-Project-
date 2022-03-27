/* Count chars, spaces, tabs and newlines in a file */
# include "stdio.h"
main( )
{
 FILE *fp ;
 char ch ;
 int nol=0; 
 int nots=0; 
 int nob=0;
 int noc=0;
 fp = fopen ( "Project.txt", "r" ) ;
 while ( 1 )
 {
 ch = fgetc ( fp ) ;
 if ( ch == EOF )
 break ;
 noc++ ;
 if ( ch == ' ' )
 nob++ ;
 if ( ch == '\n' )
 nol++ ;
 if ( ch == '\t' )
 nots++ ;
 }
 fclose ( fp ) ;
 printf ( "\nNumber of characters = %d", noc ) ;
 printf ( "\nNumber of blanks = %d", nob ) ;
 printf ( "\nNumber of tabs = %d", nots ) ;
 printf ( "\nNumber of lines = %d", nol ) ;
} 
