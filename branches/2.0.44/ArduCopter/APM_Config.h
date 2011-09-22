// Example config file. Take a look at confi.h. Any term define there can be overridden by defining it here.

//#define LED_SEQUENCER ENABLED

#define MAX_SONAR_RANGE 400

// some config need for MegaPirateNG 2.0.40
#define SONAR_TYPE MAX_SONAR_XL // don't change!!!
#define HIL_MODE HIL_MODE_DISABLED

// MPNG: AP_COMPASS lib make additional ROTATION_YAW_90 for 5883L mag, so in result we have ROTATION_YAW_270 
#define MAG_ORIENTATION	ROTATION_YAW_180 
#define GCS_PROTOCOL			GCS_PROTOCOL_MAVLINK

// New in 2.0.43, but unused in MegairateNG
// MPNG: Piezo uses AN5 pin in ArduCopter, we uses AN5 for CLI switch
#define PIEZO	DISABLED	
#define PIEZO_LOW_VOLTAGE	DISABLED
#define PIEZO_ARMING		DISABLED

// GPS is auto-selected
#define GPS_PROTOCOL GPS_PROTOCOL_NONE
	/*
	options:
	GPS_PROTOCOL_NONE 	without GPS
	GPS_PROTOCOL_NMEA
	GPS_PROTOCOL_SIRF
	GPS_PROTOCOL_UBLOX
	GPS_PROTOCOL_IMU
	GPS_PROTOCOL_MTK
	GPS_PROTOCOL_HIL
	GPS_PROTOCOL_MTK16
	GPS_PROTOCOL_AUTO	auto select GPS
	GPS_PROTOCOL_UBLOX_I2C
	*/
#define SERIAL0_BAUD			115200	// If one want a wireless modem (like APC220) on the console port, lower that to 57600. Default is 115200 
#define SERIAL2_BAUD			 38400	// GPS port bps
#define SERIAL3_BAUD			 57600	// default telemetry BPS rate = 57600

#define CLI_ENABLED ENABLED

//#define BROKEN_SLIDER		0		// 1 = yes (use Yaw to enter CLI mode)

#define FRAME_CONFIG QUAD_FRAME
	/*
	options:
	QUAD_FRAME
	TRI_FRAME
	HEXA_FRAME
	Y6_FRAME
	OCTA_FRAME
	HELI_FRAME
	*/

#define FRAME_ORIENTATION X_FRAME
	/*
	PLUS_FRAME
	X_FRAME
	V_FRAME
	*/


#define CHANNEL_6_TUNING CH6_NONE
	/*
	CH6_NONE
	CH6_STABILIZE_KP
	CH6_STABILIZE_KI
	CH6_RATE_KP
	CH6_RATE_KI
	CH6_THROTTLE_KP
	CH6_THROTTLE_KD
	CH6_YAW_KP
	CH6_YAW_KI
	CH6_YAW_RATE_KP
	CH6_YAW_RATE_KI
	CH6_TOP_BOTTOM_RATIO
	CH6_PMAX
    CH6_RELAY
    CH6_TRAVERSE_SPEED
	*/

# define CH7_OPTION		DO_SET_HOVER
	/*
	DO_SET_HOVER
	DO_FLIP
	SIMPLE_MODE_CONTROL
	*/

// See the config.h and defines.h files for how to set this up!
//

// lets use Manual throttle during Loiter
//#define LOITER_THR			THROTTLE_MANUAL
# define RTL_YAW 			YAW_HOLD
