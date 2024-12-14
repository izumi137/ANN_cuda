#include "Dataloader.h"



vector<BaseData> load_data(const string& filepath)
{
    vector<BaseData> all_data;

    ifstream file(filepath, ios::binary);
    if (!file.is_open()) {
        throw runtime_error("Cannot open file: " + filepath);
    }
    
    string line;

    int count = 0;

    while (getline(file, line)) {
        if (line.empty()) continue; 
        BaseData data(line);
        all_data.push_back(data);
        count++;
    }
    file.close();
    cout << "Loaded " << count << " data from " << filepath;
    return all_data;
}

void print_sample(const BaseData& data)
{
    vector<vector<int>> image = data.getImage();
    int label = data.getLabel();

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << image[i][j] << ' ';
        }
        cout << endl;
    }

    cout << "Label: " << label;
}