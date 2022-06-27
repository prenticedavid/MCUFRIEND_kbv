
// ################ edits for 5310 ##########################
ret = readReg32(0xD4);
if (ret == 0x5310)          //NT35310: [xx 01 53 10]
    return 0x5310;


case 0x5310:
_lcd_capable = AUTO_READINC | MIPI_DCS_REV1 | MV_AXIS | REV_SCREEN | INVERT_GS;
static const uint8_t NT35310_regValues[] PROGMEM = {        //
    0xED, 2, 0x01, 0xFE, //CMD2UNLOCK
};
table8_ads = NT35310_regValues, table_size = sizeof(NT35310_regValues);
p16 = (int16_t *) & HEIGHT;
*p16 = 480;
p16 = (int16_t *) & WIDTH;
*p16 = 320;
break;
{
    {
        static const uint8_t NT35310_regValues[] PROGMEM = {        //
            (0xED), 2, 0x01, 0xFE,
            (0xEE), 2, 0xDE, 0x21,
            (0xF1), 1, 0x01,
            (0xDF), 1, 0x10,
            /*VCOMvoltage//*/
            (0xC4), 1, 0x8F,      /*5f*/
            (0xC6), 4, 0x00, 0xE2, 0xE2, 0xE2,
            (0xBF), 1, 0xAA,
            (0xB0), 18, 0x0D, 0x00, 0x0D, 0x00, 0x11, 0x00, 0x19, 0x00, 0x21, 0x00, 0x2D, 0x00, 0x3D, 0x00, 0x5D, 0x00, 0x5D, 0x00,
            (0xB1), 6, 0x80, 0x00, 0x8B, 0x00, 0x96, 0x00,
            (0xB2), 6, 0x00, 0x00, 0x02, 0x00, 0x03, 0x00,
            (0xB3), 24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            (0xB4), 6, 0x8B, 0x00, 0x96, 0x00, 0xA1, 0x00,
            (0xB5), 6, 0x02, 0x00, 0x03, 0x00, 0x04, 0x00,
            (0xB6), 2, 0x00, 0x00,
            (0xB7), 22, 0x00, 0x00, 0x3F, 0x00, 0x5E, 0x00, 0x64, 0x00, 0x8C, 0x00, 0xAC, 0x00, 0xDC, 0x00, 0x70, 0x00, 0x90, 0x00, 0xEB, 0x00, 0xDC, 0x00,
            (0xB8), 8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            (0xBA), 4, 0x24, 0x00, 0x00, 0x00,
            (0xC1), 6, 0x20, 0x00, 0x54, 0x00, 0xFF, 0x00,
            (0xC2), 4, 0x0A, 0x00, 0x04, 0x00,
            (0xC3), 48, 0x3C, 0x00, 0x3A, 0x00, 0x39, 0x00, 0x37, 0x00, 0x3C, 0x00, 0x36, 0x00, 0x32, 0x00, 0x2F, 0x00, 0x2C, 0x00, 0x29, 0x00, 0x26, 0x00, 0x24, 0x00, 0x24, 0x00, 0x23, 0x00, 0x3C, 0x00, 0x36, 0x00, 0x32, 0x00, 0x2F, 0x00, 0x2C, 0x00, 0x29, 0x00, 0x26, 0x00, 0x24, 0x00, 0x24, 0x00, 0x23, 0x00,
            (0xC4), 26, 0x62, 0x00, 0x05, 0x00, 0x84, 0x00, 0xF0, 0x00, 0x18, 0x00, 0xA4, 0x00, 0x18, 0x00, 0x50, 0x00, 0x0C, 0x00, 0x17, 0x00, 0x95, 0x00, 0xF3, 0x00, 0xE6, 0x00,
            (0xC5), 10, 0x32, 0x00, 0x44, 0x00, 0x65, 0x00, 0x76, 0x00, 0x88, 0x00,
            (0xC6), 6, 0x20, 0x00, 0x17, 0x00, 0x01, 0x00,
            (0xC7), 4, 0x00, 0x00, 0x00, 0x00,
            (0xC8), 4, 0x00, 0x00, 0x00, 0x00,
            (0xC9), 16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            (0xE0), 36, 0x16, 0x00, 0x1C, 0x00, 0x21, 0x00, 0x36, 0x00, 0x46, 0x00, 0x52, 0x00, 0x64, 0x00, 0x7A, 0x00, 0x8B, 0x00, 0x99, 0x00, 0xA8, 0x00, 0xB9, 0x00, 0xC4, 0x00, 0xCA, 0x00, 0xD2, 0x00, 0xD9, 0x00, 0xE0, 0x00, 0xF3, 0x00,
            (0xE1), 36, 0x16, 0x00, 0x1C, 0x00, 0x22, 0x00, 0x36, 0x00, 0x45, 0x00, 0x52, 0x00, 0x64, 0x00, 0x7A, 0x00, 0x8B, 0x00, 0x99, 0x00, 0xA8, 0x00, 0xB9, 0x00, 0xC4, 0x00, 0xCA, 0x00, 0xD2, 0x00, 0xD8, 0x00, 0xE0, 0x00, 0xF3, 0x00,
            (0xE2), 36, 0x05, 0x00, 0x0B, 0x00, 0x1B, 0x00, 0x34, 0x00, 0x44, 0x00, 0x4F, 0x00, 0x61, 0x00, 0x79, 0x00, 0x88, 0x00, 0x97, 0x00, 0xA6, 0x00, 0xB7, 0x00, 0xC2, 0x00, 0xC7, 0x00, 0xD1, 0x00, 0xD6, 0x00, 0xDD, 0x00, 0xF3, 0x00,
            (0xE3), 36, 0x05, 0x00, 0x0A, 0x00, 0x1C, 0x00, 0x33, 0x00, 0x44, 0x00, 0x50, 0x00, 0x62, 0x00, 0x78, 0x00, 0x88, 0x00, 0x97, 0x00, 0xA6, 0x00, 0xB7, 0x00, 0xC2, 0x00, 0xC7, 0x00, 0xD1, 0x00, 0xD5, 0x00, 0xDD, 0x00, 0xF3, 0x00,
            (0xE4), 36, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x2A, 0x00, 0x3C, 0x00, 0x4B, 0x00, 0x5D, 0x00, 0x74, 0x00, 0x84, 0x00, 0x93, 0x00, 0xA2, 0x00, 0xB3, 0x00, 0xBE, 0x00, 0xC4, 0x00, 0xCD, 0x00, 0xD3, 0x00, 0xDD, 0x00, 0xF3, 0x00,
            (0xE5), 36, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x29, 0x00, 0x3C, 0x00, 0x4B, 0x00, 0x5D, 0x00, 0x74, 0x00, 0x84, 0x00, 0x93, 0x00, 0xA2, 0x00, 0xB3, 0x00, 0xBE, 0x00, 0xC4, 0x00, 0xCD, 0x00, 0xD3, 0x00, 0xDC, 0x00, 0xF3, 0x00,
            (0xE6), 32, 0x11, 0x00, 0x34, 0x00, 0x56, 0x00, 0x76, 0x00, 0x77, 0x00, 0x66, 0x00, 0x88, 0x00, 0x99, 0x00, 0xBB, 0x00, 0x99, 0x00, 0x66, 0x00, 0x55, 0x00, 0x55, 0x00, 0x45, 0x00, 0x43, 0x00, 0x44, 0x00,
            (0xE7), 32, 0x32, 0x00, 0x55, 0x00, 0x76, 0x00, 0x66, 0x00, 0x67, 0x00, 0x67, 0x00, 0x87, 0x00, 0x99, 0x00, 0xBB, 0x00, 0x99, 0x00, 0x77, 0x00, 0x44, 0x00, 0x56, 0x00, 0x23, 0x00, 0x33, 0x00, 0x45, 0x00,
            (0xE8), 32, 0x00, 0x00, 0x99, 0x00, 0x87, 0x00, 0x88, 0x00, 0x77, 0x00, 0x66, 0x00, 0x88, 0x00, 0xAA, 0x00, 0xBB, 0x00, 0x99, 0x00, 0x66, 0x00, 0x55, 0x00, 0x55, 0x00, 0x44, 0x00, 0x44, 0x00, 0x55, 0x00,
            (0xE9), 4, 0xAA, 0x00, 0x00, 0x00,
            (0x00), 1, 0xAA,
            (0xCF), 17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
            (0xF0), 5, 0x00, 0x50, 0x00, 0x00, 0x00,
            (0xF3), 1, 0x00,
            (0xF9), 4, 0x06, 0x10, 0x29, 0x00,
            (0x3A), 1, 0x55,    /*66*/
            (0x11), 0,
            TFTLCD_DELAY8, 100,
            (0x29), 0,
            (0x35), 1, 0x00,
            (0x51), 1, 0xFF,
            (0x53), 1, 0x2C,
            (0x55), 1, 0x82,
        };
    }
}

// ######################## SPECIAL for Kippert #####################################################

//-- Arduino DUE_ELECHOUSE_SHIELD
#define LCD_RST 33 //PC1
#define LCD_CS 31 //PA7
#define LCD_RS 22 //PB26
#define LCD_WR 23 //PA14
#define LCD_RD 24 //PA15

#define LCD_D0 34 //PC2
#define LCD_D1 35
#define LCD_D2 36
#define LCD_D3 37
#define LCD_D4 38
#define LCD_D5 39
#define LCD_D6 40
#define LCD_D7 41 //PC9

// ############### tables generated from Ilitek App Note ###############################################################
{
    {
        static const uint8_t ILI9341_LG2.6_Initial[] PROGMEM = {
            (0xCB), 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
            (0xCF), 3, 0x00, 0xC1, 0x30,
            (0xE8), 3, 0x85, 0x00, 0x78,
            (0xEA), 2, 0x00, 0x00,
            (0xED), 4, 0x64, 0x03, 0x12, 0x81,
            (0xF7), 1, 0x20,
            (0xC0), 1,  /*Power control*/ 0x23, /*VRH[5:0]*/
            (0xC1), 1,  /*Power control*/ 0x10, /*SAP[2:0];BT[3:0]*/
            (0xC5), 2,  /*VCM control*/ 0x2B, 0x2B,
            //            (0xC7), 1, /*VCM control2*/ 0xC0,
            (0x36), 1,  /* Memory Access Control*/ 0x48,
            (0xB1), 2, 0x00, 0x1B,
            (0xB6), 2,  /* Display Function Control*/ 0x0A, 0x02,
            (0xF2), 1,  /* 3Gamma Function Disable*/ 0x00,
            (0x26), 1,  /*Gamma curve selected*/ 0x01,
            (0xE0), 15,  /*Set Gamma*/ 0x0F, 0x31, 0x2B, 0x0C, 0x0E, 0x08, 0x4E, 0xF1, 0x37, 0x07, 0x10, 0x03, 0x0E, 0x09, 0x00,
            (0xE1), 15,  /*Set Gamma*/ 0x00, 0x0E, 0x14, 0x03, 0x11, 0x07, 0x31, 0xC1, 0x48, 0x08, 0x0F, 0x0C, 0x31, 0x36, 0x0F,
        };

        static const uint8_t ILI9341_BOE2.0_Initial[] PROGMEM = {
            (0xCF), 3, 0x00, 0x99, 0x30,
            (0xED), 4, 0x64, 0x03, 0x12, 0x81,
            (0xE8), 3, 0x85, 0x10, 0x78,
            (0xCB), 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
            (0xF7), 1, 0x20,
            (0xEA), 2, 0x00, 0x00,
            (0xC0), 1,  /*Power control*/ 0x26, /*VRH[5:0]*/
            (0xC1), 1,  /*Power control*/ 0x12, /*SAP[2:0];BT[3:0]*/
            (0xC5), 2,  /*VCM control*/ 0x2B, 0x2C,
            (0xC7), 1,  /*VCM control2*/ 0xC4,
            (0x36), 1,  /* Memory Access Control*/ 0x08,
            (0xB1), 2, 0x00, 0x1B,
            (0xB6), 2,  /* Display Function Control*/ 0x0A, 0xA2,
            (0xF2), 1,  /* 3Gamma Function Disable*/ 0x00,
            (0x26), 1,  /*Gamma curve selected*/ 0x01,
            (0xE0), 15,  /*Set Gamma*/ 0x0F, 0x24, 0x21, 0x0A, 0x0E, 0x09, 0x51, 0xA9, 0x44, 0x07, 0x10, 0x03, 0x2C, 0x0B, 0x00,
            (0xE1), 15,  /*Set Gamma*/ 0x00, 0x1B, 0x1E, 0x05, 0x11, 0x06, 0x2E, 0x56, 0x3B, 0x08, 0x0F, 0x0C, 0x13, 0x14, 0x0F,
        };

        static const uint8_t ILI9341_BOE2.4_Initial[] PROGMEM = {
            (0xCF), 3, 0x00, 0x81, 0x30,
            (0xED), 4, 0x64, 0x03, 0x12, 0x81,
            (0xE8), 3, 0x85, 0x10, 0x78,
            (0xCB), 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
            (0xF7), 1, 0x20,
            (0xEA), 2, 0x00, 0x00,
            (0xB1), 2, 0x00, 0x1B,
            (0xB6), 2,  /* Display Function Control*/ 0x0A, 0xA2,
            (0xC0), 1,  /*Power control*/ 0x21, /*VRH[5:0]*/
            (0xC1), 1,  /*Power control*/ 0x11, /*SAP[2:0];BT[3:0]*/
            (0xC5), 2,  /*VCM control*/ 0x3F, 0x3C,
            (0xC7), 1,  /*VCM control2*/ 0xb5,
            (0x36), 1,  /* Memory Access Control*/ 0x48,
            (0xF2), 1,  /* 3Gamma Function Disable*/ 0x00,
            (0x26), 1,  /*Gamma curve selected*/ 0x01,
            (0xE0), 15,  /*Set Gamma*/ 0x0F, 0x26, 0x24, 0x0B, 0x0E, 0x09, 0x54, 0xA8, 0x46, 0x0C, 0x17, 0x09, 0x0F, 0x07, 0x00,
            (0xE1), 15,  /*Set Gamma*/ 0x00, 0x19, 0x1B, 0x04, 0x10, 0x07, 0x2A, 0x47, 0x39, 0x03, 0x06, 0x06, 0x30, 0x38, 0x0F,
        };

        static const uint8_t ILI9341_Tianma2.4_Initial[] PROGMEM = {
            (0xCF), 3, 0x00, 0x81, 0x30,
            (0xED), 4, 0x64, 0x03, 0x12, 0x81,
            (0xE8), 3, 0x85, 0x10, 0x7A,
            (0xCB), 5, 0x39, 0x2C, 0x00, 0x34, 0x02,
            (0xF7), 1, 0x20,
            (0xEA), 2, 0x00, 0x00,
            (0xC0), 1,  /*Power control*/ 0x21, /*VRH[5:0]*/
            (0xC1), 1,  /*Power control*/ 0x11, /*SAP[2:0];BT[3:0]*/
            (0xC5), 2,  /*VCM control*/ 0x3F, 0x3C,
            (0xC7), 1,  /*VCM control2*/ 0xa7,
            (0x36), 1,  /* Memory Access Control*/ 0x48,
            (0xB1), 2, 0x00, 0x1B,
            (0xB6), 2,  /* Display Function Control*/ 0x0A, 0xA2,
            (0xF2), 1,  /* 3Gamma Function Disable*/ 0x00,
            (0x26), 1,  /*Gamma curve selected*/ 0x01,
            (0xE0), 15,  /*Set Gamma*/ 0x0F, 0x23, 0x1F, 0x0B, 0x0E, 0x08, 0x4B, 0xA8, 0x3B, 0x0A, 0x14, 0x06, 0x10, 0x09, 0x00,
            (0xE1), 15,  /*Set Gamma*/ 0x00, 0x1C, 0x20, 0x04, 0x10, 0x08, 0x34, 0x47, 0x44, 0x05, 0x0B, 0x09, 0x2F, 0x36, 0x0F,
        };

        //        table8_ads = ILI9341_LG2.6_Initial, table_size = sizeof(ILI9341_LG2.6_Initial);   //
        //        table8_ads = ILI9341_BOE2.0_Initial, table_size = sizeof(ILI9341_BOE2.0_Initial);   //
        //        table8_ads = ILI9341_BOE2.4_Initial, table_size = sizeof(ILI9341_BOE2.4_Initial);   //
        //        table8_ads = ILI9341_Tianma2.4_Initial, table_size = sizeof(ILI9341_Tianma2.4_Initial);   //
    }
}

// ############### R61580 block ############################
{
    {
#define SUPPORT_1580
#ifdef SUPPORT_1580
    case 0x1580:
        _lcd_capable = 0 | REV_SCREEN | READ_BGR;
        static const uint16_t R61580_regValues[] PROGMEM = {
            // Synchronization after reset
            TFTLCD_DELAY, 2,
            0x0000, 0x0000,
            0x0000, 0x0000,
            0x0000, 0x0000,
            0x0000, 0x0000,

            // Setup display
            0x00A4, 0x0001,          // NVM_4  [0000] CALB=1
            TFTLCD_DELAY, 2,
            0x0060, 0xA700,          // Driver_2  [2700] GS=1
            0x0008, 0x0808,          // Display_2 [0808] BP=8, FP=8
            0x0030, 0x0111,          // y control
            0x0031, 0x2410,          // y control
            0x0032, 0x0501,          // y control
            0x0033, 0x050C,          // y control
            0x0034, 0x2211,          // y control
            0x0035, 0x0C05,          // y control
            0x0036, 0x2105,          // y control
            0x0037, 0x1004,          // y control
            0x0038, 0x1101,          // y control
            0x0039, 0x1122,          // y control
            0x0090, 0x0019,          // Panel_1 [0111] 80Hz
            0x0010, 0x0530,          // Power_1 [0530]
            0x0011, 0x0237,          // Power_2 [0237]
            0x0012, 0x01BF,          // Power_3 [018F] PSON=1, PON=1
            0x0013, 0x1300,          // Power_4 [0000] VDV=0x13
            TFTLCD_DELAY, 100,

            0x0001, 0x0100,          // DRVOUT_1 [0000] SS=1
            0x0002, 0x0200,          // LCD_DRV [0000] BC0=1
            0x0003, 0x1030,          // ENTRY   [0030] BGR=1
            0x0009, 0x0001,          // Displ_3 [0001]
            0x000A, 0x0008,          // Displ_4 [0000] FMARKOE=1
            0x000C, 0x0001,          // Ext_1   [0000] RIM=1
            0x000D, 0xD000,          // Frame Marker [0000] ????
            0x000E, 0x0030,          // VCOM_LP [0030]
            0x000F, 0x0000,          // EXT_2   [0000]
            //            0x0020, 0x0000,
            //            0x0021, 0x0000,
            0x0029, 0x0077,          // NVM_2   [00FF] VCM=0x77
            //            0x0050, 0x0000,
            //            0x0051, 0xD0EF,
            //            0x0052, 0x0000,
            //            0x0053, 0x013F,
            0x0061, 0x0001,          // Base_Image [0000] REV=1
            0x006A, 0x0000,          // Vert_scrl  [0000]
            0x0080, 0x0000,          // Partial_Image [0000]
            0x0081, 0x0000,          //               [0000]
            0x0082, 0x005F,          //               [0000] PTE=0x5F
            0x0093, 0x0701,          // Panel_3  [0101] VEQWI=3
            0x0007, 0x0100,          // Display_1  [0000] BASEE=1
        };
        static const uint16_t R61580_DEM240320C[] PROGMEM = { //from DEM 240320C TMH-PW-N
            0x00, 0x0000,
            0x00, 0x0000,
            TFTLCD_DELAY, 100,
            0x00, 0x0000,
            0x00, 0x0000,
            0x00, 0x0000,
            0x00, 0x0000,
            0xA4, 0x0001,
            TFTLCD_DELAY, 100,
            0x60, 0xA700,
            0x08, 0x0808,
            /******************************************/
            //Gamma Setting:
            0x30, 0x0203,
            0x31, 0x080F,
            0x32, 0x0401,
            0x33, 0x050B,
            0x34, 0x3330,
            0x35, 0x0B05,
            0x36, 0x0005,
            0x37, 0x0F08,
            0x38, 0x0302,
            0x39, 0x3033,
            /******************************************/
            //Power Setting:
            0x90, 0x0018, //80Hz
            0x10, 0x0530, //BT,AP
            0x11, 0x0237, //DC1,DC0,VC
            0x12, 0x01BF,
            0x13, 0x1000, //VCOM
            TFTLCD_DELAY, 200,
            /******************************************/
            0x01, 0x0100,
            0x02, 0x0200,
            0x03, 0x1030,
            0x09, 0x0001,
            0x0A, 0x0008,
            0x0C, 0x0000,
            0x0D, 0xD000,

            0x0E, 0x0030,
            0x0F, 0x0000,
            0x20, 0x0000, //H Start
            0x21, 0x0000, //V Start
            0x29, 0x002E,
            0x50, 0x0000,
            0x51, 0x00EF,
            0x52, 0x0000,
            0x53, 0x013F,
            0x61, 0x0001,
            0x6A, 0x0000,
            0x80, 0x0000,
            0x81, 0x0000,
            0x82, 0x005F,
            0x93, 0x0701,
            /******************************************/
            0x07, 0x0100,
            TFTLCD_DELAY, 100,
        };
        init_table16(R61580_DEM240320C, sizeof(R61580_DEM240320C));
//        init_table16(R61580_regValues, sizeof(R61580_regValues));
        break;
#endif
    }
}

//################## SSD1963 ##############################################
{
    {
        // from UTFTv2.82 initlcd.h
        static const uint8_t SSD1963_800NEW_regValues[] PROGMEM = {
            (0xE2), 3, 0x1E, 0x02, 0x54,        //PLL multiplier, set PLL clock to 120M
            (0xE0), 1, 0x01,    // PLL enable
            TFTLCD_DELAY8, 10,
            (0xE0), 1, 0x03,    //
            TFTLCD_DELAY8, 10,
            0x01, 0,            //Soft Reset
            TFTLCD_DELAY8, 100,
            (0xE6), 3, 0x03, 0xFF, 0xFF,        //PLL setting for PCLK, depends on resolution
            (0xB0), 7, 0x24, 0x00, 0x03, 0x1F, 0x01, 0xDF, 0x00,        //LCD SPECIFICATION
            (0xB4), 8, 0x03, 0xA0, 0x00, 0x2E, 0x30, 0x00, 0x0F, 0x00,  //HSYNC HT=928, HPS=46, HPW=48, LPS=15
            (0xB6), 7, 0x02, 0x0D, 0x00, 0x10, 0x10, 0x00, 0x08,        //VSYNC VT=525, VPS=16, VPW=16, FPS=8
            (0xBA), 1, 0x0F,    //GPIO[3:0] out 1
            (0xB8), 2, 0x07, 0x01,      //GPIO3=input, GPIO[2:0]=output
            (0xF0), 1, 0x03,    //pixel data interface
            TFTLCD_DELAY8, 1,
            0x28, 0,            //Display Off
            0x11, 0,            //Sleep Out
            TFTLCD_DELAY8, 100,
            0x29, 0,            //Display On
            (0xBE), 6, 0x06, 0xF0, 0x01, 0xF0, 0x00, 0x00,      //set PWM for B/L
            (0xD0), 1, 0x0D,
        };
        // from UTFTv2.82 initlcd.h
        static const uint8_t SSD1963_800ALT_regValues[] PROGMEM = {
            (0xE2), 3, 0x23, 0x02, 0x04,        //PLL multiplier, set PLL clock to 120M
            (0xE0), 1, 0x01,    // PLL enable
            TFTLCD_DELAY8, 10,
            (0xE0), 1, 0x03,    //
            TFTLCD_DELAY8, 10,
            0x01, 0,            //Soft Reset
            TFTLCD_DELAY8, 100,
            (0xE6), 3, 0x04, 0x93, 0xE0,        //PLL setting for PCLK, depends on resolution
            (0xB0), 7, 0x00, 0x00, 0x03, 0x1F, 0x01, 0xDF, 0x00,        //LCD SPECIFICATION
            (0xB4), 8, 0x03, 0xA0, 0x00, 0x2E, 0x30, 0x00, 0x0F, 0x00,  //HSYNC HT=928, HPS=46, HPW=48, LPS=15
            (0xB6), 7, 0x02, 0x0D, 0x00, 0x10, 0x10, 0x00, 0x08,        //VSYNC VT=525, VPS=16, VPW=16, FPS=8
            (0xBA), 1, 0x0F,    //GPIO[3:0] out 1
            (0xB8), 2, 0x07, 0x01,      //GPIO3=input, GPIO[2:0]=output
            (0xF0), 1, 0x03,    //pixel data interface
            TFTLCD_DELAY8, 1,
            0x28, 0,            //Display Off
            0x11, 0,            //Sleep Out
            TFTLCD_DELAY8, 100,
            0x29, 0,            //Display On
            (0xBE), 6, 0x06, 0xF0, 0x01, 0xF0, 0x00, 0x00,      //set PWM for B/L
            (0xD0), 1, 0x0D,
        };
        // from UTFTv2.82 initlcd.h
        static const uint8_t SSD1963_480_regValues[] PROGMEM = {
            (0xE2), 3, 0x23, 0x02, 0x54,        //PLL multiplier, set PLL=120M, N=0x36/0x23 for 6.5M/10M crystal
            (0xE0), 1, 0x01,    // PLL enable
            TFTLCD_DELAY8, 10,
            (0xE0), 1, 0x03,    //
            TFTLCD_DELAY8, 10,
            0x01, 0,            //Soft Reset
            TFTLCD_DELAY8, 100,
            (0xE6), 3, 0x01, 0x1F, 0xFF,        //PLL setting for PCLK, depends on resolution
            (0xB0), 7, 0x20, 0x00, 0x01, 0xDF, 0x01, 0x0F, 0x00,        //LCD SPECIFICATION
            (0xB4), 8, 0x02, 0x13, 0x00, 0x08, 0x2B, 0x00, 0x02, 0x00,  //HSYNC HT=531, HPS=8, HPW=43, LPS=2
            (0xB6), 7, 0x01, 0x20, 0x00, 0x04, 0x0C, 0x00, 0x02,        //VSYNC VT=288, VPS=4, VPW=12, FPS=2
            (0xBA), 1, 0x0F,    //GPIO[3:0] out 1
            (0xB8), 2, 0x07, 0x01,      //GPIO3=input, GPIO[2:0]=output
            (0xF0), 1, 0x03,    //pixel data interface
            TFTLCD_DELAY8, 1,
            0x28, 0,            //Display Off
            0x11, 0,            //Sleep Out
            TFTLCD_DELAY8, 100,
            0x29, 0,            //Display On
            (0xBE), 6, 0x06, 0xF0, 0x01, 0xF0, 0x00, 0x00,      //set PWM for B/L
            (0xD0), 1, 0x0D,
        };
        //        table8_ads = SSD1963_480_regValues, table_size = sizeof(SSD1963_480_regValues);
        //        table8_ads = SSD1963_480NEW_regValues, table_size = sizeof(SSD1963_480NEW_regValues);
        //        table8_ads = SSD1963_800_regValues, table_size = sizeof(SSD1963_800_regValues);
        //        table8_ads = SSD1963_NHD_50_regValues, table_size = sizeof(SSD1963_NHD_50_regValues);
        //        table8_ads = SSD1963_NHD_70_regValues, table_size = sizeof(SSD1963_NHD_70_regValues);
        table8_ads = SSD1963_800NEW_regValues, table_size = sizeof(SSD1963_800NEW_regValues);
        //        table8_ads = SSD1963_800ALT_regValues, table_size = sizeof(SSD1963_800ALT_regValues);

    }
}

//################## ILI9806 ##############################################
#define TFTLCD_DELAY8 0x7F
{
    {
#define SUPPORT_9806
#ifdef SUPPORT_9806
    case 0x9806:
        _lcd_capable = AUTO_READINC | MIPI_DCS_REV1 | MV_AXIS | READ_24BITS;
        // from ZinggJM
        static const uint8_t ILI9806_regValues[] PROGMEM = {
            (0xFF), 3, /* EXTC Command Set enable register*/ 0xFF, 0x98, 0x06,
            (0xBA), 1, /* SPI Interface Setting*/0xE0,
            (0xBC), 21, /* GIP 1*/0x03, 0x0F, 0x63, 0x69, 0x01, 0x01, 0x1B, 0x11, 0x70, 0x73, 0xFF, 0xFF, 0x08, 0x09, 0x05, 0x00, 0xEE, 0xE2, 0x01, 0x00, 0xC1,
            (0xBD), 8, /* GIP 2*/0x01, 0x23, 0x45, 0x67, 0x01, 0x23, 0x45, 0x67,
            (0xBE), 9, /* GIP 3*/0x00, 0x22, 0x27, 0x6A, 0xBC, 0xD8, 0x92, 0x22, 0x22,
            (0xC7), 1, /* Vcom*/0x1E,
            (0xED), 3, /* EN_volt_reg*/0x7F, 0x0F, 0x00,
            (0xC0), 3, /* Power Control 1*/0xE3, 0x0B, 0x00,
            (0xFC), 1, 0x08,
            (0xDF), 6, /* Engineering Setting*/0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
            (0xF3), 1, /* DVDD Voltage Setting*/0x74,
            (0xB4), 3, /* Display Inversion Control*/0x00, 0x00, 0x00,
            (0xF7), 1, /* 480x854*/0x81,
            (0xB1), 3, /* Frame Rate*/0x00, 0x10, 0x14,
            (0xF1), 3, /* Panel Timing Control*/0x29, 0x8A, 0x07,
            (0xF2), 4, /*Panel Timing Control*/0x40, 0xD2, 0x50, 0x28,
            (0xC1), 4, /* Power Control 2*/0x17, 0x85, 0x85, 0x20,
            (0xE0), 16, 0x00, 0x0C, 0x15, 0x0D, 0x0F, 0x0C, 0x07, 0x05, 0x07, 0x0B, 0x10, 0x10, 0x0D, 0x17, 0x0F, 0x00,
            (0xE1), 16, 0x00, 0x0D, 0x15, 0x0E, 0x10, 0x0D, 0x08, 0x06, 0x07, 0x0C, 0x11, 0x11, 0x0E, 0x17, 0x0F, 0x00,
            (0x35), 1, /*Tearing Effect ON*/0x00,
        };
        table8_ads = ILI9806_regValues, table_size = sizeof(ILI9806_regValues);
        p16 = (int16_t *) & HEIGHT;
        *p16 = 480;
        p16 = (int16_t *) & WIDTH;
        *p16 = 854;
        break;
#endif
    }
}

//################################### UC8230 ############################################
{
    {
        {
            ...
            if (_lcd_ID == 0x8230) {    // UC8230 has strange BGR and READ_BGR behaviour
                if (rotation == 1 || rotation == 2) {
                    val ^= 0x08;        // change BGR bit for LANDSCAPE and PORTRAIT_REV
                }
            }
            ...
        }
#ifdef SUPPORT_8230
    case 0x8230:    //thanks Pappee
        _lcd_capable = 0 | REV_SCREEN | INVERT_GS | INVERT_RGB | READ_BGR;
        static const uint16_t UC8230_regValues[] PROGMEM = {
            //After pin Reset wait at least 100ms
            TFTLCD_DELAY, 100, //at least 100ms
            0x0046, 0x0002, //MTP Disable
            0x0010, 0x1590,
            0x0011, 0x0227,
            0x0012, 0x80ff,
            0x0013, 0x9c31,
            TFTLCD_DELAY, 10, //at least 10ms
            0x0002, 0x0300, //set N-line = 1
            0x0003, 0x1030, //set GRAM writing direction & BGR=1
            0x0060, 0xa700, //GS; gate scan: start position & drive line Q'ty
            0x0061, 0x0001, //REV, NDL, VLE
            /*--------------------Gamma control------------------------*/
            0x0030, 0x0303,
            0x0031, 0x0303,
            0x0032, 0x0303,
            0x0033, 0x0300,
            0x0034, 0x0003,
            0x0035, 0x0303,
            0x0036, 0x1400,
            0x0037, 0x0303,
            0x0038, 0x0303,
            0x0039, 0x0303,
            0x003a, 0x0300,
            0x003b, 0x0003,
            0x003c, 0x0303,
            0x003d, 0x1400,
            //-----------------------------------------------------------//
            0x0020, 0x0000, //GRAM horizontal address
            0x0021, 0x0000, //GRAM vertical address
            //************** Partial Display control*********************//
            0x0080, 0x0000,
            0x0081, 0x0000,
            0x0082, 0x0000,
            0x0083, 0x0000,
            0x0084, 0x0000,
            0x0085, 0x0000,
            //-----------------------------------------------------------//
            0x0092, 0x0200,
            0x0093, 0x0303,
            0x0090, 0x0010, //set clocks/Line
            0x0000, 0x0001,
            TFTLCD_DELAY, 200, // Delay 200 ms
            0x0007, 0x0173, //Display on setting
        };
        init_table16(UC8230_regValues, sizeof(UC8230_regValues));
        break;
#endif
    }
}

//############################# S6D0144 ###############################
{
    {
#define SUPPORT_0114
#ifdef SUPPORT_0114
    case 0x0114:
        _lcd_capable = REV_SCREEN | INVERT_GS;
        static const uint16_t S6D0114_regValues[] PROGMEM = {

            0x0000, 0x0001,
            TFTLCD_DELAY, 300,
            0x00B4, 0x0000,
            0x00B3, 0x0000,
            0x0007, 0x0000,
            0x0012, 0x00B3,
            0x0013, 0x0808,
            0x0014, 0x7DE5,
            0x0010, 0x1A6C,
            TFTLCD_DELAY, 900,
            0x0013, 0x081E,
            TFTLCD_DELAY, 300,
            0x0001, 0x0114,
            0x0002, 0x0100,
            0x0003, 0x0020,
            0x0008, 0x0202,
            0x000B, 0x0004,
            0x000C, 0x0001,
            0x0030, 0x0303,
            0x0031, 0x0303,
            0x0032, 0x0303,
            0x0033, 0x0000,
            0x0034, 0x0404,
            0x0035, 0x0404,
            0x0036, 0x0404,
            0x0037, 0x0000,
            0x0038, 0x0707,
            0x0040, 0x0000,
            0x0042, 0x9F00,
            0x0043, 0x0000,
            0x0044, 0x7F00,
            0x0045, 0x9F00,
            0x0061, 0x0018,
            0x0069, 0x0000,
            0x0070, 0x0000,
            0x0071, 0x0000,
            TFTLCD_DELAY, 500,
            0x0007, 0x0005,
            0x0007, 0x0021,
            0x0007, 0x0023,
            TFTLCD_DELAY, 500,
            0x0007, 0x0037,
            0x0021, 0x007F,
            0x0022, 0x0000,
        };
        init_table16(S6D0114_regValues, sizeof(S6D0114_regValues));
        p16 = (int16_t *) & HEIGHT;
        *p16 = 160;
        p16 = (int16_t *) & WIDTH;
        *p16 = 128;
        break;
#endif
    }
}

//############################# ILI9225 ###############################
{
    {
#define SUPPORT_9225
#ifdef SUPPORT_9225
#define ILI9225_DRIVER_OUTPUT_CTRL      (0x01u)  // Driver Output Control
#define ILI9225_LCD_AC_DRIVING_CTRL     (0x02u)  // LCD AC Driving Control
#define ILI9225_ENTRY_MODE                (0x03u)  // Entry Mode
#define ILI9225_DISP_CTRL1              (0x07u)  // Display Control 1
#define ILI9225_BLANK_PERIOD_CTRL1      (0x08u)  // Blank Period Control
#define ILI9225_FRAME_CYCLE_CTRL        (0x0Bu)  // Frame Cycle Control
#define ILI9225_INTERFACE_CTRL          (0x0Cu)  // Interface Control
#define ILI9225_OSC_CTRL                (0x0Fu)  // Osc Control
#define ILI9225_POWER_CTRL1             (0x10u)  // Power Control 1
#define ILI9225_POWER_CTRL2             (0x11u)  // Power Control 2
#define ILI9225_POWER_CTRL3             (0x12u)  // Power Control 3
#define ILI9225_POWER_CTRL4             (0x13u)  // Power Control 4
#define ILI9225_POWER_CTRL5             (0x14u)  // Power Control 5
#define ILI9225_VCI_RECYCLING           (0x15u)  // VCI Recycling
#define ILI9225_RAM_ADDR_SET1           (0x20u)  // Horizontal GRAM Address Set
#define ILI9225_RAM_ADDR_SET2           (0x21u)  // Vertical GRAM Address Set
#define ILI9225_GRAM_DATA_REG           (0x22u)  // GRAM Data Register
#define ILI9225_GATE_SCAN_CTRL          (0x30u)  // Gate Scan Control Register
#define ILI9225_VERTICAL_SCROLL_CTRL1   (0x31u)  // Vertical Scroll Control 1 Register
#define ILI9225_VERTICAL_SCROLL_CTRL2   (0x32u)  // Vertical Scroll Control 2 Register
#define ILI9225_VERTICAL_SCROLL_CTRL3   (0x33u)  // Vertical Scroll Control 3 Register
#define ILI9225_PARTIAL_DRIVING_POS1    (0x34u)  // Partial Driving Position 1 Register
#define ILI9225_PARTIAL_DRIVING_POS2    (0x35u)  // Partial Driving Position 2 Register
#define ILI9225_HORIZONTAL_WINDOW_ADDR1 (0x36u)  // Horizontal Address END Position   HEA
#define ILI9225_HORIZONTAL_WINDOW_ADDR2 (0x37u)  // Horizontal Address START Position HSA
#define ILI9225_VERTICAL_WINDOW_ADDR1   (0x38u)  // Vertical Address END Position     VEA
#define ILI9225_VERTICAL_WINDOW_ADDR2   (0x39u)  // Vertical Address START Position   VSA
#define ILI9225_GAMMA_CTRL1             (0x50u)  // Gamma Control 1
#define ILI9225_GAMMA_CTRL2             (0x51u)  // Gamma Control 2
#define ILI9225_GAMMA_CTRL3             (0x52u)  // Gamma Control 3
#define ILI9225_GAMMA_CTRL4             (0x53u)  // Gamma Control 4
#define ILI9225_GAMMA_CTRL5             (0x54u)  // Gamma Control 5
#define ILI9225_GAMMA_CTRL6             (0x55u)  // Gamma Control 6
#define ILI9225_GAMMA_CTRL7             (0x56u)  // Gamma Control 7
#define ILI9225_GAMMA_CTRL8             (0x57u)  // Gamma Control 8
#define ILI9225_GAMMA_CTRL9             (0x58u)  // Gamma Control 9
#define ILI9225_GAMMA_CTRL10            (0x59u)  // Gamma Control 10

#define ILI9225C_INVOFF  0x20
#define ILI9225C_INVON   0x21

    case 0x9225:
        _lcd_capable = REV_SCREEN | INVERT_GS;
        static const uint16_t ILI9225_regValues[] PROGMEM = {
            /* Start Initial Sequence */
            /* Set SS bit and direction output from S528 to S1 */
            ILI9225_POWER_CTRL1, 0x0000, // Set SAP,DSTB,STB
            ILI9225_POWER_CTRL2, 0x0000, // Set APON,PON,AON,VCI1EN,VC
            ILI9225_POWER_CTRL3, 0x0000, // Set BT,DC1,DC2,DC3
            ILI9225_POWER_CTRL4, 0x0000, // Set GVDD
            ILI9225_POWER_CTRL5, 0x0000, // Set VCOMH/VCOML voltage
            TFTLCD_DELAY, 40,

            // Power-on sequence
            ILI9225_POWER_CTRL2, 0x0018, // Set APON,PON,AON,VCI1EN,VC
            ILI9225_POWER_CTRL3, 0x6121, // Set BT,DC1,DC2,DC3
            ILI9225_POWER_CTRL4, 0x006F, // Set GVDD   /*007F 0088 */
            ILI9225_POWER_CTRL5, 0x495F, // Set VCOMH/VCOML voltage
            ILI9225_POWER_CTRL1, 0x0800, // Set SAP,DSTB,STB
            TFTLCD_DELAY, 10,
            ILI9225_POWER_CTRL2, 0x103B, // Set APON,PON,AON,VCI1EN,VC
            TFTLCD_DELAY, 50,

            ILI9225_DRIVER_OUTPUT_CTRL, 0x011C, // set the display line number and display direction
            ILI9225_LCD_AC_DRIVING_CTRL, 0x0100, // set 1 line inversion
            ILI9225_ENTRY_MODE, 0x1030, // set GRAM write direction and BGR=1.
            ILI9225_DISP_CTRL1, 0x0000, // Display off
            ILI9225_BLANK_PERIOD_CTRL1, 0x0808, // set the back porch and front porch
            ILI9225_FRAME_CYCLE_CTRL, 0x1100, // set the clocks number per line
            ILI9225_INTERFACE_CTRL, 0x0000, // CPU interface
            ILI9225_OSC_CTRL, 0x0D01, // Set Osc  /*0e01*/
            ILI9225_VCI_RECYCLING, 0x0020, // Set VCI recycling
            ILI9225_RAM_ADDR_SET1, 0x0000, // RAM Address
            ILI9225_RAM_ADDR_SET2, 0x0000, // RAM Address

            /* Set GRAM area */
            ILI9225_GATE_SCAN_CTRL, 0x0000,
            ILI9225_VERTICAL_SCROLL_CTRL1, 0x00DB,
            ILI9225_VERTICAL_SCROLL_CTRL2, 0x0000,
            ILI9225_VERTICAL_SCROLL_CTRL3, 0x0000,
            ILI9225_PARTIAL_DRIVING_POS1, 0x00DB,
            ILI9225_PARTIAL_DRIVING_POS2, 0x0000,
            ILI9225_HORIZONTAL_WINDOW_ADDR1, 0x00AF,
            ILI9225_HORIZONTAL_WINDOW_ADDR2, 0x0000,
            ILI9225_VERTICAL_WINDOW_ADDR1, 0x00DB,
            ILI9225_VERTICAL_WINDOW_ADDR2, 0x0000,

            /* Set GAMMA curve */
            ILI9225_GAMMA_CTRL1, 0x0000,
            ILI9225_GAMMA_CTRL2, 0x0808,
            ILI9225_GAMMA_CTRL3, 0x080A,
            ILI9225_GAMMA_CTRL4, 0x000A,
            ILI9225_GAMMA_CTRL5, 0x0A08,
            ILI9225_GAMMA_CTRL6, 0x0808,
            ILI9225_GAMMA_CTRL7, 0x0000,
            ILI9225_GAMMA_CTRL8, 0x0A00,
            ILI9225_GAMMA_CTRL9, 0x0710,
            ILI9225_GAMMA_CTRL10, 0x0710,

            ILI9225_DISP_CTRL1, 0x0012,
            TFTLCD_DELAY, 50,
            ILI9225_DISP_CTRL1, 0x1017,
        };
        init_table16(ILI9225_regValues, sizeof(ILI9225_regValues));
        p16 = (int16_t *) & HEIGHT;
        *p16 = 220;
        p16 = (int16_t *) & WIDTH;
        *p16 = 176;
        break;
    }
}

// ############################## ILI9342 ###################
{
    {
    case 0x9342:
        _lcd_capable = AUTO_READINC | MIPI_DCS_REV1 | MV_AXIS | READ_24BITS | INVERT_GS | REV_SCREEN;
        static const uint8_t ILI9342_regValues_CPT24[] PROGMEM = {     //CPT 2.4"
            (0xB9), 3, 0xFF, 0x93, 0x42, //[00 00 00]
            (0xC0), 2, 0x1D, 0x0A,    //[26 09]
            (0xC1), 1, 0x02,          //[10]
            (0xC5), 2, 0x2F, 0x2F,    //[31 3C]
            (0xC7), 1, 0xC3,          //[C0]
            (0xB8), 1, 0x0B,          //[07]
            (0xE0), 15, 0x0F, 0x33, 0x30, 0x0C, 0x0F, 0x08, 0x5D, 0x66, 0x4A, 0x07, 0x13, 0x05, 0x1B, 0x0E, 0x08,
            (0xE1), 15, 0x08, 0x0E, 0x11, 0x02, 0x0E, 0x02, 0x24, 0x33, 0x37, 0x03, 0x0A, 0x09, 0x26, 0x33, 0x0F,
        };
        static const uint8_t ILI9342_regValues_Tianma23[] PROGMEM = {     //Tianma 2.3"
            (0xB9), 3, 0xFF, 0x93, 0x42,
            (0xC0), 2, 0x1D, 0x0A,
            (0xC1), 1, 0x01,
            (0xC5), 2, 0x2C, 0x2C,
            (0xC7), 1, 0xC6,
            (0xB8), 1, 0x09,
            (0xE0), 15, 0x0F, 0x26, 0x21, 0x07, 0x0A, 0x03, 0x4E, 0x62, 0x3E, 0x0B, 0x11, 0x00, 0x08, 0x02, 0x00,
            (0xE1), 15, 0x00, 0x19, 0x1E, 0x03, 0x0E, 0x03, 0x30, 0x23, 0x41, 0x03, 0x0B, 0x07, 0x2F, 0x36, 0x0F,
        };
        static const uint8_t ILI9342_regValues_HSD23[] PROGMEM = {     //HSD 2.3"
            (0xB9), 3, 0xFF, 0x93, 0x42,
            (0xC0), 2, 0x1D, 0x0A,
            (0xC1), 1, 0x02,
            (0xC5), 2, 0x2F, 0x27,
            (0xC7), 1, 0xA4,
            (0xB8), 1, 0x0B,
            (0xE0), 15, 0x0F, 0x24, 0x21, 0x0C, 0x0F, 0x06, 0x50, 0x75, 0x3F, 0x07, 0x12, 0x05, 0x11, 0x0B, 0x08,
            (0xE1), 15, 0x08, 0x1D, 0x20, 0x02, 0x0E, 0x04, 0x31, 0x24, 0x42, 0x03, 0x0B, 0x09, 0x30, 0x36, 0x0F,
        };
        table8_ads = ILI9342_regValues_CPT24, table_size = sizeof(ILI9342_regValues_CPT24);   //
        //        table8_ads = ILI9342_regValues_Tianma23, table_size = sizeof(ILI9342_regValues_Tianma23);   //
        //        table8_ads = ILI9342_regValues_HSD23, table_size = sizeof(ILI9342_regValues_HSD23);   //
        p16 = (int16_t *) & HEIGHT;
        *p16 = 240;
        p16 = (int16_t *) & WIDTH;
        *p16 = 320;
        break;
    }
}

// ###################### R61505 init    #################################
{
    {
    case 0x1505:                //R61505
        _lcd_capable = 0 | REV_SCREEN | READ_LOWHIGH;
        static const uint16_t R61505U_regValues[] PROGMEM = { //MCHIP drvTFT001.c
            // Setup display
            0x0000, 0x0000,
            0x0007, 0x0001,  // DISPCTL1: D = 1
            TFTLCD_DELAY, 5,
            0x0017, 0x0001,  // POWCTL6: PSE = 1
            TFTLCD_DELAY, 5,
            0x0010, 0x17b0,  // POWCTL1: SAP=1, BT=7, APE=1, AP=7
            0x0011, 0x0007,  // POWCTL2: VC=7
            0x0012, 0x011a,  // POWCTL3: VCMR=1, PON=1, VRH=10
            0x0013, 0x0f00,  // POWCTL4: VDV=15
            0x0015, 0x0000,  // POWCTL5:
            0x0029, 0x0009,  // POWCTL7: VCM=9
            0x00fd, 0x0000,  // f.k.
            TFTLCD_DELAY, 5,
            0x0012, 0x013a,  // POWCTL3: VCMR=1, PSON=1, PON=1, VRH=10
            TFTLCD_DELAY, 50,
            0x0001, 0x0100,  // DRVCTL1: SS=1
            0x0002, 0x0700,  // LCDDRV:  r/o=1, B/C=1, EOR=1

            0x0003, 0x1030,  // ENTRYMD: BGR=1, I/D=3

            0x0008, 0x0808,  // DISPCTL2: FP=8, BP=8
            0x0009, 0x0000,  // DISPCTL3:
            0x000a, 0x0000,  // DISPCTL4:
            0x000c, 0x0000,  // RGBCTL:
            0x000d, 0x0000,  // FRMPOS: FMP=0
            0x0030, 0x0000,  //Gamma
            0x0031, 0x0000,
            0x0032, 0x0000,
            0x0033, 0x0000,
            0x0034, 0x0000,
            0x0035, 0x0000,
            0x0036, 0x0000,
            0x0037, 0x0707,
            0x0038, 0x0707,
            0x0039, 0x0707,
            0x003a, 0x0303,
            0x003b, 0x0303,
            0x003c, 0x0707,
            0x003d, 0x0808,
            0x0050, 0x0000,  //
            0x0051, 0x00ef,
            0x0052, 0x0000,
            0x0053, 0x013f,
            0x0060, 0x2700,  // DRVCTL2: NL=32
            0x0061, 0x0001,  // BASIMG:  REV=1
            0x006a, 0x0000,  // VERTSCRL:
            0x0090, 0x0010,  // PANCTL1: DIV100=1
            0x0092, 0x0000,
            0x0093, 0x0000,
            0x0007, 0x0021,  // DISPCTL1: GON=1, D=1
            TFTLCD_DELAY, 1,
            0x0007, 0x0061,  // DISPCTL1: VON=1, GON=1, D=1
            TFTLCD_DELAY, 50,
            0x0007, 0x0173,  // DISPCTL1: BASEE=1, VON=1, GON=1, DTE=1, D=1
            0x0020, 0x0000,
            0x0021, 0x0000,
            0x0022, 0x0000,
            0x0030, 0x0707,  // GAMMA
            0x0031, 0x0407,
            0x0032, 0x0203,
            0x0033, 0x0303,
            0x0034, 0x0303,
            0x0035, 0x0202,
            0x0036, 0x001f,
            0x0037, 0x0707,
            0x0038, 0x0407,
            0x0039, 0x0203,
            0x003a, 0x0303,
            0x003b, 0x0303,
            0x003c, 0x0202,
            0x003d, 0x001f,
            0x0020, 0x0000,
            0x0021, 0x0000,
        };
        init_table16(R61505U_regValues, sizeof(R61505U_regValues));
        break;
    }
}

// ################## for auto-format #########################
#if 0
//####################################### NANO BLE ############################
#elif defined(ARDUINO_ARDUINO_NANO33BLE)
#warning regular UNO shield on a Nano BLE

//LCD pins  |D7   |D6   |D5   |D4   |D3   |D2   |D1   |D0   | |RD  |WR  |RS   |CS   |RST  |
//BLE pin   |P0.23|P1.14|P1.13|P1.15|P1.12|P1.11|P0.27|P0.21| |P0.4|P0.5|P0.30|P0.29|P0.31|

#define WRITE_DELAY { WR_ACTIVE2; }   //M4F @ 60MHz
#define IDLE_DELAY  { }
#define READ_DELAY  { RD_ACTIVE8; RD_ACTIVE; }

#define RD_PORT NRF_P0
#define RD_PIN 4
#define WR_PORT NRF_P0
#define WR_PIN 5
#define CD_PORT NRF_P0
#define CD_PIN 30
#define CS_PORT NRF_P0
#define CS_PIN 29
#define RESET_PORT NRF_P0
#define RESET_PIN 31

// configure macros for the data pins
#define AMASK ((1<<23)|(1<<27)|(1<<21))   //NRF_P0
#define BMASK ((1<<14)|(1<<13)|(1<<15)|(1<<12)|(1<<11))  //NRF_P1

#define write_8(d) { \
        NRF_P0->OUTCLR = AMASK; NRF_P0->OUTCLR = BMASK; \
        NRF_P0->OUTSET = (((d) & (1 << 0)) << 21) \
                     | (((d) & (1 << 1)) << 26) \
                     | (((d) & (1 << 7)) << 16); \
        NRF_P0->OUTSET = (((d) & (1 << 2)) << 9) \
                     | (((d) & (1 << 3)) << 9) \
                     | (((d) & (1 << 4)) << 11) \
                     | (((d) & (1 << 5)) << 8) \
                     | (((d) & (1 << 6)) << 8); \
        }
#define read_8()   ((((NRF_P0->IN & (1<<3)) >> 3) \
                   | ((NRF_P0->IN & (1 << 3)) >> 2) \
                   | ((NRF_P1->IN & (1 << 0)) << 2) \
                   | ((NRF_P1->IN & (1 << 12)) >> 9) \
                   | ((NRF_P1->IN & (1 << 13)) >> 9) \
                   | ((NRF_P1->IN & (1 << 7)) >> 2) \
                   | ((NRF_P1->IN & (1 << 4)) << 2) \
                   | ((NRF_P0->IN & (1 << 2)) << 5)))
#define setWriteDir() {NRF_P0->DIRSET = AMASK; NRF_P1->DIRSET = BMASK; }
#define setReadDir()  {NRF_P0->DIRCLR = AMASK; NRF_P1->DIRCLR = BMASK; }
#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; IDLE_DELAY; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; } //PJ adjusted
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }
#define GPIO_INIT() {for (int i = 2; i <= 9; i++) pinMode(i, OUTPUT); for (int i = A0; i <= A4; i++) pinMode(i, OUTPUT);}

#define PIN_LOW(port, pin)    (port)->OUTCLR = (1<<(pin))
#define PIN_HIGH(port, pin)   (port)->OUTSET = (1<<(pin))
#define PIN_OUTPUT(port, pin) (port)->DIR |= (1<<(pin))

// ################## UNO SPECIAL for Stojanjos ###############
#define USE_STOJANOS
...
#elif defined(__AVR_ATmega328P__)  && defined(USE_STOJANOS)      // 
#warning SPECIAL for USE_STOJANOS
#define RD_PORT PORTC
#define RD_PIN  0
#define WR_PORT PORTC
#define WR_PIN  1
#define CD_PORT PORTC
#define CD_PIN  2
#define CS_PORT PORTC
#define CS_PIN  3
#define RESET_PORT PORTC
#define RESET_PIN  4

#define BMASK         0x03 //0x0F
#define DMASK         0xFC //0xF0
#define write_8(x)    { PORTB = (PORTB & ~BMASK) | ((x) & BMASK); PORTD = (PORTD & ~DMASK) | ((x) & DMASK); }
#define read_8()      ( (PINB & BMASK) | (PIND & DMASK) )
#define setWriteDir() { DDRB |=  BMASK; DDRD |=  DMASK; }
#define setReadDir()  { DDRB &= ~BMASK; DDRD &= ~DMASK; }
#define write8(x)     { write_8(x); WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(p, b)        (p) &= ~(1<<(b))
#define PIN_HIGH(p, b)       (p) |= (1<<(b))
#define PIN_OUTPUT(p, b)     *(&p-1) |= (1<<(b))

//################################ UNO LCD_D2 on A5 ######################################
#define USE_D2_ON_A5
...
#elif defined(__AVR_ATmega328P__) && defined(USE_D2_ON_A5)
#define RD_PORT PORTC
#define RD_PIN  0
#define WR_PORT PORTC
#define WR_PIN  1
#define CD_PORT PORTC
#define CD_PIN  2
#define CS_PORT PORTC
#define CS_PIN  3
#define RESET_PORT PORTC
#define RESET_PIN  4

#define BMASK         0x03              //more intuitive style for mixed Ports
#define CMASK         (1<<5)
#define DMASK         0xF8              //does exactly the same as previous
#define write_8(x)    { PORTB = (PORTB & ~BMASK) | ((x) & BMASK); PORTC = (PORTC & ~CMASK) | (((x)<<3) & CMASK); PORTD = (PORTD & ~DMASK) | ((x) & DMASK); }
#define read_8()      ( (PINB & BMASK) | ((PINC & CMASK)>>3) | (PIND & DMASK) )
#define setWriteDir() { DDRB |=  BMASK; DDRC |=  CMASK; DDRD |=  DMASK; }
#define setReadDir()  { DDRB &= ~BMASK; DDRC &= ~CMASK; DDRD &= ~DMASK; }
#define write8(x)     { write_8(x); WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(p, b)        (p) &= ~(1<<(b))
#define PIN_HIGH(p, b)       (p) |= (1<<(b))
#define PIN_OUTPUT(p, b)     *(&p-1) |= (1<<(b))

//################################ UNO LCD_D2 on D10 ######################################
#define USE_D2_ON_D10
...
#elif defined(__AVR_ATmega328P__) && defined(USE_D2_ON_D10)
#warning USE_D2_ON_D10
#define RD_PORT PORTC
#define RD_PIN  0
#define WR_PORT PORTC
#define WR_PIN  1
#define CD_PORT PORTC
#define CD_PIN  2
#define CS_PORT PORTC
#define CS_PIN  3
#define RESET_PORT PORTC
#define RESET_PIN  4

#define BMASK         0x07              //more intuitive style for mixed Ports
#define DMASK         0xF8              //does exactly the same as previous
#define write_8(x)    { PORTB = (PORTB & ~BMASK) | ((x) & BMASK); PORTD = (PORTD & ~DMASK) | ((x) & DMASK); }
#define read_8()      ( (PINB & BMASK) | (PIND & DMASK) )
#define setWriteDir() { DDRB |=  BMASK; DDRD |=  DMASK; }
#define setReadDir()  { DDRB &= ~BMASK; DDRD &= ~DMASK; }
#define write8(x)     { write_8(x); WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(p, b)        (p) &= ~(1<<(b))
#define PIN_HIGH(p, b)       (p) |= (1<<(b))
#define PIN_OUTPUT(p, b)     *(&p-1) |= (1<<(b))

//################################ UNO LCD_D0 on D10 ######################################
#define USE_D0_ON_D10
...
#elif defined(__AVR_ATmega328P__) && defined(USE_D0_ON_D10)
#warning USE_D0_ON_D10
#define RD_PORT PORTC
#define RD_PIN  0
#define WR_PORT PORTC
#define WR_PIN  1
#define CD_PORT PORTC
#define CD_PIN  2
#define CS_PORT PORTC
#define CS_PIN  3
#define RESET_PORT PORTC
#define RESET_PIN  4

#define BMASK         0x06              //more intuitive style for mixed Ports
#define DMASK         0xFC              //does exactly the same as previous
#define write_8(x)    { PORTB = (PORTB & ~BMASK) | ((x) & (1<<1)) | (((x) & (1<<0)) << 2); PORTD = (PORTD & ~DMASK) | ((x) & DMASK); }
#define read_8()      ( ((PINB & (1<<2)) >> 2) | (PINB & (1<<1)) | (PIND & DMASK) )
#define setWriteDir() { DDRB |=  BMASK; DDRD |=  DMASK; }
#define setReadDir()  { DDRB &= ~BMASK; DDRD &= ~DMASK; }
#define write8(x)     { write_8(x); WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(p, b)        (p) &= ~(1<<(b))
#define PIN_HIGH(p, b)       (p) |= (1<<(b))
#define PIN_OUTPUT(p, b)     *(&p-1) |= (1<<(b))

//################################### MXxxxx UNO SHIELD on TEENSY ####################################################
#elif defined(__MK20DX128__) || defined(__MK20DX256__) || defined(__MK64FX512__) || defined(__MK66FX1M0__) // regular UNO shield on a Teensy 3.x
#warning regular UNO shield on a Teensy 3.x

#if defined(__MK20DX128__) || defined(__MK20DX256__) // Teensy3.0 || 3.2 96MHz
#define WRITE_DELAY { WR_ACTIVE; WR_ACTIVE; }
#define READ_DELAY  { RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; }
#elif defined(__MK64FX512__) // Teensy3.5 120MHz thanks to PeteJohno
#define WRITE_DELAY { WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; }
#define READ_DELAY  { RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; }
#elif defined(__MK66FX1M0__) // Teensy3.6 180MHz untested.   delays can possibly be reduced.
#define WRITE_DELAY { WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; WR_ACTIVE; }
#define READ_DELAY  { RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; }
#else
#error unspecified delays
#endif

#define RD_PORT GPIOD
#define RD_PIN 1
#define WR_PORT GPIOC
#define WR_PIN 0
#define CD_PORT GPIOB
#define CD_PIN 0
#define CS_PORT GPIOB
#define CS_PIN 1
#define RESET_PORT GPIOB
#define RESET_PIN 3

// configure macros for the data pins
#define AMASK ((1<<12)|(1<<13))
#define CMASK ((1<<3))
#define DMASK ((1<<0)|(1<<2)|(1<<3)|(1<<4)|(1<<7))

#define write_8(d) { \
        GPIOA_PCOR = AMASK; GPIOC_PCOR = CMASK; GPIOD_PCOR = DMASK; \
        GPIOA_PSOR = (((d) & (1 << 3)) << 9) \
                     | (((d) & (1 << 4)) << 9); \
        GPIOC_PSOR = (((d) & (1 << 1)) << 2); \
        GPIOD_PSOR = (((d) & (1 << 0)) << 3) \
                     | (((d) & (1 << 2)) >> 2) \
                     | (((d) & (1 << 5)) << 2) \
                     | (((d) & (1 << 6)) >> 2) \
                     | (((d) & (1 << 7)) >> 5); \
    }
#define read_8() ((((GPIOD_PDIR & (1<<3)) >> 3) \
                   | ((GPIOC_PDIR & (1 << 3)) >> 2) \
                   | ((GPIOD_PDIR & (1 << 0)) << 2) \
                   | ((GPIOA_PDIR & (1 << 12)) >> 9) \
                   | ((GPIOA_PDIR & (1 << 13)) >> 9) \
                   | ((GPIOD_PDIR & (1 << 7)) >> 2) \
                   | ((GPIOD_PDIR & (1 << 4)) << 2) \
                   | ((GPIOD_PDIR & (1 << 2)) << 5)))
#define setWriteDir() {GPIOA_PDDR |= AMASK;GPIOC_PDDR |= CMASK;GPIOD_PDDR |= DMASK; }
#define setReadDir() {GPIOA_PDDR &= ~AMASK;GPIOC_PDDR &= ~CMASK;GPIOD_PDDR &= ~DMASK; }
#define write8(x) { write_8(x); WRITE_DELAY; WR_STROBE; } //PJ adjusted
#define write16(x) { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst) { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; } //PJ adjusted
#define READ_16(dst) { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PASTE(x, y) x ## y

#define PIN_LOW(port, pin) PASTE(port, _PCOR) = (1<<(pin))
#define PIN_HIGH(port, pin) PASTE(port, _PSOR) = (1<<(pin))
#define PIN_OUTPUT(port, pin) PASTE(port, _PDDR) |= (1<<(pin))

//################################### SAM3X ELECHOUSE_DUE_16BIT_SHIELD ON DUE ####################################################
#define USE_ELECHOUSE_DUE_16BIT_SHIELD
...
#elif defined(__SAM3X8E__) && defined(USE_DUE_ELECHOUSE_SHIELD)  //ELECHOUSE shield on DUE
#warning USE_ELECHOUSE_DUE_16BIT_SHIELD
#define USES_16BIT_BUS
// configure macros for the control pins
#define RD_PORT PIOA
#define RD_PIN  15     //D24 Graham
#define WR_PORT PIOA
#define WR_PIN  14     //D23
#define CD_PORT PIOB
#define CD_PIN  26     //D22
#define CS_PORT PIOA
#define CS_PIN  7      //D31
#define RESET_PORT PIOC
#define RESET_PIN  1   //D33
// configure macros for data bus
// DB0..DB7 on PIOC2..PIOC9,  DB8..DB15 on PIOC12..PIOC19
//
#define CMASKH        (0xFF00<<4)
#define CMASKL        (0x00FF<<2)
#define CMASK         (CMASKH | CMASKL)
#define write_8(x)    { PIOC->PIO_CODR = CMASKL; PIOC->PIO_SODR = (((x)&0x00FF)<<2); }
#define write_16(x)   { PIOC->PIO_CODR = CMASK; \
        PIOC->PIO_SODR = (((x)&0x00FF)<<2)|(((x)&0xFF00)<<4); }
#define read_16()     (((PIOC->PIO_PDSR & CMASKH)>>4)|((PIOC->PIO_PDSR & CMASKL)>>2) )
#define read_8()      (read_16() & 0xFF)
#define setWriteDir() { PIOC->PIO_OER = CMASK; PIOC->PIO_PER = CMASK; }
#define setReadDir()  { PMC->PMC_PCER0 = (1 << ID_PIOC); PIOC->PIO_ODR = CMASK; }
#define write8(x)     { write16(x & 0xFF); }
#define write16(x)    { write_16(x); WR_ACTIVE; WR_STROBE; WR_IDLE; WR_IDLE; }
#define READ_16(dst)  { RD_STROBE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; dst = read_16(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_8(dst)   { READ_16(dst); dst &= 0xFF; }

// Shield Control macros.
#define PIN_LOW(port, pin)    (port)->PIO_CODR = (1<<(pin))
#define PIN_HIGH(port, pin)   (port)->PIO_SODR = (1<<(pin))
#define PIN_OUTPUT(port, pin) (port)->PIO_OER = (1<<(pin))

//################################### SAM3X TIKY ON DUE ####################################################
#define USE_TIKY_ON_DUE
...
#elif defined(__SAM3X8E__) && defined(USE_TIKY_ON_DUE)  //TIKY_ON_DUE
#warning USE_TIKY_ON_DUE
#define USES_16BIT_BUS
// configure macros for the control pins
#define RD_PORT PIOD
#define RD_PIN  0      //D25 PD0
#define WR_PORT PIOA
#define WR_PIN  15      //D24 PA15
#define CD_PORT PIOA
#define CD_PIN  14      //D23 PA14
#define CS_PORT PIOB
#define CS_PIN  26      //D22 PB26
#define RESET_PORT PIOD
#define RESET_PIN  1   //D26 PD1
// configure macros for data bus
//
#define AMASK         ((1<<7)|(1<<19))         //PA7, PA19
#define CMASK         (0x1FF<<1)               //PC1-PC9
#define DMASK         ((3<<2)|(1<<6)|(3<<9))   //PD2-PD3, PD6, PD9-PD10

#define write_16(x)   { PIOA->PIO_CODR = AMASK; PIOC->PIO_CODR = CMASK; PIOD->PIO_CODR = DMASK; \
        PIOD->PIO_SODR = (((x)&(3<<0))<<2); \
        PIOD->PIO_SODR = (((x)&(1<<2))<<4); \
        PIOD->PIO_SODR = (((x)&(1<<3))<<6); \
        PIOA->PIO_SODR = (((x)&(1<<4))<<3); \
        PIOD->PIO_SODR = (((x)&(1<<5))<<5); \
        PIOC->PIO_SODR = (((x)&(0x1FF<<6))>>5); \
        PIOA->PIO_SODR = (((x)&(1<<15))<<4); \
    }

#define read_16()     ( 0\
                        |((PIOD->PIO_PDSR & (1<<2))>>2)\
                        |((PIOD->PIO_PDSR & (1<<3))>>2)\
                        |((PIOD->PIO_PDSR & (1<<6))>>4)\
                        |((PIOD->PIO_PDSR & (1<<9))>>6)\
                        |((PIOA->PIO_PDSR & (1<<7))>>3)\
                        |((PIOD->PIO_PDSR & (1<<10))>>5)\
                        |((PIOC->PIO_PDSR & (0x1FF<<1))<<5)\
                        |((PIOA->PIO_PDSR & (1<<19)>>4))\
                      )
#define read_8()      (read_16() & 0xFF)
#define setWriteDir() {\
        PIOA->PIO_OER = AMASK; PIOA->PIO_PER = AMASK; \
        PIOC->PIO_OER = CMASK; PIOC->PIO_PER = CMASK; \
        PIOD->PIO_OER = DMASK; PIOD->PIO_PER = DMASK; \
    }
#define setReadDir()  { \
        PMC->PMC_PCER0 = (1 << ID_PIOA)|(1 << ID_PIOC)|(1 << ID_PIOD); \
        PIOA->PIO_ODR = AMASK; \
        PIOC->PIO_ODR = CMASK; \
        PIOD->PIO_ODR = DMASK; \
    }
#define write8(x)     { write16(x & 0xFF); }
// ILI9486 is slower than ILI9481
#define write16(x)    { write_16(x); WR_ACTIVE; WR_ACTIVE; WR_STROBE; }
#define READ_16(dst)  { RD_STROBE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; dst = read_16(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_8(dst)   { READ_16(dst); dst &= 0xFF; }

// Shield Control macros.
#define PIN_LOW(port, pin)    (port)->PIO_CODR = (1<<(pin))
#define PIN_HIGH(port, pin)   (port)->PIO_SODR = (1<<(pin))
#define PIN_OUTPUT(port, pin) (port)->PIO_OER = (1<<(pin))

//############################## STM32 MY BLUEPILL ###########################################
#define USE_MY_BLUEPILL
...
#elif defined(USE_MY_BLUEPILL) && (defined(ARDUINO_GENERIC_STM32F103C) || defined(ARDUINO_NUCLEO_F103C8))
#warning Uno Shield on BLUEPILL
#define RD_PORT GPIOB
#define RD_PIN  1
#define WR_PORT GPIOB
#define WR_PIN  0
#define CD_PORT GPIOA
#define CD_PIN  7
#define CS_PORT GPIOA
#define CS_PIN  6
#define RESET_PORT GPIOA
#define RESET_PIN  5

// configure macros for the data pins
#define AMASK 0x060F
#define BMASK 0x00C0
#define write_8(d)    { GPIOA->REGS(BSRR) = AMASK << 16; GPIOB->REGS(BSRR) = BMASK << 16; \
        GPIOA->REGS(BSRR) = (((d) & 3) << 9) | (((d) & 0xF0) >> 4); \
        GPIOB->REGS(BSRR) = (((d) & 0x0C) << 4); \
    }
#define read_8()      (((GPIOA->REGS(IDR) & (3<<9)) >> 9) | ((GPIOA->REGS(IDR) & (0x0F)) << 4) | ((GPIOB->REGS(IDR) & (3<<6)) >> 4))
//                                     PA10,PA9                     PA3-PA0                         PB7,PB6
#define setWriteDir() {GP_OUT(GPIOA, CRH, 0xFF0); GP_OUT(GPIOA, CRL, 0xFFFF); GP_OUT(GPIOB, CRL, 0xFF000000); }
#define setReadDir()  {GP_INP(GPIOA, CRH, 0xFF0); GP_INP(GPIOA, CRL, 0xFFFF); GP_INP(GPIOB, CRL, 0xFF000000); }

//####################################### STM32L476 ############################
#elif defined(ARDUINO_NUCLEO_L476RG) // Uno Shield on NUCLEO-L476
#warning regular Uno Shield on NUCLEO-L476
#define RD_PORT GPIOA
#define RD_PIN  0
#define WR_PORT GPIOA
#define WR_PIN  1
#define CD_PORT GPIOA
#define CD_PIN  4
#define CS_PORT GPIOB
#define CS_PIN  0
#define RESET_PORT GPIOC
#define RESET_PIN  1

#define REGS(x) x
#define PIN_MODE2(reg, pin, mode) reg=(reg&~(0x3<<((pin)<<1)))|(mode<<((pin)<<1))
#define GPIO_INIT()   { RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN | RCC_AHB2ENR_GPIOBEN | RCC_AHB2ENR_GPIOCEN; }
// configure macros for the data pins
#define write_8(d) { \
        GPIOA->REGS(BSRR) = 0x0700 << 16; \
        GPIOB->REGS(BSRR) = 0x0438 << 16; \
        GPIOC->REGS(BSRR) = 0x0080 << 16; \
        GPIOA->REGS(BSRR) = (  ((d) & (1<<0)) << 9) \
                            | (((d) & (1<<2)) << 8) \
                            | (((d) & (1<<7)) << 1); \
        GPIOB->REGS(BSRR) = (  ((d) & (1<<3)) << 0) \
                            | (((d) & (1<<4)) << 1) \
                            | (((d) & (1<<5)) >> 1) \
                            | (((d) & (1<<6)) << 4); \
        GPIOC->REGS(BSRR) = (  ((d) & (1<<1)) << 6); \
    }

#define read_8() (       (  (  (GPIOA->REGS(IDR) & (1<<9)) >> 9) \
                            | ((GPIOC->REGS(IDR) & (1<<7)) >> 6) \
                            | ((GPIOA->REGS(IDR) & (1<<10)) >> 8) \
                            | ((GPIOB->REGS(IDR) & (1<<3)) >> 0) \
                            | ((GPIOB->REGS(IDR) & (1<<5)) >> 1) \
                            | ((GPIOB->REGS(IDR) & (1<<4)) << 1) \
                            | ((GPIOB->REGS(IDR) & (1<<10)) >> 4) \
                            | ((GPIOA->REGS(IDR) & (1<<8))  >> 1)))

//                                   PA10,PA9,PA8           PB10,PB5,PB4,PB3                      PC7
#define setWriteDir() { setReadDir(); \
        GPIOA->MODER |=  0x150000; GPIOB->MODER |=  0x100540; GPIOC->MODER |=  0x4000; }
#define setReadDir()  { GPIOA->MODER &= ~0x3F0000; GPIOB->MODER &= ~0x300FC0; GPIOC->MODER &= ~0xC000; }

#define write8(x)     { write_8(x); WR_ACTIVE; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; dst = read_8(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(port, pin)    (port)->BSRR = (1<<((pin)+16))
#define PIN_HIGH(port, pin)   (port)->BSRR = (1<<(pin))
#define PIN_OUTPUT(port, pin) PIN_MODE2((port)->MODER, pin, 0x1)

// #################################### STM32 XINGGJM #######################################
#define USE_XINGGJM_BLUEPILL
...
#elif defined(USE_XINGGJM_BLUEPILL) && defined(__STM32F1__) // Uno Shield on BluePill
#warning Uno Shield on USE_XINGGJM_BLUEPILL
#define USES_16BIT_BUS
// tidied up for MAPLECORE and ST CORE
#if defined(ARDUINO_NUCLEO_F103C8)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }

#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOB
#define RD_PIN  13
#define WR_PORT GPIOB
#define WR_PIN  10
#define CD_PORT GPIOB
#define CD_PIN  12
#define CS_PORT GPIOB
#define CS_PIN  11
#define RESET_PORT GPIOB
#define RESET_PIN  1

// configure macros for the data pins
#define write_16(d) { \
        GPIOA->REGS(BSRR) = (0x81FE) << 16; \
        GPIOB->REGS(BSRR) = (0xC079) << 16; \
        GPIOA->REGS(BSRR) = 0 \
                            | (((d) & (1<<3)) << 4) \
                            | (((d) & (1<<4)) << 4) \
                            | (((d) & (1<<5)) << 2) \
                            | (((d) & (1<<6)) << 9) \
                            | (((d) & (1<<7)) >> 2) \
                            | (((d) & (1<<9)) >> 5) \
                            | (((d) & (1<<11)) >> 8) \
                            | (((d) & (1<<13)) >> 11) \
                            | (((d) & (1<<15)) >> 14); \
        GPIOB->REGS(BSRR) = 0 \
                            | (((d) & (1<<0)) << 14) \
                            | (((d) & (1<<1)) >> 1) \
                            | (((d) & (1<<2)) << 13) \
                            | (((d) & (1<<8)) >> 5) \
                            | (((d) & (1<<10)) >> 6) \
                            | (((d) & (1<<12)) >> 7) \
                            | (((d) & (1<<14)) >> 8); \
    }

#define read_16()          (((GPIOB->REGS(IDR) & (1<<14)) >> 14) \
                            | ((GPIOB->REGS(IDR) & (1<<0)) << 1) \
                            | ((GPIOB->REGS(IDR) & (1<<15)) >> 13) \
                            | ((GPIOA->REGS(IDR) & (1<<7)) >> 4) \
                            | ((GPIOB->REGS(IDR) & (1<<8)) >> 4) \
                            | ((GPIOA->REGS(IDR) & (1<<6)) >> 1) \
                            | ((GPIOA->REGS(IDR) & (1<<15)) >> 9) \
                            | ((GPIOA->REGS(IDR) & (1<<5)) << 2) \
                            | ((GPIOB->REGS(IDR) & (1<<3)) << 5) \
                            | ((GPIOA->REGS(IDR) & (1<<4)) << 5) \
                            | ((GPIOB->REGS(IDR) & (1<<4)) << 6) \
                            | ((GPIOA->REGS(IDR) & (1<<3)) << 8) \
                            | ((GPIOB->REGS(IDR) & (1<<5)) << 7) \
                            | ((GPIOA->REGS(IDR) & (1<<2)) << 11) \
                            | ((GPIOB->REGS(IDR) & (1<<6)) << 8) \
                            | ((GPIOA->REGS(IDR) & (1<<1)) << 14)))

//                                          PA15,PA8                         PA7-PA1                       PB15,PB14                     PB6-PB3,PB0
#define setWriteDir() {GP_OUT(GPIOA, CRH, 0xF000000F); GP_OUT(GPIOA, CRL, 0xFFFFFFF0); GP_OUT(GPIOB, CRH, 0xFF000000); GP_OUT(GPIOB, CRL, 0x0FFFF00F); }
#define setReadDir()  {GP_INP(GPIOA, CRH, 0xF000000F); GP_INP(GPIOA, CRL, 0xFFFFFFF0); GP_INP(GPIOB, CRH, 0xFF000000); GP_INP(GPIOB, CRL, 0x0FFFF00F); }

#define write8(x)     { write16((x) & 0xFF); }
#define write16(x)    { write_16(x); WRITE_DELAY; WR_STROBE; WR_IDLE; WR_IDLE; }
#define READ_16(dst)  { RD_STROBE; READ_DELAY; dst = read_16(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_8(dst)   { READ_16(dst); dst &= 0xFF; }

// #################################### STM32 XINGGJM #######################################
#define USE_XINGGJM_BLUEDEV
...
#elif defined(__STM32F1__) && defined(USE_XINGGJM_BLUEDEV) // Uno Shield on Blue Controller board
#warning Uno Shield on USE_XINGGJM_BLUEDEV
#define USES_16BIT_BUS
// be wise to clear all four mode bits properly.
#define GROUP_MODE(port, reg, mask, val)  {port->regs->reg = (port->regs->reg & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)

#define RD_PORT GPIOB
#define RD_PIN  13
#define WR_PORT GPIOD
#define WR_PIN  5
#define CD_PORT GPIOD
#define CD_PIN  11
#define CS_PORT GPIOD
#define CS_PIN  7
#define RESET_PORT GPIOD
#define RESET_PIN  13

// configure macros for the data pins
#define write_16(d) { \
        GPIOD->regs->BSRR = (0xC703) << 16; \
        GPIOE->regs->BSRR = (0xFF80) << 16; \
        GPIOD->regs->BSRR = 0 \
                            | (((d) & (3<<0)) << 14) \
                            | (((d) & (3<<2)) >> 2) \
                            | (((d) & (7<<13)) >> 5); \
        GPIOE->regs->BSRR = 0 \
                            | (((d) & (0x1FF<<4)) << 3); \
    }

#define read_16()          (((GPIOD->regs->IDR & (3<<14)) >> 14) \
                            | ((GPIOD->regs->IDR & (3<<0)) << 2) \
                            | ((GPIOE->regs->IDR & (0x1FF<<7)) >> 3) \
                            | ((GPIOD->regs->IDR & (7<<13)) >> 5)))

//                                    PD15-14,PD10-8                         PD1-PD0                        PE15-PE8                     PE7
#define setWriteDir() {GP_OUT(GPIOD, CRH, 0xFF000FFF); GP_OUT(GPIOD, CRL, 0x000000FF); GP_OUT(GPIOE, CRH, 0xFFFFFFFF); GP_OUT(GPIOE, CRL, 0xF0000000); }
#define setReadDir()  {GP_INP(GPIOD, CRH, 0xFF000FFF); GP_INP(GPIOD, CRL, 0x000000FF); GP_INP(GPIOE, CRH, 0xFFFFFFFF); GP_INP(GPIOE, CRL, 0xF0000000); }

#define write8(x)     { write16(x & 0xFF); }
#define write16(x)    { write_16(x); WR_ACTIVE; WR_STROBE; WR_IDLE; WR_IDLE; }
#define READ_16(dst)  { RD_STROBE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; dst = read_16(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_8(dst)   { READ_16(dst); dst &= 0xFF; }

#define PIN_HIGH(port, pin)   (port)->regs->BSRR = (1<<(pin))
//#define PIN_LOW(port, pin)    (port)->regs->BSRR = (1<<((pin)+16))
#define PIN_LOW(port, pin)    (port)->regs->ODR &= ~(1<<(pin))
#define PIN_OUTPUT(port, pin) gpio_set_mode(port, pin, GPIO_OUTPUT_PP)   //50MHz push-pull only 0-7
#define PIN_INPUT(port, pin)  gpio_set_mode(port, pin, GPIO_INPUT_FLOATING)   //digital input 

// ############################ STM32 BAART #####################################
#define USE_BLUEPILL_ADAPTER
...
#elif defined(USE_BLUEPILL_ADAPTER) && defined(__STM32F1__) // Uno Shield on BLUEPILL_ADAPTER
#warning Uno Shield on USE_BLUEPILL_ADAPTER
// tidied up for MAPLECORE and ST CORE
#if defined(ARDUINO_NUCLEO_F103C8)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; RD_ACTIVE; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }

#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOB
#define RD_PIN  5
#define WR_PORT GPIOB
#define WR_PIN  6
#define CD_PORT GPIOB
#define CD_PIN  7
#define CS_PORT GPIOB
#define CS_PIN  8
#define RESET_PORT GPIOB
#define RESET_PIN  9

// configure macros for the data pins
// MANOLO8888's wiring scheme is far simpler:
#define write_8(d)    { GPIOA->REGS(BSRR) = 0x00FF << 16; GPIOA->REGS(BSRR) = (d) & 0xFF; }
#define read_8()      (GPIOA->REGS(IDR) & 0xFF)
//                                         PA7 ..PA0
#define setWriteDir() {GP_OUT(GPIOA, CRL, 0xFFFFFFFF); }
#define setReadDir()  {GP_INP(GPIOA, CRL, 0xFFFFFFFF); }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

// ######################### STM32 PA8-15 ###################
#define USE_MAGFLIP
...
#elif  defined(USE_MAGFLIP) && (defined(__STM32F1__) || defined(STM32F103xB)) // MAPLECORE or STM32CORE 
#warning USE_MAGFLIP

#if defined(ARDUINO_NUCLEO_F103C8)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }
#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOA
#define RD_PIN  0
#define WR_PORT GPIOA
#define WR_PIN  1
#define CD_PORT GPIOA
#define CD_PIN  2
#define CS_PORT GPIOA
#define CS_PIN  3
#define RESET_PORT GPIOB
#define RESET_PIN  9

// configure macros for the data pins
#define write_8(d)    { GPIOA->REGS(BSRR) = 0xFF00 << 16; GPIOA->REGS(BSRR) = ((d) << 8) & 0xFF00; }
#define read_8()      ((GPIOA->REGS(IDR) & 0xFF00) >> 8))
//                                         PA15..PA8
#define setWriteDir() {GP_OUT(GPIOA, CRH, 0xFFFFFFFF); }
#define setReadDir()  {GP_INP(GPIOA, CRH, 0xFFFFFFFF); }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

// #################################### STM32 PIONSCOR 13SEP2020 #######################################
#define USE_PIONSCOR_BLUEPILL
...
#elif defined(USE_PIONSCOR_BLUEPILL) && (defined(__STM32F1__) || defined(ARDUINO_BLUEPILL_F103CB)) // MAPLECORE or STM32CORE 
//LCD Pins : | D15| D14| D13| D12| D11| D10| D9| D8| D7| D6| D5| D4| D3|  D2| D1| D0|
//BLUE PILL: |PB15|PB14|PB13|PB12|PB11|PB10|PB9|PB8|PB7|PB6|PB5|PB4|PB3|PA15|PB1|PB0|
//LCD Pins : |RD  |WR  |RS  |CS  |RST |
//BLUE PILL: |PA0 |PA1 |PA2 |PA3 |PA8 |

#warning SSD1963 on USE_PIONSCOR_BLUEPILL
#define USES_16BIT_BUS

#if defined(__STM32F1__)   //weird Maple Core
#define REGS(x) regs->x
#else                      //regular ST Core
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; }
//
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }

#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOA
#define RD_PIN  0
#define WR_PORT GPIOA
#define WR_PIN  1
#define CD_PORT GPIOA
#define CD_PIN  2
#define CS_PORT GPIOA
#define CS_PIN  3
#define RESET_PORT GPIOA
#define RESET_PIN  8

// configure macros for the data pins DB2 on PA15.  All others on PB0-1, PB3-15
#define BMASK 0xFFFB
#define write_16(d) { \
        GPIOA->REGS(BSRR) = (1<<15) << 16; \
        GPIOB->REGS(BSRR) = (BMASK) << 16; \
        GPIOA->REGS(BSRR) = ((d) & (1<<2)) << 13; \
        GPIOB->REGS(BSRR) = (d) & BMASK; \
    }

#define read_16()     ( ((GPIOA->REGS(IDR) & (1<<15)) >> 13) | (GPIOB->REGS(IDR) & BMASK) )

//                                              PA15                        PB15-PB8                 PB7-PB3,PB1-PB0
#define setWriteDir() {GP_OUT(GPIOA, CRH, 0xF0000000); GP_OUT(GPIOB, CRH, 0xFFFFFFFF); GP_OUT(GPIOB, CRL, 0xFFFFF0FF); }
#define setReadDir()  {GP_INP(GPIOA, CRH, 0xF0000000); GP_INP(GPIOB, CRH, 0xFFFFFFFF); GP_INP(GPIOB, CRL, 0xFFFFF0FF); }

#define write8(x)     { write16((x) & 0xFF); }
#define write16(x)    { write_16(x); WRITE_DELAY; WR_STROBE; WR_IDLE; WR_IDLE; }
#define READ_16(dst)  { RD_STROBE; READ_DELAY; dst = read_16(); RD_IDLE; RD_IDLE; RD_IDLE; }
#define READ_8(dst)   { READ_16(dst); dst &= 0xFF; }

// ######################### STM32 PB0-PB7 VADIMEL ###################
#define USE_VADIMEL_MAPLEMINI
...
#elif  defined(USE_VADIMEL_MAPLEMINI) && (defined(__STM32F1__) || defined(STM32F103xB)) // MAPLECORE or STM32CORE 
#warning USE_VADIMEL_MAPLEMINI

#if defined(ARDUINO_NUCLEO_F103C8)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }

#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOA
#define RD_PIN  0
#define WR_PORT GPIOA
#define WR_PIN  1
#define CD_PORT GPIOA
#define CD_PIN  2
#define CS_PORT GPIOA
#define CS_PIN  3
#define RESET_PORT GPIOA
#define RESET_PIN  8

// configure macros for the data pins
#define write_8(d)    { GPIOB->REGS(BSRR) = 0x00FF << 16; GPIOB->REGS(BSRR) = ((d)) & 0x00FF; }
#define read_8()      ((GPIOB->REGS(IDR) & 0x00FF))
//                                          PB7..PB0
#define setWriteDir() {GP_OUT(GPIOB, CRL, 0xFFFFFFFF); }
#define setReadDir()  {GP_INP(GPIOB, CRL, 0xFFFFFFFF); }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

// ######################### STM32 PB8-PB15 RAVI_KANCHAN ###################
#define USE_RAVI_KANCHAN_BLUEPILL
...
#elif  defined(USE_RAVI_KANCHAN_BLUEPILL) && (defined(__STM32F1__) || defined(STM32F103xB)) // MAPLECORE or STM32CORE 
#warning USE_RAVI_KANCHAN_BLUEPILL

#if defined(ARDUINO_NUCLEO_F103C8)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }

#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOA
#define RD_PIN  0
#define WR_PORT GPIOA
#define WR_PIN  1
#define CD_PORT GPIOA
#define CD_PIN  2
#define CS_PORT GPIOA
#define CS_PIN  3
#define RESET_PORT GPIOB
#define RESET_PIN  0

// configure macros for the data pins
#define write_8(d)    { GPIOB->REGS(BSRR) = 0xFF00 << 16; GPIOB->REGS(BSRR) = ((d) << 8) & 0xFF00; }
#define read_8()      ((GPIOB->REGS(IDR) & 0xFF00) >> 8)
//                                          PB15..PB8
#define setWriteDir() {GP_OUT(GPIOB, CRH, 0xFFFFFFFF); }
#define setReadDir()  {GP_INP(GPIOB, CRH, 0xFFFFFFFF); }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

// ######################### ESP32 on TTGO D1 R32 ###################
#elif defined(ESP32)       //regular UNO shield on TTGO D1 R32 (ESP32)
#define LCD_RD  2  //LED
#define LCD_WR  4
#define LCD_RS 15  //hard-wired to A2 (GPIO35) 
#define LCD_CS 33  //hard-wired to A3 (GPIO34)
#define LCD_RST 32 //hard-wired to A4 (GPIO36)

#define LCD_D0 12
#define LCD_D1 13
#define LCD_D2 26
#define LCD_D3 25
#define LCD_D4 17
#define LCD_D5 16
#define LCD_D6 27
#define LCD_D7 14

#define RD_PORT PORTC
#define RD_PIN  LCD_RD
#define WR_PORT PORTC
#define WR_PIN  LCD_WR
#define CD_PORT PORTC
#define CD_PIN  LCD_RS
#define CS_PORT PORTC
#define CS_PIN  LCD_CS
#define RESET_PORT PORTC
#define RESET_PIN  LCD_RST

static inline uint32_t map_8(uint32_t d)
{
    return (
               0
               | ((d & (1 << 0)) << (LCD_D0 - 0))
               | ((d & (1 << 1)) << (LCD_D1 - 1))
               | ((d & (1 << 2)) << (LCD_D2 - 2))
               | ((d & (1 << 3)) << (LCD_D3 - 3))
               | ((d & (1 << 4)) << (LCD_D4 - 4))
               | ((d & (1 << 5)) << (LCD_D5 - 5))
               | ((d & (1 << 6)) << (LCD_D6 - 6))
               | ((d & (1 << 7)) << (LCD_D7 - 7))
           );
}

static inline uint8_t map_32(uint32_t d)
{
    return (
               0
               | ((d & (1 << LCD_D0)) >> (LCD_D0 - 0))
               | ((d & (1 << LCD_D1)) >> (LCD_D1 - 1))
               | ((d & (1 << LCD_D2)) >> (LCD_D2 - 2))
               | ((d & (1 << LCD_D3)) >> (LCD_D3 - 3))
               | ((d & (1 << LCD_D4)) >> (LCD_D4 - 4))
               | ((d & (1 << LCD_D5)) >> (LCD_D5 - 5))
               | ((d & (1 << LCD_D6)) >> (LCD_D6 - 6))
               | ((d & (1 << LCD_D7)) >> (LCD_D7 - 7))
           );
}

static inline void write_8(uint16_t data)
{
    GPIO.out_w1tc = map_8(0xFF);  //could define once as DMASK
    GPIO.out_w1ts = map_8(data);
}

static inline uint8_t read_8()
{
    return map_32(GPIO.in);
}
static void setWriteDir()
{
    pinMode(LCD_D0, OUTPUT);
    pinMode(LCD_D1, OUTPUT);
    pinMode(LCD_D2, OUTPUT);
    pinMode(LCD_D3, OUTPUT);
    pinMode(LCD_D4, OUTPUT);
    pinMode(LCD_D5, OUTPUT);
    pinMode(LCD_D6, OUTPUT);
    pinMode(LCD_D7, OUTPUT);
}

static void setReadDir()
{
    pinMode(LCD_D0, INPUT);
    pinMode(LCD_D1, INPUT);
    pinMode(LCD_D2, INPUT);
    pinMode(LCD_D3, INPUT);
    pinMode(LCD_D4, INPUT);
    pinMode(LCD_D5, INPUT);
    pinMode(LCD_D6, INPUT);
    pinMode(LCD_D7, INPUT);
}

#define WRITE_DELAY { }
#define READ_DELAY  { }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

#define PIN_LOW(p, b)        (digitalWrite(b, LOW))
#define PIN_HIGH(p, b)       (digitalWrite(b, HIGH))
#define PIN_OUTPUT(p, b)     (pinMode(b, OUTPUT))

//#### UNTESTED ############### COOCOX_STM32 on STM32103RB ##############################
//#define USE_COOCOX_STM32
#elif defined(USE_COOCOX_STM32) && (defined(ARDUINO_GENERIC_STM32F103R)||defined(ARDUINO_GENERIC_F103RBTX))
#warning Uno Shield on USE_COOCOX_STM32

//LCD pins  |D7 |D6 |D5 |D4 |D3 |D2  |D1 |D0  | |RD |WR |RS |CS |RST| |SD_SS|SD_DI|SD_DO|SD_SCK| |SDA|SCL|
//STM32 pin |PD2|PC9|PC8|PC7|PC6|PC12|PA8|PA15| |PC0|PC1|PC2|PC3|PB7| |PB12 |PB15 |PB14 |PB13  | |PB7|PB6|

#if defined(ARDUINO_GENERIC_F103RBTX)   //regular CMSIS libraries
#define REGS(x) x
#define GPIO_INIT()   { RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_IOPBEN | RCC_APB2ENR_IOPCEN | RCC_APB2ENR_IOPDEN | RCC_APB2ENR_AFIOEN; \
        AFIO->MAPR |= AFIO_MAPR_SWJ_CFG_1;}
#else                                                                  //weird Maple libraries
#define REGS(x) regs->x
#endif

#define WRITE_DELAY { }
#define READ_DELAY  { RD_ACTIVE4; }
#define GROUP_MODE(port, reg, mask, val)  {port->REGS(reg) = (port->REGS(reg) & ~(mask)) | ((mask)&(val)); }
#define GP_OUT(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x33333333)
#define GP_INP(port, reg, mask)           GROUP_MODE(port, reg, mask, 0x44444444)
#define PIN_OUTPUT(port, pin) {\
        if (pin < 8) {GP_OUT(port, CRL, 0xF<<((pin)<<2));} \
        else {GP_OUT(port, CRH, 0xF<<((pin&7)<<2));} \
    }
#define PIN_INPUT(port, pin) { \
        if (pin < 8) { GP_INP(port, CRL, 0xF<<((pin)<<2)); } \
        else { GP_INP(port, CRH, 0xF<<((pin&7)<<2)); } \
    }
#define PIN_HIGH(port, pin)   (port)-> REGS(BSRR) = (1<<(pin))
#define PIN_LOW(port, pin)    (port)-> REGS(BSRR) = (1<<((pin)+16))

#define RD_PORT GPIOC
#define RD_PIN  0
#define WR_PORT GPIOC
#define WR_PIN  1
#define CD_PORT GPIOC
#define CD_PIN  2
#define CS_PORT GPIOC
#define CS_PIN  3
#define RESET_PORT GPIOB
#define RESET_PIN  7

// configure macros for the data pins
#define AMASK ((1<<8)|(1<<15))
#define CMASK ((15<<6)|(1<<12))
#define DMASK (1<<2)
#define write_8(d)    { GPIOA->REGS(BSRR) = AMASK << 16; GPIOC->REGS(BSRR) = CMASK << 16;\
                        GPIOD->REGS(BSRR) = DMASK << 16; \
                        GPIOA->REGS(BSRR) = (((d) & (1<<0)) << 15); \
                        GPIOA->REGS(BSRR) = (((d) & (1<<1)) << 4); \
                        GPIOC->REGS(BSRR) = (((d) & (1<<2)) << 10); \
                        GPIOC->REGS(BSRR) = (((d) &(15<<3)) << 3); \
                        GPIOD->REGS(BSRR) = (((d) & (1<<7)) >> 5); \
                      }
#define read_8()     ( ((GPIOA->REGS(IDR) & (1<<15)) >> 15) \
                     | ((GPIOA->REGS(IDR) & (1<<8))  >> 7) \
                     | ((GPIOC->REGS(IDR) & (1<<12)) >> 10) \
                     | ((GPIOC->REGS(IDR) & (15<<6)) >> 3) \
                     | ((GPIOD->REGS(IDR) & (1<<2))  << 5) \
                     )
//                                          PA15,PA8                 PC12,PC9-PC8                         PC7,PC6                        PD2
#define setWriteDir() {GP_OUT(GPIOA, CRH, 0xF000000F); GP_OUT(GPIOC, CRH, 0xF00FF); GP_OUT(GPIOC, CRL, 0xFF000000); GP_OUT(GPIOD, CRL, 0xF00); }
#define setReadDir()  {GP_INP(GPIOA, CRH, 0xF000000F); GP_INP(GPIOC, CRH, 0xF00FF); GP_INP(GPIOC, CRL, 0xFF000000); GP_INP(GPIOD, CRL, 0xF00); }

#define write8(x)     { write_8(x); WRITE_DELAY; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; READ_DELAY; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }

//#### UNTESTED ############# MKR2UNO ############################
//#define USE_MKR2UNO
#elif defined(__SAMD21G18A__) && defined(USE_MKR2UNO) //regular UNO shield on MKE2UNO Adapter
//LCD pins   |D7  |D6  |D5  |D4  |D3  |D2  |D1  |D0  | |RD |WR |RS  |CS  |RST | |SDCS|SDDI|SDDO|SDSCK|
//SAMD21 pin |PA21|PA20|PB11|PB10|PA11|PA10|PA17|PA16| |PA2|PB2|PB3 |PA4 |PA5 | |PA23|PA8 |PA9 |PA22 |
//MKR2UNO pin|7   |6   |5   |4   |3   |2   |9   |8   | |A0 |A1 |A2  |A3  |A4  | |10  |11  |12  |13   |
#include "sam.h"
 // configure macros for the control pins
#define RD_PORT PORT->Group[0]
#define RD_PIN  2
#define WR_PORT PORT->Group[1]
#define WR_PIN  2
#define CD_PORT PORT->Group[1]
#define CD_PIN  3
#define CS_PORT PORT->Group[0]
#define CS_PIN  4
#define RESET_PORT PORT->Group[0]
#define RESET_PIN  5
 // configure macros for data bus
#define AMASK ((3<<20)|(3<<10)|(3<<16)) //|PA21|PA20|PA11|PA10|PA17|PA16|
#define BMASK ((1<<11)|(1<<10))         //|PB11|PB10|
#define WRMASK        ((0<<22) | (1<<28) | (1<<30)) //
#define RDMASK        ((1<<17) | (1<<28) | (1<<30)) //
#define write_8(x) {\
    PORT->Group[0].OUTCLR.reg = AMASK;PORT->Group[1].OUTCLR.reg = BMASK;\
    PORT->Group[0].OUTSET.reg = (((x) & (3<<0)) << 16)\
                               |(((x) & (3<<2)) << 8)\
                               |(((x) & (3<<6)) << 14);\
    PORT->Group[1].OUTSET.reg = (((x) & (3<<4)) << 6);\
                   }
#define read_8()   (((PORT->Group[0].IN.reg >> 16) & (3<<0))\
                   |((PORT->Group[0].IN.reg >> 8) & (3<<2))\
                   |((PORT->Group[1].IN.reg >> 6) &  (3<<4))\
                   |((PORT->Group[0].IN.reg >> 14) & (3<<6)))
#define setWriteDir() { PORT->Group[0].DIRSET.reg = AMASK;PORT->Group[0].DIRSET.reg = BMASK; \
                      PORT->Group[0].WRCONFIG.reg = (AMASK & 0xFFFF) | WRMASK; \
                      PORT->Group[1].WRCONFIG.reg = (BMASK & 0xFFFF) | WRMASK; \
                      PORT->Group[0].WRCONFIG.reg = (AMASK>>16) | WRMASK | (1<<31); \
                        }
#define setReadDir()  { PORT->Group[0].DIRCLR.reg = AMASK;PORT->Group[1].DIRCLR.reg = BMASK; \
                      PORT->Group[0].WRCONFIG.reg = (AMASK & 0xFFFF) | RDMASK; \
                      PORT->Group[1].WRCONFIG.reg = (BMASK & 0xFFFF) | RDMASK; \
                      PORT->Group[0].WRCONFIG.reg = (AMASK>>16) | RDMASK | (1<<31); \
                        }
#define write8(x)     { write_8(x); WR_ACTIVE; WR_STROBE; }
#define write16(x)    { uint8_t h = (x)>>8, l = x; write8(h); write8(l); }
#define READ_8(dst)   { RD_STROBE; dst = read_8(); RD_IDLE; }
#define READ_16(dst)  { uint8_t hi; READ_8(hi); READ_8(dst); dst |= (hi << 8); }
 // Shield Control macros.
#define PIN_LOW(port, pin)    (port).OUTCLR.reg = (1<<(pin))
#define PIN_HIGH(port, pin)   (port).OUTSET.reg = (1<<(pin))
#define PIN_OUTPUT(port, pin) (port).DIR.reg |= (1<<(pin))

// #########################    ###################
