// Pin assignments for a 4-axis machine using Triaminic drivers
// in daisy-chained SPI mode.

#define MACHINE_NAME "SPI_DAISY_4X"

#ifdef N_AXIS
        #undef N_AXIS
#endif
#define N_AXIS 3 // can be 3 or 4. (if 3 install bypass jumper next to the A driver)

#define USE_TRINAMIC
#define TRINAMIC_DAISY_CHAIN

// Use SPI enable instead of the enable pin
// The hardware enable pin is tied to ground
#define USE_TRINAMIC_ENABLE

// allow two motors on an axis
#define USE_GANGED_AXES

#define X_DRIVER_TMC2130        // Which Driver Type?
#define X_RSENSE                0.11f   // .11 Ohm...typical of 2130 type 0.075 typical for TMC5160
#define X_STEP_PIN              GPIO_NUM_12
#define X_DIRECTION_PIN         GPIO_NUM_14
#define X2_STEP_PIN             GPIO_NUM_33
#define X2_DIRECTION_PIN        GPIO_NUM_32
#define X_TRINAMIC              // using SPI control
#define X_CS_PIN                GPIO_NUM_17  // Daisy Chain, all share same CS pin

#define Y_DRIVER_TMC2130        // Which Driver Type?
#define Y_RSENSE                0.11f   // .11 Ohm...typical of 2130 type 0.075 typical for TMC5160
#define Y_STEP_PIN              GPIO_NUM_27
#define Y_DIRECTION_PIN         GPIO_NUM_26
#define Y_TRINAMIC              // using SPI control
#define Y_CS_PIN                X_CS_PIN  // Daisy Chain, all share same CS pin

#define Z_DRIVER_TMC2130        // Which Driver Type?
#define Z_RSENSE                0.11f   // .11 Ohm...typical of 2130 type 0.075 typical for TMC5160
#define Z_STEP_PIN              GPIO_NUM_15
#define Z_DIRECTION_PIN         GPIO_NUM_2
#define Z_TRINAMIC              // using SPI control
#define Z_CS_PIN                X_CS_PIN  // Daisy Chain, all share same CS pin

#if (N_AXIS == 4)
        #define A_DRIVER_TMC2130        // Which Driver Type?
        #define A_RSENSE        0.11f   // .11 Ohm...typical of 2130 type 0.075 typical for TMC5160
        #define A_STEP_PIN      GPIO_NUM_33
        #define A_DIRECTION_PIN GPIO_NUM_32
        #define A_TRINAMIC      // using SPI control
        #define A_CS_PIN        X_CS_PIN  // Daisy Chain, all share same CS pin
#endif

// Mist is a 3.3V output
// Turn on with M7 and off with M9
#define COOLANT_MIST_PIN        GPIO_NUM_21

#define SPINDLE_PWM_PIN         GPIO_NUM_25
#define SPINDLE_ENABLE_PIN      GPIO_NUM_4

// Relay operation
// Install Jumper near relay
// For spindle Use max RPM of 1
// For PWM remove jumper and set MAX RPM to something higher ($30 setting)
// Interlock jumper along top edge needs to be installed for both versions
#define DEFAULT_SPINDLE_RPM_MAX     1 // Should be 1 for relay operation

#define PROBE_PIN               GPIO_NUM_22

#define X_LIMIT_PIN             GPIO_NUM_36
#define Y_LIMIT_PIN             GPIO_NUM_39
#define Z_LIMIT_PIN             GPIO_NUM_34

#if (N_AXIS == 4)
        #define A_LIMIT_PIN     GPIO_NUM_35
        #define LIMIT_MASK      B1111
#else
        #define LIMIT_MASK      B0111
#endif
