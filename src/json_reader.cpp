#include "json_reader.h"

void JsonHandler::JsonParse(std::istream& in) {

    json json = json::parse(in);
// это тут не нужно это для тестирования
    std::cout <<std::setw(4)<< json
              << '\n';
}