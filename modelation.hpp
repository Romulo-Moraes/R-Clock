#define pixel_on "\033[32;104m  \033[0m"
#define pixel_off "  "

using namespace std;

string arrayOfDisplays[11][5][3] = {
    // Zero
    {{pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // One
    {{pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on}},

    // Two
    {{pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_off},
     {pixel_on, pixel_on, pixel_on}},

    // Three
    {{pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // Four
    {{pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on}},

    // Five
    {{pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_off},
     {pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // Six
    {{pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_off},
     {pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // Seven
    {{pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_off, pixel_off, pixel_on}},

    // Eight
    {{pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // Nine
    {{pixel_on, pixel_on, pixel_on},
     {pixel_on, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on},
     {pixel_off, pixel_off, pixel_on},
     {pixel_on, pixel_on, pixel_on}},

    // Colon
    {{pixel_off, pixel_off, pixel_off},
     {pixel_off, pixel_on, pixel_off},
     {pixel_off, pixel_off, pixel_off},
     {pixel_off, pixel_on, pixel_off},
     {pixel_off, pixel_off, pixel_off}}

};
