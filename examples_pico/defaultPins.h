// pre-chossen pins on small sized boards

#if defined (ADAFRUIT_QTPY_RP2040)
// for this board, you can still use the Stemma QT connector as a separate I2C bus (`i2c1`)
#define CE_PIN PICO_DEFAULT_I2C_SDA_PIN  // the pin labeled SDA
#define CSN_PIN PICO_DEFAULT_I2C_SCL_PIN // the pin labeled SCL
#define IRQ_PIN PICO_DEFAULT_UART_RX_PIN // the pin labeled RX

#elif defined (PIMORONI_TINY2040)
// default SPI_SCK_PIN = 6
// default SPI_TX_PIN = 7
// default SPI_RX_PIN = 4
#define CE_PIN PICO_DEFAULT_I2C_SCL_PIN  // pin 3
#define CSN_PIN PICO_DEFAULT_SPI_CSN_PIN // pin 5
#define IRQ_PIN PICO_DEFAULT_I2C_SDA_PIN // pin 2

// No way to detect Sparkfun_ThingPlus board via macros
// #elif defined(Sparkfun_ThingPlus)
// #define CSN_PIN 6 // the pin labeled SDA
// #define CE_PIN 7 // the pin labeled SCL

#else
// pins available on (ADAFRUIT_ITSYBITSY_RP2040 || ADAFRUIT_FEATHER_RP2040 || Pico_board || Sparkfun_ProMicro || SparkFun MicroMod)

#define CE_PIN 7
#define CSN_PIN 8  // pin 8 is not available on the Sparkfun_ThingPlus board
#define IRQ_PIN 6
#endif
