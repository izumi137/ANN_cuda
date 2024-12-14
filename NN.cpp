
#include <iostream>
#include <opencv2/opencv.hpp>
#include "Dataloader.h"

int main()
{
    // Load data
    cout << "Loading data...\n";
    vector<BaseData> train_data = load_data(TRAINFILE);
    vector<BaseData> test_data = load_data(TESTFILE);

    print_sample(train_data[0]);
    return 0;

}

