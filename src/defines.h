#ifndef _DEFINES_H_
#define _DEFINES_H_

#define ERR_CODE        char
#define RETURN_SUCCESS  0
#define RETURN_FAILURE  -1

#define ERROR(msg);     fprintf(stderr, "ERROR in file: '%s', line %d:\n\t%s\n", __FILE__, __LINE__, msg);
#define WARNING(msg);   fprintf(stderr, "WARNING in file '%s', line %d:\n\t%s\n", __FILE__, __LINE__, msg);
#define DEBUG(msg);     fprintf(stderr, "DEBUG in file '%s', line %d:\n\t%s\n", __FILE__, __LINE__, msg);


#endif //_DEFINES_H_
