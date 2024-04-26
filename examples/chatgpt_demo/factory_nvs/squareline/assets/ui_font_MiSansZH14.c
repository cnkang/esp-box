/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font /Volumes/2T/development/esp-box/examples/chatgpt_demo/factory_nvs/squareline/assets/MiSans-Normal.otf -o /Volumes/2T/development/esp-box/examples/chatgpt_demo/factory_nvs/squareline/assets/ui_font_MiSansZH14.c --format lvgl -r 0x20-0x7f --symbols 步骤1使用连接至电脑；2打来目录3编辑文件设置和密码4保存5重新启动设备刘亢卷娟生日快乐永远幸福，。“”- --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_MISANSZH14
#define UI_FONT_MISANSZH14 1
#endif

#if UI_FONT_MISANSZH14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xfe, 0x20,

    /* U+0022 "\"" */
    0xb6, 0x80,

    /* U+0023 "#" */
    0x12, 0x22, 0x22, 0xff, 0x24, 0x24, 0x44, 0xff,
    0x48, 0x48, 0x48,

    /* U+0024 "$" */
    0x10, 0x21, 0xf4, 0xb9, 0x12, 0x1c, 0x1c, 0x16,
    0x26, 0x4e, 0xb3, 0x82, 0x0,

    /* U+0025 "%" */
    0x70, 0x91, 0x12, 0x24, 0x45, 0x7, 0x20, 0x8,
    0x2, 0x70, 0x51, 0x12, 0x24, 0x44, 0x87, 0x0,

    /* U+0026 "&" */
    0x3c, 0x33, 0x10, 0x88, 0xc3, 0xc3, 0x83, 0x23,
    0xa, 0x83, 0x63, 0x9e, 0x20,

    /* U+0027 "'" */
    0xe0,

    /* U+0028 "(" */
    0x29, 0x49, 0x24, 0x92, 0x24, 0x80,

    /* U+0029 ")" */
    0x89, 0x32, 0x49, 0x24, 0xa4, 0x80,

    /* U+002A "*" */
    0x23, 0x9c, 0x40,

    /* U+002B "+" */
    0x10, 0x4f, 0xc4, 0x10, 0x40,

    /* U+002C "," */
    0xe0,

    /* U+002D "-" */
    0xf8,

    /* U+002E "." */
    0x80,

    /* U+002F "/" */
    0x12, 0x22, 0x64, 0x44, 0x88, 0x80,

    /* U+0030 "0" */
    0x38, 0x8a, 0x1c, 0x18, 0x30, 0x60, 0xc1, 0x86,
    0x88, 0xe0,

    /* U+0031 "1" */
    0x7c, 0x92, 0x49, 0x24, 0x80,

    /* U+0032 "2" */
    0x7b, 0x30, 0x41, 0x4, 0x21, 0xc, 0x63, 0xf,
    0xc0,

    /* U+0033 "3" */
    0xfc, 0x21, 0x8c, 0x70, 0x20, 0x41, 0x86, 0x37,
    0x80,

    /* U+0034 "4" */
    0xc, 0x18, 0x50, 0xa2, 0x4c, 0x91, 0x62, 0xfe,
    0x8, 0x10,

    /* U+0035 "5" */
    0x7c, 0x81, 0x2, 0x7, 0xc8, 0xc0, 0x81, 0x2,
    0x88, 0xf0,

    /* U+0036 "6" */
    0x18, 0x20, 0x83, 0x7, 0x98, 0xa0, 0xc1, 0x82,
    0x88, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x10, 0x82, 0x18, 0x41, 0x8, 0x21, 0x84,
    0x0,

    /* U+0038 "8" */
    0x7d, 0x8e, 0xc, 0x1c, 0x67, 0x31, 0xc1, 0x83,
    0x8d, 0xf0,

    /* U+0039 "9" */
    0x38, 0x8a, 0xc, 0x18, 0x38, 0xcf, 0x6, 0x8,
    0x20, 0xc0,

    /* U+003A ":" */
    0x81,

    /* U+003B ";" */
    0x81, 0xc0,

    /* U+003C "<" */
    0x6, 0x31, 0x84, 0x6, 0x3, 0x1, 0x81,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0xc0, 0xe0, 0x70, 0x31, 0xc6, 0x30, 0x0,

    /* U+003F "?" */
    0x74, 0x42, 0x11, 0x18, 0x84, 0x0, 0x8,

    /* U+0040 "@" */
    0x1f, 0x4, 0x19, 0x1, 0x47, 0x99, 0x13, 0x22,
    0x64, 0x4c, 0x76, 0x40, 0xc, 0x0, 0x7c, 0x0,

    /* U+0041 "A" */
    0x8, 0x6, 0x5, 0x2, 0x83, 0x21, 0x10, 0xf8,
    0xc2, 0x41, 0x20, 0xf0, 0x20,

    /* U+0042 "B" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa1, 0xc1, 0x83,
    0xf, 0xf0,

    /* U+0043 "C" */
    0x1e, 0x63, 0x40, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x40, 0x63, 0x3e,

    /* U+0044 "D" */
    0xfc, 0x86, 0x82, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x82, 0x86, 0xfc,

    /* U+0045 "E" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+0046 "F" */
    0xfe, 0x8, 0x20, 0x83, 0xf8, 0x20, 0x82, 0x8,
    0x0,

    /* U+0047 "G" */
    0x3c, 0x63, 0x40, 0x80, 0x80, 0x87, 0x81, 0x81,
    0x41, 0x63, 0x3e,

    /* U+0048 "H" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0xff, 0x81, 0x81,
    0x81, 0x81, 0x81,

    /* U+0049 "I" */
    0xff, 0xe0,

    /* U+004A "J" */
    0x8, 0x42, 0x10, 0x84, 0x21, 0xc, 0x5c,

    /* U+004B "K" */
    0x86, 0x8c, 0x88, 0x90, 0xa0, 0xf0, 0x98, 0x88,
    0x8c, 0x86, 0x82,

    /* U+004C "L" */
    0x82, 0x8, 0x20, 0x82, 0x8, 0x20, 0x82, 0xf,
    0xc0,

    /* U+004D "M" */
    0x80, 0x70, 0x3e, 0xe, 0x85, 0xb3, 0x64, 0x98,
    0xc6, 0x31, 0x80, 0x60, 0x18, 0x4,

    /* U+004E "N" */
    0x81, 0xc1, 0xe1, 0xa1, 0x91, 0x99, 0x89, 0x85,
    0x87, 0x83, 0x81,

    /* U+004F "O" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x41, 0x31, 0x8f, 0x80,

    /* U+0050 "P" */
    0xfd, 0xe, 0xc, 0x18, 0x30, 0xff, 0x40, 0x81,
    0x2, 0x0,

    /* U+0051 "Q" */
    0x3e, 0x31, 0x90, 0x50, 0x18, 0xc, 0x6, 0x3,
    0x1, 0x47, 0x31, 0x8f, 0xc0, 0x10,

    /* U+0052 "R" */
    0xfd, 0xe, 0xc, 0x18, 0x7f, 0xa2, 0x46, 0x85,
    0xe, 0x8,

    /* U+0053 "S" */
    0x7d, 0x8e, 0x4, 0xc, 0x7, 0x1, 0x81, 0x83,
    0x8d, 0xf0,

    /* U+0054 "T" */
    0xff, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10,

    /* U+0055 "U" */
    0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81, 0x81,
    0x81, 0x42, 0x3c,

    /* U+0056 "V" */
    0xc0, 0xa0, 0x90, 0x4c, 0x22, 0x21, 0x10, 0xc8,
    0x28, 0x14, 0xe, 0x2, 0x0,

    /* U+0057 "W" */
    0x82, 0xa, 0x18, 0x51, 0x44, 0x8a, 0x24, 0x51,
    0x12, 0x48, 0xa2, 0x85, 0x14, 0x38, 0x60, 0xc3,
    0x4, 0x10,

    /* U+0058 "X" */
    0x41, 0x62, 0x26, 0x14, 0x18, 0x8, 0x14, 0x34,
    0x22, 0x43, 0x41,

    /* U+0059 "Y" */
    0x41, 0x20, 0x88, 0x84, 0x41, 0x40, 0xe0, 0x20,
    0x10, 0x8, 0x4, 0x2, 0x0,

    /* U+005A "Z" */
    0xfe, 0xc, 0x10, 0x41, 0x82, 0x8, 0x10, 0x41,
    0x83, 0xf8,

    /* U+005B "[" */
    0xf2, 0x49, 0x24, 0x92, 0x4e,

    /* U+005C "\\" */
    0x82, 0x10, 0x82, 0x10, 0x86, 0x10, 0x84,

    /* U+005D "]" */
    0xe4, 0x92, 0x49, 0x24, 0x9e,

    /* U+005E "^" */
    0x30, 0xc4, 0x93,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc8,

    /* U+0061 "a" */
    0x79, 0x10, 0x5f, 0xc6, 0x18, 0xdd,

    /* U+0062 "b" */
    0x81, 0x2, 0x5, 0xcc, 0x50, 0x60, 0xc1, 0x83,
    0x8a, 0xe0,

    /* U+0063 "c" */
    0x39, 0x18, 0x20, 0x82, 0x4, 0x4e,

    /* U+0064 "d" */
    0x2, 0x4, 0x9, 0xd4, 0x70, 0x60, 0xc1, 0x82,
    0x8c, 0xe8,

    /* U+0065 "e" */
    0x79, 0x38, 0x7f, 0x82, 0x4, 0xce,

    /* U+0066 "f" */
    0x34, 0x4f, 0x44, 0x44, 0x44, 0x40,

    /* U+0067 "g" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x3,
    0x89, 0xf0,

    /* U+0068 "h" */
    0x82, 0x8, 0x2e, 0xce, 0x18, 0x61, 0x86, 0x18,
    0x40,

    /* U+0069 "i" */
    0x9f, 0xe0,

    /* U+006A "j" */
    0x20, 0x12, 0x49, 0x24, 0x93, 0x80,

    /* U+006B "k" */
    0x82, 0x8, 0x22, 0x92, 0x8e, 0x3c, 0x92, 0x28,
    0xc0,

    /* U+006C "l" */
    0xaa, 0xaa, 0xac,

    /* U+006D "m" */
    0xb9, 0xd9, 0xce, 0x10, 0xc2, 0x18, 0x43, 0x8,
    0x61, 0xc, 0x21,

    /* U+006E "n" */
    0xbb, 0x38, 0x61, 0x86, 0x18, 0x61,

    /* U+006F "o" */
    0x38, 0x8a, 0xc, 0x18, 0x30, 0x51, 0x1c,

    /* U+0070 "p" */
    0xb9, 0x8a, 0xc, 0x18, 0x30, 0x71, 0x5c, 0x81,
    0x2, 0x0,

    /* U+0071 "q" */
    0x3a, 0x8e, 0xc, 0x18, 0x30, 0x51, 0x9d, 0x2,
    0x4, 0x8,

    /* U+0072 "r" */
    0xbc, 0x88, 0x88, 0x88,

    /* U+0073 "s" */
    0x74, 0x60, 0xc3, 0x86, 0x2e,

    /* U+0074 "t" */
    0x44, 0x4f, 0x44, 0x44, 0x44, 0x30,

    /* U+0075 "u" */
    0x86, 0x18, 0x61, 0x86, 0x1c, 0xdd,

    /* U+0076 "v" */
    0x82, 0x89, 0x12, 0x22, 0x85, 0xa, 0x8,

    /* U+0077 "w" */
    0x84, 0x28, 0xc9, 0x29, 0x25, 0x26, 0xac, 0x63,
    0xc, 0x61, 0x8c,

    /* U+0078 "x" */
    0x44, 0xd8, 0xa0, 0x83, 0x5, 0x13, 0x62,

    /* U+0079 "y" */
    0x82, 0x89, 0x12, 0x22, 0x85, 0xe, 0x8, 0x10,
    0x40, 0x80,

    /* U+007A "z" */
    0xf8, 0xc4, 0x42, 0x22, 0x1f,

    /* U+007B "{" */
    0x12, 0x22, 0x22, 0xc2, 0x22, 0x22, 0x10,

    /* U+007C "|" */
    0xff, 0xfc,

    /* U+007D "}" */
    0x84, 0x44, 0x44, 0x34, 0x44, 0x44, 0x80,

    /* U+007E "~" */
    0xe6, 0x60,

    /* U+007F "" */
    0x0,

    /* U+201C "“" */
    0xba, 0x80,

    /* U+201D "”" */
    0xb6, 0x0,

    /* U+3002 "。" */
    0x69, 0x96,

    /* U+4E50 "乐" */
    0x0, 0x63, 0xf8, 0x20, 0x6, 0x20, 0x42, 0x4,
    0x20, 0x7f, 0xf0, 0x20, 0x12, 0x42, 0x24, 0x62,
    0x2c, 0x21, 0xe, 0x0,

    /* U+4EA2 "亢" */
    0x4, 0x0, 0x20, 0xff, 0xf0, 0x0, 0x0, 0x1,
    0xf8, 0x10, 0x81, 0x8, 0x10, 0x81, 0x9, 0x20,
    0x96, 0x9, 0xc0, 0xf0,

    /* U+4EF6 "件" */
    0x10, 0x80, 0x94, 0x9, 0x20, 0x4f, 0xf2, 0x48,
    0x36, 0x41, 0xa2, 0x14, 0x10, 0x2f, 0xf9, 0x4,
    0x8, 0x20, 0x41, 0x2, 0x8, 0x0,

    /* U+4F7F "使" */
    0x10, 0x80, 0x84, 0xb, 0xfe, 0x41, 0x6, 0x7f,
    0x34, 0x4a, 0xa2, 0x44, 0xfe, 0x24, 0x81, 0x24,
    0x8, 0xc0, 0x47, 0xc2, 0xc1, 0x80,

    /* U+4FDD "保" */
    0x10, 0x0, 0xbf, 0x89, 0x4, 0x48, 0x26, 0x7f,
    0x30, 0x42, 0x82, 0x5, 0xff, 0x21, 0xc1, 0x17,
    0x9, 0x2c, 0x51, 0x12, 0x8, 0x0,

    /* U+5218 "刘" */
    0x10, 0x11, 0x1, 0x10, 0x9f, 0xe9, 0x4, 0x94,
    0x89, 0x28, 0x91, 0x89, 0x10, 0x93, 0x89, 0x24,
    0x14, 0x61, 0x80, 0xf0,

    /* U+52A8 "动" */
    0x0, 0x87, 0xc8, 0x0, 0x80, 0x3f, 0x0, 0x9f,
    0xc9, 0x20, 0x92, 0x9, 0x48, 0x94, 0x99, 0x9d,
    0x1e, 0x71, 0x2, 0xf0, 0x0,

    /* U+5377 "卷" */
    0x2, 0x2, 0x44, 0x14, 0x87, 0xfe, 0x4, 0xf,
    0xff, 0x10, 0x83, 0xfe, 0x60, 0xba, 0x8, 0x27,
    0xa1, 0x2, 0x1f, 0xc0,

    /* U+542F "启" */
    0x1, 0x0, 0x10, 0x3f, 0xf2, 0x1, 0x20, 0x13,
    0xff, 0x20, 0x2, 0xff, 0x28, 0x16, 0x81, 0x48,
    0x14, 0xff, 0x8, 0x10,

    /* U+548C "和" */
    0x3c, 0xe, 0x1f, 0x21, 0x1f, 0xd1, 0x21, 0x13,
    0x11, 0x69, 0x1a, 0x51, 0xa1, 0x12, 0x1f, 0x21,
    0x12, 0x11,

    /* U+5907 "备" */
    0x8, 0x0, 0xff, 0xc, 0x18, 0xd9, 0x0, 0x70,
    0x1e, 0xf1, 0x80, 0xc7, 0xfc, 0x22, 0x21, 0xff,
    0x8, 0x88, 0x7f, 0xc2, 0x2, 0x0,

    /* U+5A1F "娟" */
    0x40, 0x8, 0xfd, 0x10, 0xfb, 0xf5, 0x0, 0xaf,
    0xe5, 0xd, 0x3f, 0x64, 0x24, 0xfd, 0x50, 0xaa,
    0x18, 0x4e,

    /* U+5B58 "存" */
    0x8, 0x0, 0x80, 0xff, 0xf1, 0x0, 0x17, 0xe2,
    0x6, 0x60, 0xca, 0x10, 0xaf, 0xf2, 0x10, 0x21,
    0x2, 0x10, 0x27, 0x0,

    /* U+5BC6 "密" */
    0x2, 0x3, 0xff, 0x90, 0x4, 0x84, 0xa2, 0x8a,
    0x24, 0x91, 0x39, 0x43, 0x8, 0x6f, 0x80, 0x10,
    0x8, 0x88, 0x7f, 0xc0, 0x2, 0x0,

    /* U+5E78 "幸" */
    0x4, 0x0, 0x40, 0x7f, 0xe0, 0x40, 0xff, 0xf1,
    0x8, 0x11, 0x7, 0xfe, 0x4, 0x0, 0x40, 0xff,
    0xf0, 0x40, 0x4, 0x0,

    /* U+5F55 "录" */
    0x7f, 0xc0, 0x4, 0x7f, 0xc0, 0x4, 0xff, 0xf4,
    0x22, 0x62, 0x60, 0x58, 0x1d, 0x86, 0x44, 0x84,
    0x31, 0xc0,

    /* U+5FEB "快" */
    0x21, 0x2, 0x10, 0x67, 0xeb, 0x12, 0xa1, 0x2a,
    0x12, 0xa1, 0x2a, 0xff, 0x21, 0x2, 0x28, 0x22,
    0xc2, 0xc6, 0x38, 0x10,

    /* U+6253 "打" */
    0x20, 0x2, 0x7f, 0x20, 0x4f, 0x84, 0x20, 0x42,
    0x4, 0x28, 0x4f, 0x4, 0x20, 0x42, 0x4, 0x20,
    0x42, 0x4, 0xe3, 0xc0,

    /* U+63A5 "接" */
    0x20, 0x82, 0x8, 0x27, 0xff, 0x24, 0x22, 0x42,
    0xff, 0x31, 0xe, 0xff, 0x22, 0x22, 0x64, 0x21,
    0xc2, 0x36, 0xcc, 0x10,

    /* U+6587 "文" */
    0x4, 0x0, 0x20, 0xff, 0xf2, 0x4, 0x10, 0x81,
    0x8, 0x9, 0x0, 0x90, 0x6, 0x0, 0xf0, 0x39,
    0xce, 0x7, 0x80, 0x0,

    /* U+65B0 "新" */
    0x10, 0x1, 0x3, 0xfe, 0xc4, 0x50, 0x29, 0xf,
    0xef, 0x11, 0x2f, 0xf2, 0x11, 0x25, 0x52, 0x57,
    0x29, 0x12, 0x72, 0x20,

    /* U+65E5 "日" */
    0xff, 0xc0, 0x60, 0x30, 0x18, 0xf, 0xfe, 0x3,
    0x1, 0x80, 0xc0, 0x7f, 0xf0, 0x10,

    /* U+6765 "来" */
    0x4, 0x0, 0x40, 0x7f, 0xe0, 0x40, 0x24, 0x41,
    0x48, 0xff, 0xf0, 0x60, 0xd, 0x1, 0x48, 0x64,
    0x6c, 0x41, 0x4, 0x0,

    /* U+6B65 "步" */
    0x2, 0x2, 0x20, 0x23, 0xe2, 0x20, 0x22, 0xf,
    0xff, 0x2, 0x1, 0x22, 0x22, 0x4c, 0x28, 0x3,
    0x3, 0xc0, 0xe0, 0x0,

    /* U+6C38 "永" */
    0x8, 0x0, 0x60, 0x0, 0x7, 0xc0, 0x4, 0x40,
    0x48, 0xf7, 0x1, 0x70, 0x25, 0x2, 0x48, 0x44,
    0x68, 0x42, 0x1c, 0x0,

    /* U+751F "生" */
    0x2, 0x2, 0x20, 0x22, 0x7, 0xfe, 0x42, 0x8,
    0x20, 0x2, 0x7, 0xfe, 0x2, 0x0, 0x20, 0x2,
    0xf, 0xff,

    /* U+7528 "用" */
    0x7f, 0xf4, 0x21, 0x42, 0x17, 0xff, 0x42, 0x14,
    0x21, 0x42, 0x17, 0xff, 0x42, 0x14, 0x21, 0x82,
    0x18, 0x27,

    /* U+7535 "电" */
    0x8, 0x0, 0x80, 0xff, 0xc8, 0x84, 0x88, 0x4f,
    0xfc, 0x88, 0x48, 0x84, 0xff, 0xc0, 0x81, 0x8,
    0x10, 0x82, 0xf, 0xe0,

    /* U+76EE "目" */
    0xff, 0xc0, 0x60, 0x3f, 0xf8, 0xc, 0x6, 0x3,
    0xff, 0x80, 0xc0, 0x7f, 0xf0, 0x10,

    /* U+7801 "码" */
    0xfb, 0xe2, 0x22, 0x22, 0x24, 0x22, 0x72, 0x2d,
    0x3f, 0xd0, 0x15, 0x1, 0x57, 0xd5, 0x1, 0x70,
    0x14, 0xf,

    /* U+798F "福" */
    0x40, 0x2, 0xff, 0x20, 0xf, 0x7e, 0x14, 0x22,
    0x7e, 0x60, 0xf, 0x7f, 0xa8, 0x92, 0x7f, 0x28,
    0x92, 0x7f, 0x28, 0x10,

    /* U+7F16 "编" */
    0x0, 0x4, 0x10, 0x4f, 0xf4, 0x81, 0xa8, 0x1e,
    0xff, 0x48, 0x4, 0xff, 0x8d, 0x5e, 0xd5, 0xf,
    0xf3, 0x55, 0xd5, 0x50, 0x43,

    /* U+7F6E "置" */
    0x7f, 0xe4, 0x92, 0x36, 0xcf, 0xff, 0x4, 0x3,
    0xbc, 0x3f, 0xc2, 0x4, 0x3f, 0xc3, 0xfc, 0x20,
    0x4f, 0xff,

    /* U+8111 "脑" */
    0x0, 0x83, 0x84, 0x15, 0xfe, 0xa0, 0x7, 0x24,
    0x2a, 0xa9, 0x52, 0x4a, 0x92, 0x75, 0x52, 0xba,
    0x95, 0x85, 0xaf, 0xeb, 0x1, 0x0,

    /* U+81F3 "至" */
    0xff, 0xf0, 0x80, 0x10, 0x82, 0x4, 0x7f, 0xe0,
    0x42, 0x4, 0x7, 0xfe, 0x4, 0x0, 0x40, 0xff,
    0xf0,

    /* U+8BBE "设" */
    0x0, 0x2, 0x3c, 0x32, 0x40, 0x24, 0x4, 0x7e,
    0x0, 0x27, 0xe2, 0x42, 0x22, 0x42, 0xbc, 0x31,
    0x82, 0x66, 0xc, 0x30,

    /* U+8F91 "辑" */
    0x20, 0x4, 0x3e, 0xfa, 0x24, 0x3e, 0x60, 0xa,
    0x7f, 0xa2, 0x27, 0xbe, 0x2b, 0xef, 0xa2, 0xa2,
    0x22, 0xff, 0x20, 0x20,

    /* U+8FDC "远" */
    0x0, 0x3, 0x3f, 0x88, 0x0, 0x0, 0x0, 0xff,
    0xf1, 0x20, 0x89, 0x4, 0x49, 0x22, 0x49, 0x63,
    0xd8, 0x0, 0xb0, 0x8, 0xff, 0x80,

    /* U+8FDE "连" */
    0x1, 0x2, 0x8, 0xb, 0xfe, 0x44, 0x0, 0x28,
    0x72, 0x40, 0x9f, 0xc4, 0x10, 0x2f, 0xf9, 0x4,
    0x8, 0x20, 0xa0, 0x8, 0xff, 0x80,

    /* U+91CD "重" */
    0x7f, 0xe0, 0x40, 0x7f, 0xe7, 0xfe, 0x44, 0x27,
    0xfe, 0x44, 0x27, 0xfe, 0x4, 0x7, 0xfe, 0x4,
    0xf, 0xff,

    /* U+9AA4 "骤" */
    0xf7, 0xf2, 0x98, 0x95, 0x54, 0xa6, 0x65, 0x53,
    0x2b, 0xe4, 0xff, 0x83, 0x32, 0xfa, 0xe0, 0xed,
    0x4, 0xa4, 0xe9, 0x10,

    /* U+FF0C "，" */
    0xd8,

    /* U+FF1B "；" */
    0x83, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 65, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 59, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 75, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 5, .adv_w = 158, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 16, .adv_w = 129, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 184, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 157, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 43, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 59, .adv_w = 68, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 65, .adv_w = 68, .box_w = 3, .box_h = 14, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 71, .adv_w = 99, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 74, .adv_w = 135, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 79, .adv_w = 57, .box_w = 1, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 80, .adv_w = 101, .box_w = 5, .box_h = 1, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 81, .adv_w = 54, .box_w = 1, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 82, .adv_w = 88, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 98, .adv_w = 88, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 126, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 112, .adv_w = 132, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 121, .adv_w = 131, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 141, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 151, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 160, .adv_w = 140, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 133, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 180, .adv_w = 54, .box_w = 1, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 181, .adv_w = 57, .box_w = 1, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 183, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 190, .adv_w = 135, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 193, .adv_w = 135, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 200, .adv_w = 109, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 185, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 148, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 156, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 166, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 133, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 128, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 286, .adv_w = 164, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 160, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 53, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 310, .adv_w = 105, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 144, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 328, .adv_w = 125, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 195, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 163, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 362, .adv_w = 175, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 375, .adv_w = 138, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 175, .box_w = 9, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 399, .adv_w = 141, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 135, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 419, .adv_w = 134, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 430, .adv_w = 157, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 454, .adv_w = 213, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 140, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 483, .adv_w = 138, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 511, .adv_w = 76, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 523, .adv_w = 98, .box_w = 6, .box_h = 4, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 526, .adv_w = 101, .box_w = 6, .box_h = 1, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 527, .adv_w = 57, .box_w = 3, .box_h = 2, .ofs_x = 0, .ofs_y = 9},
    {.bitmap_index = 528, .adv_w = 120, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 534, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 544, .adv_w = 119, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 550, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 560, .adv_w = 125, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 566, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 572, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 582, .adv_w = 129, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 54, .box_w = 1, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 593, .adv_w = 54, .box_w = 3, .box_h = 14, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 599, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 608, .adv_w = 55, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 611, .adv_w = 197, .box_w = 11, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 622, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 628, .adv_w = 129, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 645, .adv_w = 134, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 655, .adv_w = 84, .box_w = 4, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 659, .adv_w = 105, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 78, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 670, .adv_w = 129, .box_w = 6, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 112, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 176, .box_w = 11, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 694, .adv_w = 108, .box_w = 7, .box_h = 8, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 701, .adv_w = 114, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 711, .adv_w = 107, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 716, .adv_w = 78, .box_w = 4, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 723, .adv_w = 49, .box_w = 1, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 725, .adv_w = 78, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 732, .adv_w = 116, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 734, .adv_w = 0, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 735, .adv_w = 83, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 737, .adv_w = 83, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 739, .adv_w = 224, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 741, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 761, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 781, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 803, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 825, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 847, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 867, .adv_w = 224, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 888, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 908, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 928, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 946, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 968, .adv_w = 224, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 986, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1006, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1028, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1048, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1066, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1086, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1106, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1126, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1146, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1166, .adv_w = 224, .box_w = 9, .box_h = 12, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1180, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1200, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1220, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1240, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1258, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1276, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1296, .adv_w = 224, .box_w = 9, .box_h = 12, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 1310, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1328, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1348, .adv_w = 224, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1369, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1387, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1409, .adv_w = 224, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1426, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1446, .adv_w = 224, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1466, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1488, .adv_w = 224, .box_w = 13, .box_h = 13, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1510, .adv_w = 224, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1528, .adv_w = 224, .box_w = 13, .box_h = 12, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 1548, .adv_w = 224, .box_w = 2, .box_h = 3, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1549, .adv_w = 224, .box_w = 1, .box_h = 9, .ofs_x = 3, .ofs_y = -2}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x1, 0xfe6, 0x2e34, 0x2e86, 0x2eda, 0x2f63, 0x2fc1,
    0x31fc, 0x328c, 0x335b, 0x3413, 0x3470, 0x38eb, 0x3a03, 0x3b3c,
    0x3baa, 0x3e5c, 0x3f39, 0x3fcf, 0x4237, 0x4389, 0x456b, 0x4594,
    0x45c9, 0x4749, 0x4b49, 0x4c1c, 0x5503, 0x550c, 0x5519, 0x56d2,
    0x57e5, 0x5973, 0x5efa, 0x5f52, 0x60f5, 0x61d7, 0x6ba2, 0x6f75,
    0x6fc0, 0x6fc2, 0x71b1, 0x7a88, 0xdef0, 0xdeff
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 96, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 8220, .range_length = 57088, .glyph_id_start = 97,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 46, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 4, 3,
    5, 6, 0, 7, 8, 9, 10, 11,
    12, 13, 14, 0, 0, 0, 0, 0,
    15, 0, 16, 17, 18, 19, 20, 21,
    22, 23, 23, 24, 25, 26, 23, 23,
    19, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 0, 0, 0, 0,
    0, 0, 38, 39, 40, 0, 41, 42,
    43, 44, 0, 0, 45, 46, 44, 44,
    39, 39, 43, 47, 48, 49, 43, 50,
    51, 52, 50, 53, 0, 0, 0, 0,
    0, 54, 55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 0, 1, 0, 0, 0, 2,
    1, 0, 0, 0, 0, 3, 4, 3,
    5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 0, 0, 0, 0, 0,
    16, 0, 17, 0, 18, 0, 0, 0,
    18, 0, 0, 19, 0, 0, 0, 0,
    18, 0, 18, 0, 20, 21, 22, 23,
    24, 25, 26, 27, 0, 0, 0, 0,
    0, 0, 28, 0, 29, 29, 29, 30,
    29, 0, 31, 31, 0, 32, 33, 33,
    29, 33, 29, 33, 34, 35, 36, 37,
    38, 39, 37, 40, 0, 0, 0, 0,
    0, 41, 42, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -20, 0, -13, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, -6, -3, -20, -5,
    -20, -12, 0, -22, 0, -4, -2, 0,
    0, -4, 0, 0, -5, 0, -8, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, -20, 0, 0, -10, -5, -4,
    -7, -2, -23, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -10, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -16, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -8, 0, 0, 0,
    0, -7, -4, 0, 0, 0, -4, 0,
    0, 0, -6, 0, -6, 0, -8, 0,
    -6, -3, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, -4, 0, 0, -6, -8, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -2, -6, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, 0, 0, 0, 0, 0, -6, 0,
    -4, 0, 0, 0, -6, 0, -4, -7,
    0, 0, 0, 0, -6, 0, -9, 0,
    0, -9, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, -4, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    -5, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -15, 0, -4, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    -12, 0, -2, -15, 0, 0, 0, 0,
    -22, 0, -18, 0, -3, -23, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, -6, -4, -22, -16, 4, 0,
    -31, -6, -21, -4, 0, 0, 0, -17,
    0, -16, 1, -7, 0, 2, -21, 0,
    -24, 0, 0, 0, 0, 0, 0, 0,
    0, -19, -18, -6, 0, 0, -10, -13,
    0, -9, 0, 0, -9, -9, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, 0, -5, -5,
    0, 0, 0, 0, -5, 0, -4, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -9, -4, 0, 0, -25, 0, -11, 0,
    0, 0, 0, -7, 0, -6, 0, -5,
    0, 0, -15, 0, -18, 0, 0, 0,
    -2, 0, -9, -4, 0, -9, -6, 2,
    0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, -4, -7,
    2, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -20, -3,
    0, -9, 0, -6, -13, 0, 0, 0,
    0, 0, 0, 0, -15, -17, 0, -8,
    0, 0, -21, -4, -22, -15, 0, -22,
    0, 0, -4, -2, 0, -1, 0, 0,
    -5, -3, -10, -7, 0, 0, -28, -24,
    -6, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    -5, 0, -2, 0, -5, 0, -9, -4,
    -5, -8, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, 0, -1, -2,
    0, -2, 0, 0, 0, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, -1, 0,
    0, 0, -4, -6, -2, -2, -4, 0,
    0, 0, 0, 0, 0, 0, -4, -4,
    -2, 0, 0, 0, -4, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, -8, 0, -13, 0,
    -7, 0, -8, -4, -8, -11, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, -5, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, -2, 0, 0, 0, 4,
    4, -6, -15, 0, 0, 0, 0, 0,
    0, -6, 0, -7, 0, 0, 0, 0,
    -14, 0, -35, -3, 0, 0, 0, 0,
    -4, 0, 0, -11, -8, 0, 0, 0,
    -4, -4, 0, -4, -2, -1, -8, -5,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, -5, 0, 0, 0, -7, 0,
    -9, -4, -4, -11, -3, 0, 0, 0,
    0, 0, 0, -2, 0, 0, -6, -7,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 5, -19, 0, -10, -6, 0,
    0, -6, 0, 0, 0, 0, -10, -7,
    0, -12, -5, -5, 0, -11, 0, 0,
    0, 0, 0, -6, -11, -6, 0, -4,
    -2, -2, -11, -11, -15, -14, 6, 0,
    0, 2, -20, 0, 6, -20, 0, 0,
    -15, 0, 0, 0, 0, 0, -5, 0,
    -26, -20, 0, -9, 0, 0, -35, -6,
    -30, -18, 0, -38, 0, 0, -4, -5,
    0, 0, 0, 0, -8, -6, -17, -11,
    0, 0, -27, -25, 0, -9, -22, 0,
    0, 0, 0, -1, 0, -6, 0, 0,
    0, 0, 0, 0, -17, 0, -38, 0,
    -4, 0, -5, -4, -5, -7, -4, -7,
    -5, 5, 0, 0, 0, 1, 5, 0,
    7, 7, 2, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, -7, 0, -5, -5, -10, -11,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -1, -6, 0, -4, 0, -4, -2,
    0, -4, 0, -3, -4, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    -2, 1, -2, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -4,
    -2, -3, 0, 0, 4, -16, -24, -18,
    0, -8, 0, 0, 0, -22, 0, -17,
    0, -5, 0, 0, -21, -7, -30, -3,
    0, 0, -4, 0, -6, 0, 0, -26,
    -27, -9, 0, 0, -19, -25, -5, -18,
    -24, -22, -24, -21, 0, 6, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -8, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, -28, -9, 0, -6, 0, 0,
    0, -14, -5, -11, 0, -4, 0, 0,
    -22, -8, -34, 0, 0, 0, 0, 0,
    0, 0, 0, -18, -16, -3, 0, 0,
    -10, -13, -2, -9, -6, -6, -8, -7,
    0, 0, 0, -9, -19, -6, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, -4, -23, 2, 0, 0,
    0, 0, 0, 0, 0, -14, -12, -2,
    0, 0, -8, -10, 0, -10, -2, -4,
    -6, -5, 0, 0, 0, -6, 2, -17,
    0, 0, -6, 0, -2, -4, -5, -4,
    0, 0, -10, -4, 0, -8, -1, -1,
    -6, -3, 0, 0, 0, 0, 0, -3,
    -6, -4, 0, -2, 0, -6, -8, -9,
    -11, -12, 0, 0, -6, 0, 0, -17,
    -26, -15, 0, -11, 0, -4, -2, -23,
    0, -19, 0, -8, -3, 0, -22, -11,
    -39, -4, 0, 0, 0, 0, 0, 0,
    0, -23, -23, -8, 0, 0, -17, -19,
    -6, -17, -9, -10, -11, -13, 0, 0,
    0, -9, 0, -11, 0, 0, 0, 0,
    0, -10, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -4, 0, 0, 0,
    0, 0, -6, -7, -9, -9, 0, 0,
    0, 0, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    -4, -11, 0, 0, 0, 0, -24, 0,
    -16, -13, 0, -20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -2, -3,
    0, 0, -9, 0, -9, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, -6, -15, -4, 0, 0, 0,
    -27, 0, -16, -12, -6, -23, -2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -2, -4, -2, -11, -11, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, -24, 0, -12, -7, -4, -23,
    0, -2, -3, 0, -2, -1, 0, 0,
    0, 0, -2, 0, -4, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -11, 0, 0, -11,
    0, 0, 0, 0, -23, 0, -14, -9,
    -7, -18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -2, -1, -3, 0,
    -4, -5, 6, -7, -15, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 5, 0,
    5, 0, -13, 0, -16, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, -3, 2, -2, 0, 0,
    0, 0, 6, 11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -6, 0, 0, 0, 0,
    -19, 0, -10, -9, -2, -16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -6, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, -4, -11, 0, 0,
    0, 0, -26, 0, -18, -13, -4, -22,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, -1, -2, 0, -15, -9,
    -4, -3, 3, -6, 0, 0, 0, 0,
    0, -6, 0, -5, 0, -5, -2, -4,
    0, -5, 0, 0, -22, -3, -10, -5,
    0, -17, 0, -2, -5, 0, 0, -1,
    0, -2, -2, -3, 0, 0, 0, 0,
    0, 0, 0, -4, 4, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -5, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 2, 0, 0,
    0, 0, 2, 0, 0, 1, -2, -2,
    0, 0, 0, 0, 0, -11, -23, 0,
    0, 0, 0, -4, -11, -11, 0, -6,
    0, 0, 3, 0, 0, 0, 0, 0,
    -20, 0, 0, 0, -9, -7, -11, -5,
    -3, 3, 0, 0, 0, -2, 4, -4,
    5, 5, 2, 0, 0, 0, -7, 0,
    0, 0, 0, 0, -6, 0, 0, 0,
    0, 0, -6, 0, 0, -7, 0, 0,
    0, 0, -23, 0, -12, -9, -5, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, -4, 0, -3, 0,
    0, -10, 0, 0, -1, 2, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, -9, -17, 0, 0, 0,
    0, 0, 0, -6, 0, -6, 0, 0,
    0, 0, -10, 0, -20, 0, -24, 0,
    -6, -2, -11, -9, -11, -5, -3, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -5, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -7, 0, -16, 0,
    -22, 0, -6, -4, -12, -10, -9, -4,
    -2, 0, 0, 0, 0, -1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, -4, 0, 0, 0, 0, 0, -8,
    0, -6, -6, -4, 0, 0, 0, -2,
    0, 0, -24, 0, -8, -6, 4, -11,
    0, -3, -4, 0, 0, -2, 0, -5,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, -8, 0, -4, 0, 0, 0, 0,
    0, -9, 0, -4, -5, 0, -2, 0,
    0, -7, 0, 0, -20, 0, -10, -6,
    0, -13, 0, -1, -4, 0, 0, 0,
    0, -2, 0, -1, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, -20, 0, -18, 0, -6,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, 0, 0, -30, 0, -27,
    0, -13, -9, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 55,
    .right_class_cnt     = 42,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 2,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_MiSansZH14 = {
#else
lv_font_t ui_font_MiSansZH14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_MISANSZH14*/

