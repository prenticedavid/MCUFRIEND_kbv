/*
 * utftglue.h   @@@@@@@@@@@@@@@@@@@@@@@@ LIBRARY @@@@@@@@@@@@@@@@@@@@@@@@@
 *
 * Created: 12/05/2019 14:25:06
 *  Author: David Prentice
 *  
 *  1. replace "UTFT.h" with "UTFTGLUE.h"
 *  2. replace UTFT constructor with UTFTGLUE(model_ID, 0,0,0,0,0)
 *  3. remove smallFont, BigFont, SeveSegNumFont declarations
 *  4. UTFTGLUE uses FreeFonts or NULL (System 5x7)
 *
 *  5. knows FreeSmallFont, FreeBigFont and FreeSevenSegNumFont
 *  6. any other Fonts just need to #include "FreeOtherXXX.h"
 *  7. #define OtherXXX &FreeOtherXXX
 */ 

#warning   @@@@@@@@@@@@@@@@@@@@@@@@@ <UTFTGLUE.h> @@@@@@@@@@@@@@@@@@@@@@@@@@

#ifndef UTFTGLUE_H_
#define UTFTGLUE_H_

#define LEFT 0
#define RIGHT 9999
#define CENTER 9998

#define PORTRAIT 0
#define LANDSCAPE 1

#include <MCUFRIEND_kbv.h>

#include <Adafruit_GFX.h>
#if defined(__arm__) && !defined(TEENSYDUINO)
#include <avr/dtostrf.h>
#endif

#include <FreeDefaultFonts.h>
#define SmallFont &FreeSmallFont
#define BigFont   &FreeBigFont
#define SevenSegNumFont &FreeSevenSegNumFont

class UTFTGLUE : public MCUFRIEND_kbv
{
    public:
//  UTFTGLUE() : MCUFRIEND_kbv() {}
    UTFTGLUE(int model_ID, int RS, int WR,int CS, int RST, int RD = A0)
             : MCUFRIEND_kbv(CS, RS, WR, RD, RST) { _model_ID = model_ID; }
    void InitLCD(byte orientation=LANDSCAPE) {
        MCUFRIEND_kbv::reset();
        uint16_t ID = MCUFRIEND_kbv::readID();
//       if (ID == 0) ID = 0x9341;        //DealExtreme with EXTC=0
//       if (ID == 0x8989) ID = 0x1289;
//       if (ID == 0xD3D3) ID = 0x9481;   //write-only controller
//       if (ID == 0xD3D3) ID = 0x9486;   //write-only controller
         if (ID == 0xD3D3) ID = 0x9090;   //write-only controller HX8357-D
//         if (ID == 0x9327 && orientation == LANDSCAPE) orientation = 3;
        MCUFRIEND_kbv::begin(ID);
        MCUFRIEND_kbv::setRotation(_orient = orientation);
    }
    void clrScr() { MCUFRIEND_kbv::fillScreen(0x0000);}
    void drawPixel(int x, int y) { MCUFRIEND_kbv::drawPixel(x, y, _fcolor);}
    void drawLine(int x1, int y1, int x2, int y2) { MCUFRIEND_kbv::drawLine(x1, y1, x2, y2, _fcolor);}
    void fillScr(uint16_t color) { MCUFRIEND_kbv::fillScreen(color);}
    void fillScr(byte r, byte g, byte b) { MCUFRIEND_kbv::fillScreen(setrgb(r, g, b));}
    void drawRect(int x1, int y1, int x2, int y2) {
        int w = x2 - x1 + 1, h = y2 - y1 + 1;
        if (w < 0) { x1 = x2; w = -w; }
        if (h < 0) { y1 = y2; h = -h; }
        MCUFRIEND_kbv::drawRect(x1, y1, w, h, _fcolor);
    }
    void drawRoundRect(int x1, int y1, int x2, int y2, int radius = 4) {
        int w = x2 - x1 + 1, h = y2 - y1 + 1;
        if (w < 0) { x1 = x2; w = -w; }
        if (h < 0) { y1 = y2; h = -h; }
        MCUFRIEND_kbv::drawRoundRect(x1, y1, w, h, radius, _fcolor);
    }
    void fillRect(int x1, int y1, int x2, int y2) {
        int w = x2 - x1 + 1, h = y2 - y1 + 1;
        if (w < 0) { x1 = x2; w = -w; }
        if (h < 0) { y1 = y2; h = -h; }
        MCUFRIEND_kbv::fillRect(x1, y1, w, h, _fcolor);
    }
    void fillRoundRect(int x1, int y1, int x2, int y2, int radius = 4) {
        int w = x2 - x1 + 1, h = y2 - y1 + 1;
        if (w < 0) { x1 = x2; w = -w; }
        if (h < 0) { y1 = y2; h = -h; }
        MCUFRIEND_kbv::fillRoundRect(x1, y1, w, h, radius, _fcolor);
    }
    void drawCircle(int x, int y, int radius) { MCUFRIEND_kbv::drawCircle(x, y, radius, _fcolor);}
    void fillCircle(int x, int y, int radius) { MCUFRIEND_kbv::fillCircle(x, y, radius, _fcolor);}
    void setColor(byte r, byte g, byte b)  { setColor(setrgb(r, g, b));}
    void setColor(uint16_t c)  { MCUFRIEND_kbv::setTextColor(_fcolor = c, _bcolor); }
    void setBackColor(byte r, byte g, byte b)  { setBackColor(setrgb(r, g, b)); }
    void setBackColor(uint32_t c)  { 
        if (c == 0xFFFFFFFF) _bcolor = _fcolor; 
        else _bcolor = c;
        MCUFRIEND_kbv::setTextColor(_fcolor, _bcolor);
    }
    void print(const char *st, int x, int y, int deg=0)  {
        settextcursor((char*)st, x, y); MCUFRIEND_kbv::print(st);}
    void print(char *st, int x, int y, int deg=0)  {
        settextcursor(st, x, y); MCUFRIEND_kbv::print(st);}
    void print(String st, int x, int y, int deg=0) {
        settextcursor((char*)(st.c_str()), x, y); MCUFRIEND_kbv::print(st);}
    void printNumI(long num, int x, int y, int length=0, char filler=' ') {
        printNumF(num, 0, x, y, '.', length, filler);
    }
    void printNumF(double num, byte dec, int x, int y, char divider='.', int length=0, char filler=' ') {
        char buf[20];
        dtostrf(num, length, dec, buf); 
        for (int i = 0; buf[i] == ' '; i++) buf[i] = filler;
        settextcursor(buf, x, y, length * _dig_wid * MCUFRIEND_kbv::textsize_x); 
        MCUFRIEND_kbv::print(buf);
    }
    void setTextSize(int sz) { MCUFRIEND_kbv::setTextSize(gfxFont == NULL ? sz : 1); } // ####### GFX ########
    void setFont(const GFXfont* font) {
        MCUFRIEND_kbv::setFont(font);
        _ascend = 8;
        _descend = 1;
        _dig_wid = 6;
        if (font != NULL) {
            int16_t x = 0, y = 0, x1, y1 = 0, x2, y2 = 0;
            MCUFRIEND_kbv::setTextSize(1);
            charBounds('0', &x, &y, &x1, &y1, &x2, &y2);
            _ascend = y2 - y1;    //yAdvance
            _dig_wid = x;   //xAdvance
        }
    }
    void drawBitmap(int x, int y, int sx, int sy, const uint16_t *data, int scale=1) {
        uint16_t color;
        MCUFRIEND_kbv::setAddrWindow(x, y, x + sx*scale - 1, y + sy*scale - 1);
        if (scale == 1) MCUFRIEND_kbv::pushColors((const uint8_t*)data, sx * sy, 1);
        else {
            for (int row = 0; row < sy; row++) {
                for (int col = 0; col < sx; col++) {
                    color = pgm_read_word(data + (row*sx + col)*1);
                    MCUFRIEND_kbv::fillRect(x+col*scale, y+row*scale, scale, scale, color);
                }
            }
        }
    }
//  void drawBitmap(int x, int y, int sx, int sy, bitmapdatatype data, int deg, int rox, int roy);
//  void lcdOff();
//  void lcdOn();
    void setContrast(char c) {}
    int  getDisplayXSize() { return MCUFRIEND_kbv::width(); }
    int  getDisplayYSize() { return MCUFRIEND_kbv::height(); }
	void	setBrightness(byte br) {}
//  void LCD_Write_DATA(char VH,char VL);
//  void dispBitmap(File inFile);
    uint8_t _ascend, _descend, _dig_wid;
    uint16_t _model_ID;

    protected:
    uint16_t _fcolor;
    uint16_t _bcolor;
//    uint8_t _ascend, _descend, _dig_wid;
    uint8_t _orient;
    void settextcursor(char *st, int x, int y, int pad = 0) {
        int16_t pos, x1, y1;
        uint16_t len, w, h;
        bool is_gfx = (MCUFRIEND_kbv::gfxFont != NULL);
        getTextBounds(st, 0, 0, &x1, &y1, &w, &h);   //always
        len = x1 + w + 0;    // assumes the final right padding = 1.
        if (pad >= len) pad = pad - len;
        pos = (MCUFRIEND_kbv::width() - len - pad);
        if (x == CENTER) x = pos/2;
        else if (x == RIGHT) x = pos - 1;
        if (is_gfx) {    //only GFX fonts need to paint background
            h = _ascend + _descend; //pgm_read_byte(&gfxFont->yAdvance);
            if (_fcolor != _bcolor) MCUFRIEND_kbv::fillRect(x, y, len + pad + 1, h, _bcolor);
            y += h;
        }
        MCUFRIEND_kbv::setCursor(x + pad, y);
    }
    uint16_t setrgb(byte r, byte g, byte b)  { return ((r&0xF8) << 8) | ((g&0xFC) << 3) | (b>>3);}
};

#define VGA_BLACK       0x0000
#define VGA_WHITE       0xFFFF
#define VGA_RED         0xF800
#define VGA_GREEN       0x0400
#define VGA_BLUE        0x001F
#define VGA_SILVER      0xC618
#define VGA_GRAY        0x8410
#define VGA_MAROON      0x8000
#define VGA_YELLOW      0xFFE0
#define VGA_OLIVE       0x8400
#define VGA_LIME        0x07E0
#define VGA_AQUA        0x07FF
#define VGA_TEAL        0x0410
#define VGA_NAVY        0x0010
#define VGA_FUCHSIA     0xF81F
#define VGA_PURPLE      0x8010
#define VGA_TRANSPARENT 0xFFFFFFFF

#endif /* UTFTGLUE_H_ */