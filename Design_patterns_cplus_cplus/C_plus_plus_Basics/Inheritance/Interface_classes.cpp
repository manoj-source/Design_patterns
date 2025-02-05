/*
   1) An interface class is a class that has no member variables, And where all the functions are pure virtual functions, In other
      words class is purely a definiton and no actually implementation. Interfaces are useful when you want to define the functionality
      that derived classes must implemented, But leave the details of how derived class implements the functionality entirely upto
      derived classes.

    2) Interface class arestarted with "I".
 
 */

 class IError
 {
    public :
              virtual bool open log (const char* filename) = 0;
              virtual bool closelogs() = 0;
              virtual bool writeerror( const char *errormessage) = 0;
 }
 