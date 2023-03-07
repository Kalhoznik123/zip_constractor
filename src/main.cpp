#include "json_reader.h"
#include "zip_builder.h"
#include <fstream>
#include <iostream>

// дописать заполнение зип билдера
// а заодно и подумать над классом zip_extracter для распаковки файлов
// добавить git репозиторий
int main() {

    Zip_builder builder;

    JsonHandler hand(builder);

    std::fstream in("settings.json", std::ios::in);
   
   
    if (in) {
        hand.JsonParse(in);
    }else{
        abort();
    }
}