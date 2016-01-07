//basis for using sqlite database
//will act as the corporate data warehouse for the player
//to compile, use the terminal and type g++ player_db.cpp -l sqlite3

#include <stdio.h>
#include <sqlite3.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char* argv[])
{
   using namespace std;
   char companyname[80];
   char company_db[85];

   cout << "Enter the name of your company: ";
   cin.getline(companyname,80);  
   strcpy(company_db,companyname);
   strcat(company_db,".db");
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open(company_db, &db);

   if( rc ){
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      exit(0);
   }else{
      fprintf(stderr, "Opened database successfully\n");
   }
   sqlite3_close(db);
}
