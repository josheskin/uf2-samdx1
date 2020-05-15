#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define CRYSTALLESS    1

#define VENDOR_NAME "Gzitch"
#define PRODUCT_NAME "GzitchWatch M4 Rev 1"
#define VOLUME_LABEL "GZITCHBOOT"
#define INDEX_URL "http://adafru.it/"
#define BOARD_ID "SAMD51G18A-Gzitch-v0"

#define USB_VID 0x239A
#define USB_PID 0x002B

#define LED_PIN PIN_PB03

/*JdE LED macro does not like PINMUX_UNUSED so assign unused pins here */
#define BOARD_RGBLED_CLOCK_PIN            PIN_PA20
#define BOARD_RGBLED_DATA_PIN             PIN_PA21

#define BOOT_USART_MODULE                 SERCOM3
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBBMASK_SERCOM3
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_PA22C_SERCOM3_PAD0
#define BOOT_USART_PAD0                   PINMUX_PA23C_SERCOM3_PAD1
#define BOOT_GCLK_ID_CORE                 SERCOM3_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM3_GCLK_ID_SLOW

/* JdE: reverse pins as defined in Driver_USB.h */
#define ARM_USB_PIN_DM   (1 << 0)
#define ARM_USB_PIN_DP   (1 << 1)


#endif
