#pragma once

#include "BaseData.h"
#include "Const.h"
#include <fstream>


using namespace std;

vector<BaseData> load_data(const string& filepath);
void print_sample(const BaseData& data);

