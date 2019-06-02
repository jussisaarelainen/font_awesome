#pragma once

namespace font_awesome {

    extern const char*   fabrands400_ttf;
    const int            fabrands400_ttfSize = 129344;

    extern const char*   faregular400_ttf;
    const int            faregular400_ttfSize = 34092;

    extern const char*   fasolid900_ttf;
    const int            fasolid900_ttfSize = 186424;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 3;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);

}

namespace font_awesome {

    using Font = juce::Font;

    const Font &getFontRegular();
    const Font &getFontSolid();
    
    inline const Font &getFont(bool isSolid = false)
    {
        return isSolid ? getFontSolid() : getFontRegular();
    }

}
