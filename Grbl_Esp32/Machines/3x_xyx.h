// This is the CPU Map for the ESP32 Development Controller
// used to drive a dual motor gantry where the drivers
// labeled X, Y and Z drive the machine axes X, Y and X.
// https://github.com/bdring/Grbl_ESP32_Development_Controller
// https://www.tindie.com/products/33366583/grbl_esp32-cnc-development-board-v35/

#define MACHINE_NAME            "MACHINE_ESP32_V4_XYX"
#define X_STEP_PIN              GPIO_NUM_26  /* labeled Y */
#define X_DIRECTION_PIN         GPIO_NUM_15  /* labeled Y */
#define Y_STEP_PIN              GPIO_NUM_12  /* labeled X */
#define Y_DIRECTION_PIN         GPIO_NUM_14  /* labeled X */
#define Y2_STEP_PIN             GPIO_NUM_27  /* labeled Z */
#define Y2_DIRECTION_PIN        GPIO_NUM_33  /* labeled Z */

#define SPINDLE_PWM_PIN         GPIO_NUM_2

#define LIMIT_MASK              B11
#define X_LIMIT_PIN             GPIO_NUM_17
#define Y_LIMIT_PIN             GPIO_NUM_4
// #define Z_LIMIT_PIN          GPIO_NUM_16

#define STEPPERS_DISABLE_PIN    GPIO_NUM_13

#define COOLANT_MIST_PIN_1      GPIO_NUM_21
#define COOLANT_FLOOE_PIN_2     GPIO_NUM_25

#define SPINDLE_ENABLE_PIN      GPIO_NUM_22

// see versions for X and Z
#define PROBE_PIN               GPIO_NUM_32

#define CONTROL_SAFETY_DOOR_PIN GPIO_NUM_35  // needs external pullup
#define CONTROL_RESET_PIN       GPIO_NUM_34  // needs external pullup
#define CONTROL_FEED_HOLD_PIN   GPIO_NUM_36  // needs external pullup
#define CONTROL_CYCLE_START_PIN GPIO_NUM_39  // needs external pullup
