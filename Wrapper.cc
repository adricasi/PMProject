#include "MapClass.h"
#include "Wrapper.h"

extern "C" {
        MapClass* newMapClass(int row, int columns) {
                return new MapClass(row, columns);
        }

        void MapClass_createMap(MapClass* v){
            v->createMap();
        }

        void MapClass_printMap(MapClass* v){
            v->printMap();
        }
}