/*
Lab12, the purpose of this lab is to improve your skills in handling c strings * with pointers. * use of : strlen , string concatenation strcat, compare strcmp, copy strcpy and search strrchr #include #include #include using namespace std; * Create a method that prompts the user for only lowercase letters to represent * a name. * Start a Label, then prompt the user to enter a name * Make a static char array to represent the name with size 30 * use scanf to scan for the name, specifier for char is %s * Declare a flag with a premise that the name is not all lowercase * Loop the length of the name, use strlen(name) for the length of name * The loop checks if the name is all lowercase letters * If the user provides invalid characters other than lowercase, goto label * @return pointer of Char char * setName() { * Similar to the previous method , * It restricts providing characters other than digits * @return char * setBadge() { Similar to the previous method, * It restricts providing characters other than uppercase * @return char * setComp() {
int main(int argc, char** argv) { // Declare a name pointer and set it using setName char*name setName(); // Declare a badge pointer and set it using the method // Declare a company pointer and set it using the method // Declare a character array of size 30 char email[30]; // COPY name TO email 1/Concatenate email with '.' I/Concatenate badge with email I/Concatenate @ with email //Concatenate company name with email // Add a domain by concatenating .edu with email // Search for the last occurrence of . //The method returns a pointer pointing to the beginning of .edu // Change the values next of the pointer to make '.edu' all uppercase // Subtract -32 from the letters and that will make it uppercase // answer will be .EDU // Use strcmp to compare the previous pointer to ".EDU" // Print the email using printf, the specifier is %s // an outcome will look like : sadiq.1234@OKSTATE.EDU return 0;
*/

#include <cstdlib>
#include <iostream>
#include <cstring>

using namespace std;

char * setName(){
  
   // --- starting a label & then prompt user to enter name
  
   lowercase:
      
       printf("\nEnter a name: ");
      
       static char name[30];   // -- A character static array of size 30 as specified in statement
      
       scanf("%s", &name);       // -- using scanf to scan for the name
      
       bool IsLowercase = false;   // -- declaring a flag with premisis that name is not all lowercase
      
       // ---- Loop the length of the name
      
       for(int i=0; i<strlen(name); i++){
          
           // --- check that whether all characters are lowercase, if that is not the case, go to lowercase label again
           if(!(name[i] >= 'a' && name[i] <= 'z')){
               printf("Invalid character!\n");
               goto lowercase;
           }
       }
       // --- return pointer of character
       return name;
}

// --- The method setBadge with same specifications as above method, but it restricts digits to be entered

char * setBadge(){
  
   // --- starting a label & then prompt user to enter badge
   numeric:
      
       printf("\nEnter a badge: ");
      
       static char badge[30];
       scanf("%s", &badge);
       bool IsDigit = false;  
      
       // ---- Loop the length of the name
      
       for(int i=0; i<strlen(badge); i++){
          
           // --- check that whether all characters are numeric, if that is not the case, go to numeric label again
           if(!(badge[i] >= '0' && badge[i] <= '9')){
               printf("Invalid character!\n");
               goto numeric;
           }
       }
       // --- return pointer of character
       return badge;
}

// --- The below method with same specifications as above two but restricts uppercase

char * setComp(){

   uppercase:
      
       printf("\nEnter a company: ");
      
       static char company[30];
       scanf("%s", &company);
       bool IsUppercase = false;  
      
       // ---- Loop the length of the name
      
       for(int i=0; i<strlen(company); i++){
          
           // --- check that whether all characters are uppercase, if that is not the case, go to uppercase label again
           if(!(company[i] >= 'A' && company[i] <= 'Z')){
               printf("Invalid character!\n");
               goto uppercase;
           }
       }
       // --- return pointer of character
       return company;  
}

int main(int argc, char ** argv){
  
   // Declaring a name pointer & set it using setName method
  
   char *name = setName();
  
   // Declaring a badge pointer & set it using method
  
   char *badge = setBadge();
  
   // Declaring a company pointer & set it using method
  
   char *company = setComp();
  
   // Declaring a character array of size 30
  
   char email[30];
  
   // Copy name to email -- using strcpy as to use in statement
  
   strcpy(email, name);
  
   // Concatenating email with '.' -- using strcat
  
   strcat(email, ".");
  
   // Concatenating badge with email
  
   strcat(email, badge);
  
   // Concatenating @ wth email
  
   strcat(email, "@");
  
   // Concatenating company name with email
  
   strcat(email, company);
  
   // Adding domain by concatenating .edu with email
  
   strcat(email, ".edu");
  
   // Searching for last occurrence of '.'
  
   char *lastDot = strrchr(email, '.');
  
   // Change the value next of pointer to make .edu all uppercase by subtracting letters from 32

   for(int i=1; i<strlen(lastDot); i++){
      
       lastDot[i] -= 32;
   }
  
   // Using strcmp to compare the previous pointer to ".EDU"
  
   strcmp(lastDot, ".EDU");

   if(res == 0)
   printf("equal");
else
printf("Not equal");
  
   // Print the email using printf
      
   printf("\n%s",email);
  
   return 0;
}
