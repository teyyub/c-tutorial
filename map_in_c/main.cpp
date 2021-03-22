#include <iostream>

#define MAPSIZE 30

struct key_value
{
    int key;
    char* value;
};

struct key_value kvmap[MAPSIZE];
void printMap();
void initMap();
char* readMap(int key);
int main() {
    initMap();
    printMap();
    printf("==========================");
    printf("%s\n",readMap(5));


    return 0;
}
void printMap(){
    int i;
    for(i=0; i<MAPSIZE; i++)
    {
        printf("%d->%s\n",kvmap[i].key,kvmap[i].value);
    }
}
void initMap(){
    int i;
    for(i=0; i<MAPSIZE; i++)
    {
        kvmap[i].key=MAPSIZE-i-1;
        kvmap[i].value="unset";
    }
    kvmap[0].value="zero";
    kvmap[1].value="one";
    kvmap[2].value="two";
    kvmap[3].value="three";
    kvmap[4].value="four";
    kvmap[5].value="five";
    kvmap[6].value="six";
    kvmap[7].value="seven";
    kvmap[8].value="eight";
    kvmap[24].value="find this"; // it has the key "5"

}
char* readMap(int key)
{
    int i=0;
    while ((i<MAPSIZE-1) && (kvmap[i].key!=key))
    {   printf("Not in %d\n", i);
        ++i;
    }

    // will return last entry if key is not present
    return kvmap[i].value;
}

