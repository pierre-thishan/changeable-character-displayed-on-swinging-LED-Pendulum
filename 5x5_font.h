
/*
Bitmap Custom font header file for Microcontroller
Author : Jared Sanson
website : https://jared.geek.nz/2014/jan/custom-fonts-for-microcontrollers
git : https://github.com/jorticus

*/

// Editing from the original 8x6 bitmap to 8x5 so that it fits the time period of the microcontroller

const unsigned char font[36][7] = {
{0x30,0x7E,0x85,0x89,0x91,0x7E,0x00}, // 0
{0x31,0x00,0x41,0xFF,0x01,0x00,0x00}, // 1
{0x32,0x41,0x83,0x85,0x89,0x71,0x00}, // 2
{0x33,0x82,0x81,0xA1,0xD1,0x8E,0x00}, // 3
{0x34,0x18,0x28,0x48,0xFF,0x08,0x00}, // 4
{0x35,0xF2,0x91,0x91,0x91,0x8E,0x00}, // 5
{0x36,0x3E,0x51,0x91,0x91,0x0E,0x00}, // 6
{0x37,0x80,0x8F,0x90,0xA0,0xC0,0x00}, // 7
{0x38,0x6E,0x91,0x91,0x91,0x6E,0x00}, // 8
{0x39,0x70,0x89,0x89,0x8A,0x7C,0x00}, // 9

{0x41,0x7F,0x90,0x90,0x90,0x7F,0x00}, // A
{0x42,0xFF,0x91,0x91,0x91,0x6E,0x00}, // B
{0x43,0x7E,0x81,0x81,0x81,0x42,0x00}, // C
{0x44,0xFF,0x81,0x81,0x81,0x7E,0x00}, // D
{0x45,0xFF,0x91,0x91,0x91,0x81,0x00}, // E
{0x46,0xFF,0x90,0x90,0x90,0x80,0x00}, // F
{0x47,0x7E,0x81,0x89,0x89,0x4F,0x00}, // G
{0x48,0xFF,0x10,0x10,0x10,0xFF,0x00}, // H
{0x49,0x00,0x81,0xFF,0x81,0x00,0x00}, // I
{0x4A,0x02,0x01,0x81,0xFE,0x80,0x00}, // J
{0x4B,0xFF,0x10,0x2C,0x42,0x81,0x00}, // K
{0x4C,0xFF,0x01,0x01,0x01,0x01,0x00}, // L
{0x4D,0xFF,0x40,0x30,0x40,0xFF,0x00}, // M
{0x4E,0xFF,0x20,0x18,0x04,0xFF,0x00}, // N
{0x4F,0x7E,0x81,0x81,0x81,0x7E,0x00}, // O
{0x50,0xFF,0x90,0x90,0x90,0x60,0x00}, // P
{0x51,0x7E,0x81,0x85,0x82,0x7D,0x00}, // Q
{0x52,0xFF,0x90,0x98,0x96,0x61,0x00}, // R
{0x53,0x61,0x91,0x91,0x91,0x8E,0x00}, // S
{0x54,0x80,0x80,0xFF,0x80,0x80,0x00}, // T
{0x55,0xFE,0x01,0x01,0x01,0xFE,0x00}, // U
{0x56,0xF0,0x0E,0x01,0x0E,0xF0,0x00}, // V
{0x57,0xFE,0x01,0x0E,0x01,0xFE,0x00}, // W
{0x58,0xC7,0x28,0x10,0x28,0xC7,0x00}, // X
{0x59,0xE0,0x10,0x0F,0x10,0xE0,0x00}, // Y
{0x5A,0x83,0x85,0x99,0xA1,0xC1,0x00}, // Z

};
