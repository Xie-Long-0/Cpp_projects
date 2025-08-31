#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// 前景色
typedef enum
{
    VF_None,

    VF_BLACK,
    VF_RED,
    VF_GREEN,
    VF_YELLOW,
    VF_BLUE,
    VF_MAGENTA,
    VF_CYAN,
    VF_WHITE,
    VFL_BLACK,
    VFL_RED,
    VFL_GREEN,
    VFL_YELLOW,
    VFL_BLUE,
    VFL_MAGENTA,
    VFL_CYAN,
    VFL_WHITE,

    VF_MAX
} ForeColorIndex;

// 背景色
typedef enum
{
    VB_None,

    VB_Black,
    VB_Red,
    VB_Green,
    VB_Yellow,
    VB_Blue,
    VB_Magenta,
    VB_Cyan,
    VB_White,
    VBL_Black,
    VBL_Red,
    VBL_Green,
    VBL_Yellow,
    VBL_Blue,
    VBL_Magenta,
    VBL_Cyan,
    VBL_White,

    VB_MAX
} BackColorIndex;

typedef struct
{
    ForeColorIndex index;
    const char *color;
} VFColor;

typedef struct
{
    BackColorIndex index;
    const char *color;
} VBColor;

static const VFColor VF_Colors[] = {
    { VF_None,     "\033[0m"   },
    { VF_BLACK,    "\033[30m"  },    // 前景色：黑色
    { VF_RED,      "\033[31m"  },    // 前景色：红色
    { VF_GREEN,    "\033[32m"  },    // 前景色：绿色
    { VF_YELLOW,   "\033[33m"  },    // 前景色：黄色
    { VF_BLUE,     "\033[34m"  },    // 前景色：蓝色
    { VF_MAGENTA,  "\033[35m"  },    // 前景色：洋红
    { VF_CYAN,     "\033[36m"  },    // 前景色：青色
    { VF_WHITE,    "\033[37m"  },    // 前景色：白色
    { VFL_BLACK,   "\033[90m"  },    // 前景色：亮黑色
    { VFL_RED,     "\033[91m"  },    // 前景色：亮红色
    { VFL_GREEN,   "\033[92m"  },    // 前景色：亮绿色
    { VFL_YELLOW,  "\033[93m"  },    // 前景色：亮黄色
    { VFL_BLUE,    "\033[94m"  },    // 前景色：亮蓝色
    { VFL_MAGENTA, "\033[95m"  },    // 前景色：亮洋红
    { VFL_CYAN,    "\033[96m"  },    // 前景色：亮青色
    { VFL_WHITE,   "\033[97m"  },    // 前景色：亮白色
    { VF_MAX,      "\033[0m"   }
};

static const VBColor VB_Colors[] = {
    { VB_None,     "\033[0m"   },
    { VB_Black,    "\033[40m"  },    // 背景色：黑色
    { VB_Red,      "\033[41m"  },    // 背景色：红色
    { VB_Green,    "\033[42m"  },    // 背景色：绿色
    { VB_Yellow,   "\033[43m"  },    // 背景色：黄色
    { VB_Blue,     "\033[44m"  },    // 背景色：蓝色
    { VB_Magenta,  "\033[45m"  },    // 背景色：洋红
    { VB_Cyan,     "\033[46m"  },    // 背景色：青色
    { VB_White,    "\033[47m"  },    // 背景色：白色
    { VBL_Black,   "\033[100m" },    // 背景色：亮黑色
    { VBL_Red,     "\033[101m" },    // 背景色：亮红色
    { VBL_Green,   "\033[102m" },    // 背景色：亮绿色
    { VBL_Yellow,  "\033[103m" },    // 背景色：亮黄色
    { VBL_Blue,    "\033[104m" },    // 背景色：亮蓝色
    { VBL_Magenta, "\033[105m" },    // 背景色：亮洋红
    { VBL_Cyan,    "\033[106m" },    // 背景色：亮青色
    { VBL_White,   "\033[107m" },    // 背景色：亮白色
    { VB_MAX,      "\033[0m"   }
};

// 打印指定前景色和背景色组合的文字
void printColoredText(const char *text, VFColor foreground, VBColor background)
{
    printf("%s%s%s%s", foreground.color, background.color, text, VF_Colors[VF_None].color);
}

// 打印256颜色的文字
void print256ColoredText(const char *text, int foreground, int background)
{
    if (foreground < 0)
        foreground = 0;
    if (foreground > 255)
        foreground = 255;
    if (background < 0)
        background = 0;
    if (background > 255)
        background = 255;
    // 前景色：38，背景色：48
    printf("\033[38;5;%dm\033[48;5;%dm%s\033[0m", foreground, background, text);
}

int main(int argc, char *argv[])
{
    const char *text = "打印终端支持的颜色";

    for (int i = VF_None; i < VF_MAX; ++i)
    {
        for (int j = VB_None; j < VB_MAX; ++j)
        {
            printColoredText(text, VF_Colors[i], VB_Colors[j]);
        }
    }

    srand((unsigned int)time(NULL));
    for (int i = 0; i < 256; i++)
    {
        // 随机颜色
        int r = rand() % 256;
        print256ColoredText(text, r, (r + i) % 256);
    }
    printf("\033[0m\r\n");

    return 0;
}
