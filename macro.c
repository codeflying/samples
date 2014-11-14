#include <stdio.h>

#define str(s) #s
#define ASSIGN_PROPERTY_TO_PERSON(x) \
    do { \
    p.x = str(x); \
    } while(0);

#define ASSIGN_PROPERTY_TO_FILE(x) \
    do { \
    file.x = dict[@str(x)];\
    } while(0);

#define ASSIGN_PROPERTY_TO_FILE_WITHOUT_STR(x) \
    do { \
    file.x = dict[@#x]; \
    } while(0);
#define ASSIGN_PROPERTY_TO_FILE_WITH_QUOTE(x) \
    do { \
    file.x = dict[@"x"]; \
    } while(0);
#define ASSIGN_PROPERTY(x) file.x=dict[@#x]

#define sin(x) sin##x

struct Person
{
    char *name;
    char *gender;
};

int main(int argc, char *argv[])
{
    struct Person p;
    ASSIGN_PROPERTY_TO_PERSON(name);
    ASSIGN_PROPERTY_TO_FILE(name);
    ASSIGN_PROPERTY_TO_FILE_WITHOUT_STR(gender);
    ASSIGN_PROPERTY_TO_FILE_WITH_QUOTE(gender);
    ASSIGN_PROPERTY(gender);
    int sin(God) = 2;
    return 0;
}
