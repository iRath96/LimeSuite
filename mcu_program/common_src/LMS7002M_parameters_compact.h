/**
@file	LMS7002M_parameters.cpp
@author Lime Microsystems (www.limemicro.com)
@brief 	Definition of LMS7002M transceiver control parameters registers
*/
#ifndef LMS7002M_PARAMETERS_COMPACT_H
#define LMS7002M_PARAMETERS_COMPACT_H

#include "typedefs.h"

typedef struct
{
    uint16_t address;
    uint8_t msblsb;
} LMS7Parameter;

//#define DCOFFI_RFE 0x010E, 13<<4 |  7
//#define DCOFFQ_RFE 0x010E, 6<<4 |  0
extern ROM const LMS7Parameter DCOFFI_RFE;
extern ROM const LMS7Parameter DCOFFQ_RFE;

//#define IQCORR_TXTSP 0x0203, 11<<4 |  0
//#define DCCORRI_TXTSP 0x0204, 15<<4 |  8
//#define DCCORRQ_TXTSP 0x0204, 7<<4 |  0

extern ROM const LMS7Parameter DCCORRI_TXTSP;
extern ROM const LMS7Parameter DCCORRQ_TXTSP;
extern ROM const LMS7Parameter IQCORR_TXTSP;
//#define IQCORR_RXTSP 0x0403, 11<<4 |  0
extern ROM const LMS7Parameter IQCORR_RXTSP;

//#define GCORRQ_TXTSP 0x0201, 10<<4 |  0
//#define GCORRI_TXTSP 0x0202, 10<<4 |  0
extern ROM const LMS7Parameter GCORRI_TXTSP;
extern ROM const LMS7Parameter GCORRQ_TXTSP;
//#define GCORRQ_RXTSP 0x0401, 10<<4 |  0
//#define GCORRI_RXTSP 0x0402, 10<<4 |  0
extern ROM const LMS7Parameter GCORRI_RXTSP;
extern ROM const LMS7Parameter GCORRQ_RXTSP;

#define SECTION_LimeLight 0x0020, 0x002F
#define SECTION_AFE 0x0082, 0x0082
#define SECTION_BIAS 0x0084, 0x0084
#define SECTION_XBUF 0x0085, 0x0085
#define SECTION_CGEN 0x0086, 0x008C
#define SECTION_LDO 0x0092, 0x00A7
#define SECTION_BIST 0x00A8, 0x00A8
#define SECTION_CDS 0x00AD, 0x00AE
#define SECTION_TRF 0x0100, 0x0104
#define SECTION_TBB 0x0105, 0x010A
#define SECTION_RFE 0x010C, 0x0114
#define SECTION_RBB 0x0115, 0x011A
#define SECTION_SX 0x011C, 0x0124
#define SECTION_TxTSP 0x0200, 0x020C
#define SECTION_TxNCO 0x0240, 0x0261
#define SECTION_RxTSP 0x0400, 0x040F
#define SECTION_RxNCO 0x0440, 0x0461
#define SECTION_RSSI_DC_CALIBRATION 0x05C0,0x05CC

//parameters are defines as uint16_t address, uint16_t msb_lsb bits
#define MRST_TX_B 0x0020, 14<<4 |  14
#define LRST_TX_A 0x0020, 13<<4 |  13
#define MRST_TX_A 0x0020, 12<<4 |  12
#define LRST_RX_B 0x0020, 11<<4 |  11
#define MRST_RX_B 0x0020, 10<<4 |  10
#define LRST_RX_A 0x0020, 9<<4 |  9
#define MRST_RX_A 0x0020, 8<<4 |  8
#define SRST_RXFIFO 0x0020, 7<<4 |  7
#define SRST_TXFIFO 0x0020, 6<<4 |  6
#define RXEN_B 0x0020, 5<<4 |  5
#define RXEN_A 0x0020, 4<<4 |  4
#define TXEN_B 0x0020, 3<<4 |  3
#define TXEN_A 0x0020, 2<<4 |  2
#define MAC 0x0020, 1<<4 |  0
#define TX_CLK_PE 0x0021, 11<<4 |  11
#define RX_CLK_PE 0x0021, 10<<4 |  10
#define SDA_PE 0x0021, 9<<4 |  9
#define SDA_DS 0x0021, 8<<4 |  8
#define SCL_PE 0x0021, 7<<4 |  7
#define SCL_DS 0x0021, 6<<4 |  6
#define SDIO_DS 0x0021, 5<<4 |  5
#define SDIO_PE 0x0021, 4<<4 |  4
#define SDO_PE 0x0021, 3<<4 |  3
#define SCLK_PE 0x0021, 2<<4 |  2
#define SEN_PE 0x0021, 1<<4 |  1
#define SPIMODE 0x0021, 0<<4 |  0
#define DIQ2_DS 0x0022, 11<<4 |  11
#define DIQ2_PE 0x0022, 10<<4 |  10
#define IQ_SEL_EN_2_PE 0x0022, 9<<4 |  9
#define TXNRX2_PE 0x0022, 8<<4 |  8
#define FCLK2_PE 0x0022, 7<<4 |  7
#define MCLK2_PE 0x0022, 6<<4 |  6
#define DIQ1_DS 0x0022, 5<<4 |  5
#define DIQ1_PE 0x0022, 4<<4 |  4
#define IQ_SEL_EN_1_PE 0x0022, 3<<4 |  3
#define TXNRX1_PE 0x0022, 2<<4 |  2
#define FCLK1_PE 0x0022, 1<<4 |  1
#define MCLK1_PE 0x0022, 0<<4 |  0
#define DIQDIRCTR2 0x0023, 15<<4 |  15
#define DIQDIR2 0x0023, 14<<4 |  14
#define DIQDIRCTR1 0x0023, 13<<4 |  13
#define DIQDIR1 0x0023, 12<<4 |  12
#define ENABLEDIRCTR2 0x0023, 11<<4 |  11
#define ENABLEDIR2 0x0023, 10<<4 |  10
#define ENABLEDIRCTR1 0x0023, 9<<4 |  9
#define ENABLEDIR1 0x0023, 8<<4 |  8
#define MOD_EN 0x0023, 6<<4 |  6
#define LML2_FIDM 0x0023, 5<<4 |  5
#define LML2_TXNRXIQ 0x0023, 4<<4 |  4
#define LML2_MODE 0x0023, 3<<4 |  3
#define LML1_FIDM 0x0023, 2<<4 |  2
#define LML1_TXNRXIQ 0x0023, 1<<4 |  1
#define LML1_MODE 0x0023, 0<<4 |  0
#define LML1_S3S 0x0024, 15<<4 |  14
#define LML1_S2S 0x0024, 13<<4 |  12
#define LML1_S1S 0x0024, 11<<4 |  10
#define LML1_S0S 0x0024, 9<<4 |  8
#define LML1_BQP 0x0024, 7<<4 |  6
#define LML1_BIP 0x0024, 5<<4 |  4
#define LML1_AQP 0x0024, 3<<4 |  2
#define LML1_AIP 0x0024, 1<<4 |  0
#define LML1_BB2RF_PST 0x0025, 15<<4 |  8
#define LML1_BB2RF_PRE 0x0025, 7<<4 |  0
#define LML1_RF2BB_PST 0x0026, 15<<4 |  8
#define LML1_RF2BB_PRE 0x0026, 7<<4 |  0
#define LML2_S3S 0x0027, 15<<4 |  14
#define LML2_S2S 0x0027, 13<<4 |  12
#define LML2_S1S 0x0027, 11<<4 |  10
#define LML2_S0S 0x0027, 9<<4 |  8
#define LML2_BQP 0x0027, 7<<4 |  6
#define LML2_BIP 0x0027, 5<<4 |  4
#define LML2_AQP 0x0027, 3<<4 |  2
#define LML2_AIP 0x0027, 1<<4 |  0
#define LML2_BB2RF_PST 0x0028, 15<<4 |  8
#define LML2_BB2RF_PRE 0x0028, 7<<4 |  0
#define LML2_RF2BB_PST 0x0029, 15<<4 |  8
#define LML2_RF2BB_PRE 0x0029, 7<<4 |  0
#define RX_MUX 0x002A, 11<<4 |  10
#define TX_MUX 0x002A, 9<<4 |  8
#define TXRDCLK_MUX 0x002A, 7<<4 |  6
#define TXWRCLK_MUX 0x002A, 5<<4 |  4
#define RXRDCLK_MUX 0x002A, 3<<4 |  2
#define RXWRCLK_MUX 0x002A, 1<<4 |  0
#define FCLK2_INV 0x002B, 15<<4 |  15
#define FCLK1_INV 0x002B, 14<<4 |  14
#define MCLK2DLY 0x002B, 13<<4 |  12
#define MCLK1DLY 0x002B, 11<<4 |  10
#define MCLK2SRC 0x002B, 5<<4 |  4
#define MCLK1SRC 0x002B, 3<<4 |  2
#define TXDIVEN 0x002B, 1<<4 |  1
#define RXDIVEN 0x002B, 0<<4 |  0
#define TXTSPCLKA_DIV 0x002C, 15<<4 |  8
#define RXTSPCLKA_DIV 0x002C, 7<<4 |  0
#define MIMO_SISO 0x002E, 15<<4 |  15
#define VER 0x002F, 15<<4 |  11
#define REV 0x002F, 10<<4 |  6
#define MASK 0x002F, 5<<4 |  0
#define EN_DIR_LDO 0x0081, 3<<4 |  3
#define EN_DIR_CGEN 0x0081, 2<<4 |  2
#define EN_DIR_XBUF 0x0081, 1<<4 |  1
#define EN_DIR_AFE 0x0081, 0<<4 |  0
#define ISEL_DAC_AFE 0x0082, 15<<4 |  13
#define MODE_INTERLEAVE_AFE 0x0082, 12<<4 |  12
#define MUX_AFE_1 0x0082, 11<<4 |  10
#define MUX_AFE_2 0x0082, 9<<4 |  8
#define PD_AFE 0x0082, 5<<4 |  5
#define PD_RX_AFE1 0x0082, 4<<4 |  4
#define PD_RX_AFE2 0x0082, 3<<4 |  3
#define PD_TX_AFE1 0x0082, 2<<4 |  2
#define PD_TX_AFE2 0x0082, 1<<4 |  1
#define EN_G_AFE 0x0082, 0<<4 |  0
#define MUX_BIAS_OUT 0x0084, 12<<4 |  11
#define RP_CALIB_BIAS 0x0084, 10<<4 |  6
#define PD_FRP_BIAS 0x0084, 4<<4 |  4
#define PD_F_BIAS 0x0084, 3<<4 |  3
#define PD_PTRP_BIAS 0x0084, 2<<4 |  2
#define PD_PT_BIAS 0x0084, 1<<4 |  1
#define PD_BIAS_MASTER 0x0084, 0<<4 |  0
#define SLFB_XBUF_RX 0x0085, 8<<4 |  8
#define SLFB_XBUF_TX 0x0085, 7<<4 |  7
#define BYP_XBUF_RX 0x0085, 6<<4 |  6
#define BYP_XBUF_TX 0x0085, 5<<4 |  5
#define EN_OUT2_XBUF_TX 0x0085, 4<<4 |  4
#define EN_TBUFIN_XBUF_RX 0x0085, 3<<4 |  3
#define PD_XBUF_RX 0x0085, 2<<4 |  2
#define PD_XBUF_TX 0x0085, 1<<4 |  1
#define EN_G_XBUF 0x0085, 0<<4 |  0
#define SPDUP_VCO_CGEN 0x0086, 15<<4 |  15
#define RESET_N_CGEN 0x0086, 14<<4 |  14
#define EN_ADCCLKH_CLKGN 0x0086, 11<<4 |  11
#define EN_COARSE_CKLGEN 0x0086, 10<<4 |  10
#define EN_INTONLY_SDM_CGEN 0x0086, 9<<4 |  9
#define EN_SDM_CLK_CGEN 0x0086, 8<<4 |  8
#define PD_CP_CGEN 0x0086, 6<<4 |  6
#define PD_FDIV_FB_CGEN 0x0086, 5<<4 |  5
#define PD_FDIV_O_CGEN 0x0086, 4<<4 |  4
#define PD_SDM_CGEN 0x0086, 3<<4 |  3
#define PD_VCO_CGEN 0x0086, 2<<4 |  2
#define PD_VCO_COMP_CGEN 0x0086, 1<<4 |  1
#define EN_G_CGEN 0x0086, 0<<4 |  0
#define FRAC_SDM_CGEN 0x0087, 19<<4 |  0
#define INT_SDM_CGEN 0x0088, 13<<4 |  4
#define REV_SDMCLK_CGEN 0x0089, 15<<4 |  15
#define SEL_SDMCLK_CGEN 0x0089, 14<<4 |  14
#define SX_DITHER_EN_CGEN 0x0089, 13<<4 |  13
#define CLKH_OV_CLKL_CGEN 0x0089, 12<<4 |  11
#define DIV_OUTCH_CGEN 0x0089, 10<<4 |  3
#define TST_CGEN 0x0089, 2<<4 |  0
#define REV_CLKDAC_CGEN 0x008A, 14<<4 |  14
#define REV_CLKADC_CGEN 0x008A, 13<<4 |  13
#define REVPH_PFD_CGEN 0x008A, 12<<4 |  12
#define IOFFSET_CP_CGEN 0x008A, 11<<4 |  6
#define IPULSE_CP_CGEN 0x008A, 5<<4 |  0
#define ICT_VCO_CGEN 0x008B, 13<<4 |  9
#define CSW_VCO_CGEN 0x008B, 8<<4 |  1
#define COARSE_START_CGEN 0x008B, 0<<4 |  0
#define COARSE_STEPDONE_CGEN 0x008C, 15<<4 |  15
#define COARSEPLL_COMPO_CGEN 0x008C, 14<<4 |  14
#define VCO_CMPHO_CGEN 0x008C, 13<<4 |  13
#define VCO_CMPLO_CGEN 0x008C, 12<<4 |  12
#define CP2_CGEN 0x008C, 11<<4 |  8
#define CP3_CGEN 0x008C, 7<<4 |  4
#define CZ_CGEN 0x008C, 3<<4 |  0
#define EN_LDO_DIG 0x0092, 15<<4 |  15
#define EN_LDO_DIGGN 0x0092, 14<<4 |  14
#define EN_LDO_DIGSXR 0x0092, 13<<4 |  13
#define EN_LDO_DIGSXT 0x0092, 12<<4 |  12
#define EN_LDO_DIVGN 0x0092, 11<<4 |  11
#define EN_LDO_DIVSXR 0x0092, 10<<4 |  10
#define EN_LDO_DIVSXT 0x0092, 9<<4 |  9
#define EN_LDO_LNA12 0x0092, 8<<4 |  8
#define EN_LDO_LNA14 0x0092, 7<<4 |  7
#define EN_LDO_MXRFE 0x0092, 6<<4 |  6
#define EN_LDO_RBB 0x0092, 5<<4 |  5
#define EN_LDO_RXBUF 0x0092, 4<<4 |  4
#define EN_LDO_TBB 0x0092, 3<<4 |  3
#define EN_LDO_TIA12 0x0092, 2<<4 |  2
#define EN_LDO_TIA14 0x0092, 1<<4 |  1
#define EN_G_LDO 0x0092, 0<<4 |  0
#define EN_LOADIMP_LDO_TLOB 0x0093, 15<<4 |  15
#define EN_LOADIMP_LDO_TPAD 0x0093, 14<<4 |  14
#define EN_LOADIMP_LDO_TXBUF 0x0093, 13<<4 |  13
#define EN_LOADIMP_LDO_VCOGN 0x0093, 12<<4 |  12
#define EN_LOADIMP_LDO_VCOSXR 0x0093, 11<<4 |  11
#define EN_LOADIMP_LDO_VCOSXT 0x0093, 10<<4 |  10
#define EN_LDO_AFE 0x0093, 9<<4 |  9
#define EN_LDO_CPGN 0x0093, 8<<4 |  8
#define EN_LDO_CPSXR 0x0093, 7<<4 |  7
#define EN_LDO_TLOB 0x0093, 6<<4 |  6
#define EN_LDO_TPAD 0x0093, 5<<4 |  5
#define EN_LDO_TXBUF 0x0093, 4<<4 |  4
#define EN_LDO_VCOGN 0x0093, 3<<4 |  3
#define EN_LDO_VCOSXR 0x0093, 2<<4 |  2
#define EN_LDO_VCOSXT 0x0093, 1<<4 |  1
#define EN_LDO_CPSXT 0x0093, 0<<4 |  0
#define EN_LOADIMP_LDO_CPSXT 0x0094, 15<<4 |  15
#define EN_LOADIMP_LDO_DIG 0x0094, 14<<4 |  14
#define EN_LOADIMP_LDO_DIGGN 0x0094, 13<<4 |  13
#define EN_LOADIMP_LDO_DIGSXR 0x0094, 12<<4 |  12
#define EN_LOADIMP_LDO_DIGSXT 0x0094, 11<<4 |  11
#define EN_LOADIMP_LDO_DIVGN 0x0094, 10<<4 |  10
#define EN_LOADIMP_LDO_DIVSXR 0x0094, 9<<4 |  9
#define EN_LOADIMP_LDO_DIVSXT 0x0094, 8<<4 |  8
#define EN_LOADIMP_LDO_LNA12 0x0094, 7<<4 |  7
#define EN_LOADIMP_LDO_LNA14 0x0094, 6<<4 |  6
#define EN_LOADIMP_LDO_MXRFE 0x0094, 5<<4 |  5
#define EN_LOADIMP_LDO_RBB 0x0094, 4<<4 |  4
#define EN_LOADIMP_LDO_RXBUF 0x0094, 3<<4 |  3
#define EN_LOADIMP_LDO_TBB 0x0094, 2<<4 |  2
#define EN_LOADIMP_LDO_TIA12 0x0094, 1<<4 |  1
#define EN_LOADIMP_LDO_TIA14 0x0094, 0<<4 |  0
#define BYP_LDO_TBB 0x0095, 15<<4 |  15
#define BYP_LDO_TIA12 0x0095, 14<<4 |  14
#define BYP_LDO_TIA14 0x0095, 13<<4 |  13
#define BYP_LDO_TLOB 0x0095, 12<<4 |  12
#define BYP_LDO_TPAD 0x0095, 11<<4 |  11
#define BYP_LDO_TXBUF 0x0095, 10<<4 |  10
#define BYP_LDO_VCOGN 0x0095, 9<<4 |  9
#define BYP_LDO_VCOSXR 0x0095, 8<<4 |  8
#define BYP_LDO_VCOSXT 0x0095, 7<<4 |  7
#define EN_LOADIMP_LDO_AFE 0x0095, 2<<4 |  2
#define EN_LOADIMP_LDO_CPGN 0x0095, 1<<4 |  1
#define EN_LOADIMP_LDO_CPSXR 0x0095, 0<<4 |  0
#define BYP_LDO_AFE 0x0096, 15<<4 |  15
#define BYP_LDO_CPGN 0x0096, 14<<4 |  14
#define BYP_LDO_CPSXR 0x0096, 13<<4 |  13
#define BYP_LDO_CPSXT 0x0096, 12<<4 |  12
#define BYP_LDO_DIG 0x0096, 11<<4 |  11
#define BYP_LDO_DIGGN 0x0096, 10<<4 |  10
#define BYP_LDO_DIGSXR 0x0096, 9<<4 |  9
#define BYP_LDO_DIGSXT 0x0096, 8<<4 |  8
#define BYP_LDO_DIVGN 0x0096, 7<<4 |  7
#define BYP_LDO_DIVSXR 0x0096, 6<<4 |  6
#define BYP_LDO_DIVSXT 0x0096, 5<<4 |  5
#define BYP_LDO_LNA12 0x0096, 4<<4 |  4
#define BYP_LDO_LNA14 0x0096, 3<<4 |  3
#define BYP_LDO_MXRFE 0x0096, 2<<4 |  2
#define BYP_LDO_RBB 0x0096, 1<<4 |  1
#define BYP_LDO_RXBUF 0x0096, 0<<4 |  0
#define SPDUP_LDO_DIVSXR 0x0097, 15<<4 |  15
#define SPDUP_LDO_DIVSXT 0x0097, 14<<4 |  14
#define SPDUP_LDO_LNA12 0x0097, 13<<4 |  13
#define SPDUP_LDO_LNA14 0x0097, 12<<4 |  12
#define SPDUP_LDO_MXRFE 0x0097, 11<<4 |  11
#define SPDUP_LDO_RBB 0x0097, 10<<4 |  10
#define SPDUP_LDO_RXBUF 0x0097, 9<<4 |  9
#define SPDUP_LDO_TBB 0x0097, 8<<4 |  8
#define SPDUP_LDO_TIA12 0x0097, 7<<4 |  7
#define SPDUP_LDO_TIA14 0x0097, 6<<4 |  6
#define SPDUP_LDO_TLOB 0x0097, 5<<4 |  5
#define SPDUP_LDO_TPAD 0x0097, 4<<4 |  4
#define SPDUP_LDO_TXBUF 0x0097, 3<<4 |  3
#define SPDUP_LDO_VCOGN 0x0097, 2<<4 |  2
#define SPDUP_LDO_VCOSXR 0x0097, 1<<4 |  1
#define SPDUP_LDO_VCOSXT 0x0097, 0<<4 |  0
#define SPDUP_LDO_AFE 0x0098, 8<<4 |  8
#define SPDUP_LDO_CPGN 0x0098, 7<<4 |  7
#define SPDUP_LDO_CPSXR 0x0098, 6<<4 |  6
#define SPDUP_LDO_CPSXT 0x0098, 5<<4 |  5
#define SPDUP_LDO_DIG 0x0098, 4<<4 |  4
#define SPDUP_LDO_DIGGN 0x0098, 3<<4 |  3
#define SPDUP_LDO_DIGSXR 0x0098, 2<<4 |  2
#define SPDUP_LDO_DIGSXT 0x0098, 1<<4 |  1
#define SPDUP_LDO_DIVGN 0x0098, 0<<4 |  0
#define RDIV_VCOSXR 0x0099, 15<<4 |  8
#define RDIV_VCOSXT 0x0099, 7<<4 |  0
#define RDIV_TXBUF 0x009A, 15<<4 |  8
#define RDIV_VCOGN 0x009A, 7<<4 |  0
#define RDIV_TLOB 0x009B, 15<<4 |  8
#define RDIV_TPAD 0x009B, 7<<4 |  0
#define RDIV_TIA12 0x009C, 15<<4 |  8
#define RDIV_TIA14 0x009C, 7<<4 |  0
#define RDIV_RXBUF 0x009D, 15<<4 |  8
#define RDIV_TBB 0x009D, 7<<4 |  0
#define RDIV_MXRFE 0x009E, 15<<4 |  8
#define RDIV_RBB 0x009E, 7<<4 |  0
#define RDIV_LNA12 0x009F, 15<<4 |  8
#define RDIV_LNA14 0x009F, 7<<4 |  0
#define RDIV_DIVSXR 0x00A0, 15<<4 |  8
#define RDIV_DIVSXT 0x00A0, 7<<4 |  0
#define RDIV_DIGSXT 0x00A1, 15<<4 |  8
#define RDIV_DIVGN 0x00A1, 7<<4 |  0
#define RDIV_DIGGN 0x00A2, 15<<4 |  8
#define RDIV_DIGSXR 0x00A2, 7<<4 |  0
#define RDIV_CPSXT 0x00A3, 15<<4 |  8
#define RDIV_DIG 0x00A3, 7<<4 |  0
#define RDIV_CPGN 0x00A4, 15<<4 |  8
#define RDIV_CPSXR 0x00A4, 7<<4 |  0
#define RDIV_SPIBUF 0x00A5, 15<<4 |  8
#define RDIV_AFE 0x00A5, 7<<4 |  0
#define SPDUP_LDO_SPIBUF 0x00A6, 12<<4 |  12
#define SPDUP_LDO_DIGIp2 0x00A6, 11<<4 |  11
#define SPDUP_LDO_DIGIp1 0x00A6, 10<<4 |  10
#define BYP_LDO_SPIBUF 0x00A6, 9<<4 |  9
#define BYP_LDO_DIGIp2 0x00A6, 8<<4 |  8
#define BYP_LDO_DIGIp1 0x00A6, 7<<4 |  7
#define EN_LOADIMP_LDO_SPIBUF 0x00A6, 6<<4 |  6
#define EN_LOADIMP_LDO_DIGIp2 0x00A6, 5<<4 |  5
#define EN_LOADIMP_LDO_DIGIp1 0x00A6, 4<<4 |  4
#define PD_LDO_SPIBUF 0x00A6, 3<<4 |  3
#define PD_LDO_DIGIp2 0x00A6, 2<<4 |  2
#define PD_LDO_DIGIp1 0x00A6, 1<<4 |  1
#define EN_G_LDOP 0x00A6, 0<<4 |  0
#define RDIV_DIGIp2 0x00A7, 15<<4 |  8
#define RDIV_DIGIp1 0x00A7, 7<<4 |  0
#define BSIGT 0x00A8, 31<<4 |  9
#define BSTATE 0x00A8, 8<<4 |  8
#define EN_SDM_TSTO_SXT 0x00A8, 6<<4 |  6
#define EN_SDM_TSTO_SXR 0x00A8, 5<<4 |  5
#define EN_SDM_TSTO_CGEN 0x00A8, 4<<4 |  4
#define BENC 0x00A8, 3<<4 |  3
#define BENR 0x00A8, 2<<4 |  2
#define BENT 0x00A8, 1<<4 |  1
#define BSTART 0x00A8, 0<<4 |  0
#define BSIGR 0x00AA, 22<<4 |  0
#define BSIGC 0x00AB, 29<<4 |  7
#define CDS_MCLK2 0x00AD, 15<<4 |  14
#define CDS_MCLK1 0x00AD, 13<<4 |  12
#define CDSN_TXBTSP 0x00AD, 9<<4 |  9
#define CDSN_TXATSP 0x00AD, 8<<4 |  8
#define CDSN_RXBTSP 0x00AD, 7<<4 |  7
#define CDSN_RXATSP 0x00AD, 6<<4 |  6
#define CDSN_TXBLML 0x00AD, 5<<4 |  5
#define CDSN_TXALML 0x00AD, 4<<4 |  4
#define CDSN_RXBLML 0x00AD, 3<<4 |  3
#define CDSN_RXALML 0x00AD, 2<<4 |  2
#define CDSN_MCLK2 0x00AD, 1<<4 |  1
#define CDSN_MCLK1 0x00AD, 0<<4 |  0
#define CDS_TXBTSP 0x00AE, 15<<4 |  14
#define CDS_TXATSP 0x00AE, 13<<4 |  12
#define CDS_RXBTSP 0x00AE, 11<<4 |  10
#define CDS_RXATSP 0x00AE, 9<<4 |  8
#define CDS_TXBLML 0x00AE, 7<<4 |  6
#define CDS_TXALML 0x00AE, 5<<4 |  4
#define CDS_RXBLML 0x00AE, 3<<4 |  2
#define CDS_RXALML 0x00AE, 1<<4 |  0
#define EN_LOWBWLOMX_TMX_TRF 0x0100, 15<<4 |  15
#define EN_NEXTTX_TRF 0x0100, 14<<4 |  14
#define EN_AMPHF_PDET_TRF 0x0100, 13<<4 |  12
#define LOADR_PDET_TRF 0x0100, 11<<4 |  10
#define PD_PDET_TRF 0x0100, 3<<4 |  3
#define PD_TLOBUF_TRF 0x0100, 2<<4 |  2
#define PD_TXPAD_TRF 0x0100, 1<<4 |  1
#define EN_G_TRF 0x0100, 0<<4 |  0
#define F_TXPAD_TRF 0x0101, 15<<4 |  13
#define L_LOOPB_TXPAD_TRF 0x0101, 12<<4 |  11
#define LOSS_LIN_TXPAD_TRF 0x0101, 10<<4 |  6
#define LOSS_MAIN_TXPAD_TRF 0x0101, 5<<4 |  1
#define EN_LOOPB_TXPAD_TRF 0x0101, 0<<4 |  0
#define GCAS_GNDREF_TXPAD_TRF 0x0102, 15<<4 |  15
#define ICT_LIN_TXPAD_TRF 0x0102, 14<<4 |  10
#define ICT_MAIN_TXPAD_TRF 0x0102, 9<<4 |  5
#define VGCAS_TXPAD_TRF 0x0102, 4<<4 |  0
#define SEL_BAND1_TRF 0x0103, 11<<4 |  11
#define SEL_BAND2_TRF 0x0103, 10<<4 |  10
#define LOBIASN_TXM_TRF 0x0103, 9<<4 |  5
#define LOBIASP_TXX_TRF 0x0103, 4<<4 |  0
#define CDC_I_TRF 0x0104, 7<<4 |  4
#define CDC_Q_TRF 0x0104, 3<<4 |  0
#define STATPULSE_TBB 0x0105, 15<<4 |  15
#define LOOPB_TBB 0x0105, 14<<4 |  12
#define PD_LPFH_TBB 0x0105, 4<<4 |  4
#define PD_LPFIAMP_TBB 0x0105, 3<<4 |  3
#define PD_LPFLAD_TBB 0x0105, 2<<4 |  2
#define PD_LPFS5_TBB 0x0105, 1<<4 |  1
#define EN_G_TBB 0x0105, 0<<4 |  0
#define ICT_LPFS5_F_TBB 0x0106, 14<<4 |  10
#define ICT_LPFS5_PT_TBB 0x0106, 9<<4 |  5
#define ICT_LPF_H_PT_TBB 0x0106, 4<<4 |  0
#define ICT_LPFH_F_TBB 0x0107, 14<<4 |  10
#define ICT_LPFLAD_F_TBB 0x0107, 9<<4 |  5
#define ICT_LPFLAD_PT_TBB 0x0107, 4<<4 |  0
#define CG_IAMP_TBB 0x0108, 15<<4 |  10
#define ICT_IAMP_FRP_TBB 0x0108, 9<<4 |  5
#define ICT_IAMP_GG_FRP_TBB 0x0108, 4<<4 |  0
#define RCAL_LPFH_TBB 0x0109, 15<<4 |  8
#define RCAL_LPFLAD_TBB 0x0109, 7<<4 |  0
#define TSTIN_TBB 0x010A, 15<<4 |  14
#define BYPLADDER_TBB 0x010A, 13<<4 |  13
#define CCAL_LPFLAD_TBB 0x010A, 12<<4 |  8
#define RCAL_LPFS5_TBB 0x010A, 7<<4 |  0
#define CDC_I_RFE 0x010C, 15<<4 |  12
#define CDC_Q_RFE 0x010C, 11<<4 |  8
#define PD_LNA_RFE 0x010C, 7<<4 |  7
#define PD_RLOOPB_1_RFE 0x010C, 6<<4 |  6
#define PD_RLOOPB_2_RFE 0x010C, 5<<4 |  5
#define PD_MXLOBUF_RFE 0x010C, 4<<4 |  4
#define PD_QGEN_RFE 0x010C, 3<<4 |  3
#define PD_RSSI_RFE 0x010C, 2<<4 |  2
#define PD_TIA_RFE 0x010C, 1<<4 |  1
#define EN_G_RFE 0x010C, 0<<4 |  0
#define SEL_PATH_RFE 0x010D, 8<<4 |  7
#define EN_DCOFF_RXFE_RFE 0x010D, 6<<4 |  6
#define EN_INSHSW_LB1_RFE 0x010D, 4<<4 |  4
#define EN_INSHSW_LB2_RFE 0x010D, 3<<4 |  3
#define EN_INSHSW_L_RFE 0x010D, 2<<4 |  2
#define EN_INSHSW_W_RFE 0x010D, 1<<4 |  1
#define EN_NEXTRX_RFE 0x010D, 0<<4 |  0
#define ICT_LOOPB_RFE 0x010F, 14<<4 |  10
#define ICT_TIAMAIN_RFE 0x010F, 9<<4 |  5
#define ICT_TIAOUT_RFE 0x010F, 4<<4 |  0
#define ICT_LNACMO_RFE 0x0110, 14<<4 |  10
#define ICT_LNA_RFE 0x0110, 9<<4 |  5
#define ICT_LODC_RFE 0x0110, 4<<4 |  0
#define CAP_RXMXO_RFE 0x0111, 9<<4 |  5
#define CGSIN_LNA_RFE 0x0111, 4<<4 |  0
#define CCOMP_TIA_RFE 0x0112, 15<<4 |  12
#define CFB_TIA_RFE 0x0112, 11<<4 |  0
#define G_LNA_RFE 0x0113, 9<<4 |  6
#define G_RXLOOPB_RFE 0x0113, 5<<4 |  2
#define G_TIA_RFE 0x0113, 1<<4 |  0
#define RCOMP_TIA_RFE 0x0114, 8<<4 |  5
#define RFB_TIA_RFE 0x0114, 4<<4 |  0
#define EN_LB_LPFH_RBB 0x0115, 15<<4 |  15
#define EN_LB_LPFL_RBB 0x0115, 14<<4 |  14
#define PD_LPFH_RBB 0x0115, 3<<4 |  3
#define PD_LPFL_RBB 0x0115, 2<<4 |  2
#define PD_PGA_RBB 0x0115, 1<<4 |  1
#define EN_G_RBB 0x0115, 0<<4 |  0
#define R_CTL_LPF_RBB 0x0116, 15<<4 |  11
#define RCC_CTL_LPFH_RBB 0x0116, 10<<4 |  8
#define C_CTL_LPFH_RBB 0x0116, 7<<4 |  0
#define RCC_CTL_LPFL_RBB 0x0117, 13<<4 |  11
#define C_CTL_LPFL_RBB 0x0117, 10<<4 |  0
#define INPUT_CTL_PGA_RBB 0x0118, 15<<4 |  13
#define ICT_LPF_IN_RBB 0x0118, 9<<4 |  5
#define ICT_LPF_OUT_RBB 0x0118, 4<<4 |  0
#define OSW_PGA_RBB 0x0119, 15<<4 |  15
#define ICT_PGA_OUT_RBB 0x0119, 14<<4 |  10
#define ICT_PGA_IN_RBB 0x0119, 9<<4 |  5
#define G_PGA_RBB 0x0119, 4<<4 |  0
#define RCC_CTL_PGA_RBB 0x011A, 13<<4 |  9
#define C_CTL_PGA_RBB 0x011A, 6<<4 |  0
#define RESET_N 0x011C, 15<<4 |  15
#define SPDUP_VCO 0x011C, 14<<4 |  14
#define BYPLDO_VCO 0x011C, 13<<4 |  13
#define EN_COARSEPLL 0x011C, 12<<4 |  12
#define CURLIM_VCO 0x011C, 11<<4 |  11
#define EN_DIV2_DIVPROG 0x011C, 10<<4 |  10
#define EN_INTONLY_SDM 0x011C, 9<<4 |  9
#define EN_SDM_CLK 0x011C, 8<<4 |  8
#define PD_FBDIV 0x011C, 7<<4 |  7
#define PD_LOCH_T2RBUF 0x011C, 6<<4 |  6
#define PD_CP 0x011C, 5<<4 |  5
#define PD_FDIV 0x011C, 4<<4 |  4
#define PD_SDM 0x011C, 3<<4 |  3
#define PD_VCO_COMP 0x011C, 2<<4 |  2
#define PD_VCO 0x011C, 1<<4 |  1
#define EN_G 0x011C, 0<<4 |  0
#define FRAC_SDM 0x011D, 19<<4 |  0
#define INT_SDM 0x011E, 13<<4 |  4
#define PW_DIV2_LOCH 0x011F, 14<<4 |  12
#define PW_DIV4_LOCH 0x011F, 11<<4 |  9
#define DIV_LOCH 0x011F, 8<<4 |  6
#define TST_SX 0x011F, 5<<4 |  3
#define SEL_SDMCLK 0x011F, 2<<4 |  2
#define SX_DITHER_EN 0x011F, 1<<4 |  1
#define REV_SDMCLK 0x011F, 0<<4 |  0
#define VDIV_VCO 0x0120, 15<<4 |  8
#define ICT_VCO 0x0120, 7<<4 |  0
#define RSEL_LDO_VCO 0x0121, 15<<4 |  11
#define CSW_VCO 0x0121, 10<<4 |  3
#define SEL_VCO 0x0121, 2<<4 |  1
#define COARSE_START 0x0121, 0<<4 |  0
#define REVPH_PFD 0x0122, 12<<4 |  12
#define IOFFSET_CP 0x0122, 11<<4 |  6
#define IPULSE_CP 0x0122, 5<<4 |  0
#define COARSE_STEPDONE 0x0123, 15<<4 |  15
#define COARSEPLL_COMPO 0x0123, 14<<4 |  14
#define VCO_CMPHO 0x0123, 13<<4 |  13
#define VCO_CMPLO 0x0123, 12<<4 |  12
#define CP2_PLL 0x0123, 11<<4 |  8
#define CP3_PLL 0x0123, 7<<4 |  4
#define CZ 0x0123, 3<<4 |  0
#define EN_DIR_SXRSXT 0x0124, 4<<4 |  4
#define EN_DIR_RBB 0x0124, 3<<4 |  3
#define EN_DIR_RFE 0x0124, 2<<4 |  2
#define EN_DIR_TBB 0x0124, 1<<4 |  1
#define EN_DIR_TRF 0x0124, 0<<4 |  0
#define TSGFC_TXTSP 0x0200, 9<<4 |  9
#define TSGFCW_TXTSP 0x0200, 8<<4 |  7
#define TSGDCLDQ_TXTSP 0x0200, 6<<4 |  6
#define TSGDCLDI_TXTSP 0x0200, 5<<4 |  5
#define TSGSWAPIQ_TXTSP 0x0200, 4<<4 |  4
#define TSGMODE_TXTSP 0x0200, 3<<4 |  3
#define INSEL_TXTSP 0x0200, 2<<4 |  2
#define BSTART_TXTSP 0x0200, 1<<4 |  1
#define EN_TXTSP 0x0200, 0<<4 |  0
#define HBI_OVR_TXTSP 0x0203, 14<<4 |  12
#define GFIR1_L_TXTSP 0x0205, 10<<4 |  8
#define GFIR1_N_TXTSP 0x0205, 7<<4 |  0
#define GFIR2_L_TXTSP 0x0206, 10<<4 |  8
#define GFIR2_N_TXTSP 0x0206, 7<<4 |  0
#define GFIR3_L_TXTSP 0x0207, 10<<4 |  8
#define GFIR3_N_TXTSP 0x0207, 7<<4 |  0
#define CMIX_GAIN_TXTSP 0x0208, 15<<4 |  14
#define CMIX_SC_TXTSP 0x0208, 13<<4 |  13
#define CMIX_BYP_TXTSP 0x0208, 8<<4 |  8
#define ISINC_BYP_TXTSP 0x0208, 7<<4 |  7
#define GFIR3_BYP_TXTSP 0x0208, 6<<4 |  6
#define GFIR2_BYP_TXTSP 0x0208, 5<<4 |  5
#define GFIR1_BYP_TXTSP 0x0208, 4<<4 |  4
#define DC_BYP_TXTSP 0x0208, 3<<4 |  3
#define GC_BYP_TXTSP 0x0208, 1<<4 |  1
#define PH_BYP_TXTSP 0x0208, 0<<4 |  0
#define BSIGI_TXTSP 0x0209, 23<<4 |  1
#define BSTATE_TXTSP 0x0209, 0<<4 |  0
#define BSIGQ_TXTSP 0x020A, 30<<4 |  8
#define DC_REG_TXTSP 0x020C, 15<<4 |  0
#define DTHBIT_TX 0x0240, 8<<4 |  5
#define SEL_TX 0x0240, 4<<4 |  1
#define MODE_TX 0x0240, 0<<4 |  0
#define CAPTURE 0x0400, 15<<4 |  15
#define CAPSEL 0x0400, 14<<4 |  13
#define TSGFC_RXTSP 0x0400, 9<<4 |  9
#define TSGFCW_RXTSP 0x0400, 8<<4 |  7
#define TSGDCLDQ_RXTSP 0x0400, 6<<4 |  6
#define TSGDCLDI_RXTSP 0x0400, 5<<4 |  5
#define TSGSWAPIQ_RXTSP 0x0400, 4<<4 |  4
#define TSGMODE_RXTSP 0x0400, 3<<4 |  3
#define INSEL_RXTSP 0x0400, 2<<4 |  2
#define BSTART_RXTSP 0x0400, 1<<4 |  1
#define EN_RXTSP 0x0400, 0<<4 |  0
#define HBD_OVR_RXTSP 0x0403, 14<<4 |  12
#define DCCORR_AVG_RXTSP 0x0404, 2<<4 |  0
#define GFIR1_L_RXTSP 0x0405, 10<<4 |  8
#define GFIR1_N_RXTSP 0x0405, 7<<4 |  0
#define GFIR2_L_RXTSP 0x0406, 10<<4 |  8
#define GFIR2_N_RXTSP 0x0406, 7<<4 |  0
#define GFIR3_L_RXTSP 0x0407, 10<<4 |  8
#define GFIR3_N_RXTSP 0x0407, 7<<4 |  0
#define AGC_K_RXTSP 0x0408, 17<<4 |  0
#define AGC_ADESIRED_RXTSP 0x0409, 15<<4 |  4
#define AGC_MODE_RXTSP 0x040A, 13<<4 |  12
#define AGC_AVG_RXTSP 0x040A, 2<<4 |  0
#define DC_REG_RXTSP 0x040B, 15<<4 |  0
#define CMIX_GAIN_RXTSP 0x040C, 15<<4 |  14
#define CMIX_SC_RXTSP 0x040C, 13<<4 |  13
#define CMIX_BYP_RXTSP 0x040C, 7<<4 |  7
#define AGC_BYP_RXTSP 0x040C, 6<<4 |  6
#define GFIR3_BYP_RXTSP 0x040C, 5<<4 |  5
#define GFIR2_BYP_RXTSP 0x040C, 4<<4 |  4
#define GFIR1_BYP_RXTSP 0x040C, 3<<4 |  3
#define DC_BYP_RXTSP 0x040C, 2<<4 |  2
#define GC_BYP_RXTSP 0x040C, 1<<4 |  1
#define PH_BYP_RXTSP 0x040C, 0<<4 |  0
#define CAPD 0x040E, 31<<4 |  0
#define DTHBIT_RX 0x0440, 8<<4 |  5
#define SEL_RX 0x0440, 4<<4 |  1
#define MODE_RX 0x0440, 0<<4 |  0

#define DCMODE 0x05C0, 15<<4 | 15
#define PD_DCDAC_RXB 0x05C0, 7<<4 | 7
#define PD_DCDAC_RXA 0x05C0, 6<<4 | 6
#define PD_DCDAC_TXB 0x05C0, 5<<4 | 5
#define PD_DCDAC_TXA 0x05C0, 4<<4 | 4
#define PD_DCCMP_RXB 0x05C0, 3<<4 | 3
#define PD_DCCMP_RXA 0x05C0, 2<<4 | 2
#define PD_DCCMP_TXB 0x05C0, 1<<4 | 1
#define PD_DCCMP_TXA 0x05C0, 0<<4 | 0

#define DCWR_TXAI 0x05C3, 15<<4 | 15
#define DCRD_TXAI 0x05C3, 14<<4 | 14
#define DC_TXAI 0x05C3, 10<<4 | 0
#define DCWR_TXAQ 0x05C4, 15<<4 | 15
#define DCRD_TXAQ 0x05C4, 14<<4 | 14
#define DC_TXAQ 0x05C4, 10<<4 | 0
#define DCWR_TXBI 0x05C5, 15<<4 | 15
#define DCRD_TXBI 0x05C5, 14<<4 | 14
#define DC_TXBI 0x05C5, 10<<4 | 0
#define DCWR_TXBQ 0x05C6, 15<<4 | 15
#define DCRD_TXBQ 0x05C6, 14<<4 | 14
#define DC_TXBQ 0x05C6, 10<<4 | 0
#define DCWR_RXAI 0x05C7, 15<<4 | 15
#define DCRD_RXAI 0x05C7, 14<<4 | 14
#define DC_RXAI 0x05C7, 6<<4 | 0
#define DCWR_RXAQ 0x05C8, 15<<4 | 15
#define DCRD_RXAQ 0x05C8, 14<<4 | 14
#define DC_RXAQ 0x05C8, 6<<4 | 0
#define DCWR_RXBI 0x05C9, 15<<4 | 15
#define DCRD_RXBI 0x05C9, 14<<4 | 14
#define DC_RXBI 0x05C9, 6<<4 | 0
#define DCWR_RXBQ 0x05CA, 15<<4 | 15
#define DCRD_RXBQ 0x05CA, 14<<4 | 14

#define R5_LPF_BYP_TBB 0x010B, 0<<4 | 0

#endif
