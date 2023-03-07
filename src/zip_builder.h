#pragma once
#include "domain.h"
#include <string>
#include <unordered_map>
#include <vector>

class Zip_builder {

  public:
    Zip_builder() = default;

    Zip_builder(const std::unordered_map<std::string,Folder>& folders_to_files);

    void AddFolder(Folder folder);

  private:
    std::unordered_map<std::string, Folder> folders_to_files;
};
