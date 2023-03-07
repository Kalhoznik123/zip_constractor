#pragma once

#include "nlohmann/json.hpp"
#include "zip_builder.h"
#include <iostream>

class JsonHandler {

    using json = nlohmann::json;

  private:
    Zip_builder& zip_builder_;

  public:
    JsonHandler(Zip_builder zip_builder) : zip_builder_(zip_builder){};

    void JsonParse(std::istream& in);
};
