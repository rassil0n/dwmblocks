//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/     /*Update Interval*/ /*Update Signal*/
    {"",        "dwmb-mpd",          1,                  15},
    {"",        "dwmb-ncspot",       1,                  30},
    {"",        "dwmb-mail",       180,                  30},
    {"",        "dwmb-apt",          0,                  13},
    {"",        "dwmb-rss",          0,                  12},
    {"",        "dwmb-mounts",       0,                  11},
    {"",        "dwmb-calcurse",    60,                  14},
    {"",        "dwmb-volume",       0,                  10},
    {"",        "dwmb-backlight",    0,                  22},
    {"",        "dwmb-disk",         5,                  16},
    {"",        "dwmb-ram",          5,                  17},
    {"",        "dwmb-cpu",          5,                  18},
    {"",        "dwmb-battery",      5,                  19},
    {"",        "dwmb-date",        30,                  20},
    {"",        "dwmb-kbselect",     0,                  29},
    {"",        "dwmb-xbanish",      0,                  30},

	// not used
    // {"",        "dwmb-nettraf",      1,                  21},
    // {"",        "dwmb-backlight",    0,                  22},
    // {"",        "dwmb-internet",    10,                  23},
    // {"",        "dwmb-cmus",         1,                  24},
    // {"",        "dwmb-mocp",         1,                  25},
    // {"",        "dwmb-forecast", 18000,                  26},
    // {"",        "dwmb-ip",           0,                  27},
    // {"",        "dwmb-iplocate",     0,                  28},
    // {"",        "dwmb-kbselect",     0,                  29},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
static unsigned int delimLen = 2;


// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }
