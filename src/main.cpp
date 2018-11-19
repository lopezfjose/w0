
#undef UNICODE

#include <cstdlib>
#include <cstring>
#include <cmath>
#include <ctime>

#include <functional>
#include <fstream>
#include <iostream>
#include <vector>


int main()
{
    FILE* outputFile = fopen("a.exe", "w+");

    const std::vector<int> headerBytes = {
        0x4D,
        0x5A,
        0x90,
        0x00,
        0x03,
        0x00,
        0x00,
        0x00,
        0x04,
        0x00,
        0x00,
        0x00,
        0xFF,
        0xFF,
        0x00,
        0x00
    };

    for (auto& byte : headerBytes) {
        fprintf(outputFile, "%c", byte);
    }

    fclose(outputFile);

    return EXIT_SUCCESS;
}
