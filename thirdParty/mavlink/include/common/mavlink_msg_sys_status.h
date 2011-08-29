// MESSAGE SYS_STATUS PACKING

#define MAVLINK_MSG_ID_SYS_STATUS 1

typedef struct __mavlink_sys_status_t
{
 uint32_t onboard_control_sensors_present; ///< Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 uint32_t onboard_control_sensors_enabled; ///< Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 uint32_t onboard_control_sensors_health; ///< Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 uint16_t load; ///< Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
 uint16_t voltage_battery; ///< Battery voltage, in millivolts (1 = 1 millivolt)
 int16_t current_battery; ///< Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 uint16_t watt; ///< Watts consumed from this battery since startup
 uint16_t errors_comm; ///< Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
 uint16_t errors_count1; ///< Autopilot-specific errors
 uint16_t errors_count2; ///< Autopilot-specific errors
 uint16_t errors_count3; ///< Autopilot-specific errors
 uint16_t errors_count4; ///< Autopilot-specific errors
 int8_t battery_remaining; ///< Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery
} mavlink_sys_status_t;

#define MAVLINK_MSG_ID_SYS_STATUS_LEN 31
#define MAVLINK_MSG_ID_1_LEN 31



#define MAVLINK_MESSAGE_INFO_SYS_STATUS { \
	"SYS_STATUS", \
	13, \
	{  { "onboard_control_sensors_present", MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_sys_status_t, onboard_control_sensors_present) }, \
         { "onboard_control_sensors_enabled", MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_sys_status_t, onboard_control_sensors_enabled) }, \
         { "onboard_control_sensors_health", MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_sys_status_t, onboard_control_sensors_health) }, \
         { "load", MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_sys_status_t, load) }, \
         { "voltage_battery", MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_sys_status_t, voltage_battery) }, \
         { "current_battery", MAVLINK_TYPE_INT16_T, 0, 16, offsetof(mavlink_sys_status_t, current_battery) }, \
         { "watt", MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_sys_status_t, watt) }, \
         { "errors_comm", MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_sys_status_t, errors_comm) }, \
         { "errors_count1", MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_sys_status_t, errors_count1) }, \
         { "errors_count2", MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_sys_status_t, errors_count2) }, \
         { "errors_count3", MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_sys_status_t, errors_count3) }, \
         { "errors_count4", MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_sys_status_t, errors_count4) }, \
         { "battery_remaining", MAVLINK_TYPE_INT8_T, 0, 30, offsetof(mavlink_sys_status_t, battery_remaining) }, \
         } \
}


/**
 * @brief Pack a sys_status message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param onboard_control_sensors_present Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_enabled Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_health Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
 * @param voltage_battery Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param watt Watts consumed from this battery since startup
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery
 * @param errors_comm Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
 * @param errors_count1 Autopilot-specific errors
 * @param errors_count2 Autopilot-specific errors
 * @param errors_count3 Autopilot-specific errors
 * @param errors_count4 Autopilot-specific errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sys_status_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       uint32_t onboard_control_sensors_present, uint32_t onboard_control_sensors_enabled, uint32_t onboard_control_sensors_health, uint16_t load, uint16_t voltage_battery, int16_t current_battery, uint16_t watt, int8_t battery_remaining, uint16_t errors_comm, uint16_t errors_count1, uint16_t errors_count2, uint16_t errors_count3, uint16_t errors_count4)
{
	msg->msgid = MAVLINK_MSG_ID_SYS_STATUS;

	put_uint32_t_by_index(msg, 0, onboard_control_sensors_present); // Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 4, onboard_control_sensors_enabled); // Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 8, onboard_control_sensors_health); // Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint16_t_by_index(msg, 12, load); // Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
	put_uint16_t_by_index(msg, 14, voltage_battery); // Battery voltage, in millivolts (1 = 1 millivolt)
	put_int16_t_by_index(msg, 16, current_battery); // Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
	put_uint16_t_by_index(msg, 18, watt); // Watts consumed from this battery since startup
	put_uint16_t_by_index(msg, 20, errors_comm); // Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
	put_uint16_t_by_index(msg, 22, errors_count1); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 24, errors_count2); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 26, errors_count3); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 28, errors_count4); // Autopilot-specific errors
	put_int8_t_by_index(msg, 30, battery_remaining); // Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery

	return mavlink_finalize_message(msg, system_id, component_id, 31, 236);
}

/**
 * @brief Pack a sys_status message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message was sent over
 * @param msg The MAVLink message to compress the data into
 * @param onboard_control_sensors_present Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_enabled Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_health Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
 * @param voltage_battery Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param watt Watts consumed from this battery since startup
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery
 * @param errors_comm Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
 * @param errors_count1 Autopilot-specific errors
 * @param errors_count2 Autopilot-specific errors
 * @param errors_count3 Autopilot-specific errors
 * @param errors_count4 Autopilot-specific errors
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_sys_status_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           uint32_t onboard_control_sensors_present,uint32_t onboard_control_sensors_enabled,uint32_t onboard_control_sensors_health,uint16_t load,uint16_t voltage_battery,int16_t current_battery,uint16_t watt,int8_t battery_remaining,uint16_t errors_comm,uint16_t errors_count1,uint16_t errors_count2,uint16_t errors_count3,uint16_t errors_count4)
{
	msg->msgid = MAVLINK_MSG_ID_SYS_STATUS;

	put_uint32_t_by_index(msg, 0, onboard_control_sensors_present); // Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 4, onboard_control_sensors_enabled); // Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 8, onboard_control_sensors_health); // Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint16_t_by_index(msg, 12, load); // Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
	put_uint16_t_by_index(msg, 14, voltage_battery); // Battery voltage, in millivolts (1 = 1 millivolt)
	put_int16_t_by_index(msg, 16, current_battery); // Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
	put_uint16_t_by_index(msg, 18, watt); // Watts consumed from this battery since startup
	put_uint16_t_by_index(msg, 20, errors_comm); // Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
	put_uint16_t_by_index(msg, 22, errors_count1); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 24, errors_count2); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 26, errors_count3); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 28, errors_count4); // Autopilot-specific errors
	put_int8_t_by_index(msg, 30, battery_remaining); // Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery

	return mavlink_finalize_message_chan(msg, system_id, component_id, chan, 31, 236);
}

/**
 * @brief Encode a sys_status struct into a message
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param sys_status C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_sys_status_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_sys_status_t* sys_status)
{
	return mavlink_msg_sys_status_pack(system_id, component_id, msg, sys_status->onboard_control_sensors_present, sys_status->onboard_control_sensors_enabled, sys_status->onboard_control_sensors_health, sys_status->load, sys_status->voltage_battery, sys_status->current_battery, sys_status->watt, sys_status->battery_remaining, sys_status->errors_comm, sys_status->errors_count1, sys_status->errors_count2, sys_status->errors_count3, sys_status->errors_count4);
}

/**
 * @brief Send a sys_status message
 * @param chan MAVLink channel to send the message
 *
 * @param onboard_control_sensors_present Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_enabled Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param onboard_control_sensors_health Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 * @param load Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
 * @param voltage_battery Battery voltage, in millivolts (1 = 1 millivolt)
 * @param current_battery Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 * @param watt Watts consumed from this battery since startup
 * @param battery_remaining Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery
 * @param errors_comm Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
 * @param errors_count1 Autopilot-specific errors
 * @param errors_count2 Autopilot-specific errors
 * @param errors_count3 Autopilot-specific errors
 * @param errors_count4 Autopilot-specific errors
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_sys_status_send(mavlink_channel_t chan, uint32_t onboard_control_sensors_present, uint32_t onboard_control_sensors_enabled, uint32_t onboard_control_sensors_health, uint16_t load, uint16_t voltage_battery, int16_t current_battery, uint16_t watt, int8_t battery_remaining, uint16_t errors_comm, uint16_t errors_count1, uint16_t errors_count2, uint16_t errors_count3, uint16_t errors_count4)
{
	MAVLINK_ALIGNED_MESSAGE(msg, 31);
	msg->msgid = MAVLINK_MSG_ID_SYS_STATUS;

	put_uint32_t_by_index(msg, 0, onboard_control_sensors_present); // Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 4, onboard_control_sensors_enabled); // Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint32_t_by_index(msg, 8, onboard_control_sensors_health); // Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
	put_uint16_t_by_index(msg, 12, load); // Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
	put_uint16_t_by_index(msg, 14, voltage_battery); // Battery voltage, in millivolts (1 = 1 millivolt)
	put_int16_t_by_index(msg, 16, current_battery); // Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
	put_uint16_t_by_index(msg, 18, watt); // Watts consumed from this battery since startup
	put_uint16_t_by_index(msg, 20, errors_comm); // Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
	put_uint16_t_by_index(msg, 22, errors_count1); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 24, errors_count2); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 26, errors_count3); // Autopilot-specific errors
	put_uint16_t_by_index(msg, 28, errors_count4); // Autopilot-specific errors
	put_int8_t_by_index(msg, 30, battery_remaining); // Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery

	mavlink_finalize_message_chan_send(msg, chan, 31, 236);
}

#endif

// MESSAGE SYS_STATUS UNPACKING


/**
 * @brief Get field onboard_control_sensors_present from sys_status message
 *
 * @return Bitmask showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 */
static inline uint32_t mavlink_msg_sys_status_get_onboard_control_sensors_present(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field onboard_control_sensors_enabled from sys_status message
 *
 * @return Bitmask showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 */
static inline uint32_t mavlink_msg_sys_status_get_onboard_control_sensors_enabled(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field onboard_control_sensors_health from sys_status message
 *
 * @return Bitmask showing which onboard controllers and sensors are operational or have an error:  Value of 0: not enabled. Value of 1: enabled. Indices: 0: 3D gyro, 1: 3D acc, 2: 3D mag, 3: absolute pressure, 4: differential pressure, 5: GPS, 6: optical flow, 7: computer vision position, 8: laser based position, 9: external ground-truth (Vicon or Leica). Controllers: 10: 3D angular rate control 11: attitude stabilization, 12: yaw position, 13: z/altitude control, 14: x/y position control, 15: motor outputs / control
 */
static inline uint32_t mavlink_msg_sys_status_get_onboard_control_sensors_health(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field load from sys_status message
 *
 * @return Maximum usage in percent of the mainloop time, (0%: 0, 100%: 10'000) should be always below 10'000
 */
static inline uint16_t mavlink_msg_sys_status_get_load(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field voltage_battery from sys_status message
 *
 * @return Battery voltage, in millivolts (1 = 1 millivolt)
 */
static inline uint16_t mavlink_msg_sys_status_get_voltage_battery(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field current_battery from sys_status message
 *
 * @return Battery current, in 10*milliamperes (1 = 10 milliampere), -1: autopilot does not measure the current
 */
static inline int16_t mavlink_msg_sys_status_get_current_battery(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int16_t(msg,  16);
}

/**
 * @brief Get field watt from sys_status message
 *
 * @return Watts consumed from this battery since startup
 */
static inline uint16_t mavlink_msg_sys_status_get_watt(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field battery_remaining from sys_status message
 *
 * @return Remaining battery energy: (0%: 0, 100%: 200%), -1: autopilot estimate the remaining battery
 */
static inline int8_t mavlink_msg_sys_status_get_battery_remaining(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_int8_t(msg,  30);
}

/**
 * @brief Get field errors_comm from sys_status message
 *
 * @return Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
 */
static inline uint16_t mavlink_msg_sys_status_get_errors_comm(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field errors_count1 from sys_status message
 *
 * @return Autopilot-specific errors
 */
static inline uint16_t mavlink_msg_sys_status_get_errors_count1(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field errors_count2 from sys_status message
 *
 * @return Autopilot-specific errors
 */
static inline uint16_t mavlink_msg_sys_status_get_errors_count2(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field errors_count3 from sys_status message
 *
 * @return Autopilot-specific errors
 */
static inline uint16_t mavlink_msg_sys_status_get_errors_count3(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field errors_count4 from sys_status message
 *
 * @return Autopilot-specific errors
 */
static inline uint16_t mavlink_msg_sys_status_get_errors_count4(const mavlink_message_t* msg)
{
	return MAVLINK_MSG_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Decode a sys_status message into a struct
 *
 * @param msg The message to decode
 * @param sys_status C-struct to decode the message contents into
 */
static inline void mavlink_msg_sys_status_decode(const mavlink_message_t* msg, mavlink_sys_status_t* sys_status)
{
#if MAVLINK_NEED_BYTE_SWAP
	sys_status->onboard_control_sensors_present = mavlink_msg_sys_status_get_onboard_control_sensors_present(msg);
	sys_status->onboard_control_sensors_enabled = mavlink_msg_sys_status_get_onboard_control_sensors_enabled(msg);
	sys_status->onboard_control_sensors_health = mavlink_msg_sys_status_get_onboard_control_sensors_health(msg);
	sys_status->load = mavlink_msg_sys_status_get_load(msg);
	sys_status->voltage_battery = mavlink_msg_sys_status_get_voltage_battery(msg);
	sys_status->current_battery = mavlink_msg_sys_status_get_current_battery(msg);
	sys_status->watt = mavlink_msg_sys_status_get_watt(msg);
	sys_status->errors_comm = mavlink_msg_sys_status_get_errors_comm(msg);
	sys_status->errors_count1 = mavlink_msg_sys_status_get_errors_count1(msg);
	sys_status->errors_count2 = mavlink_msg_sys_status_get_errors_count2(msg);
	sys_status->errors_count3 = mavlink_msg_sys_status_get_errors_count3(msg);
	sys_status->errors_count4 = mavlink_msg_sys_status_get_errors_count4(msg);
	sys_status->battery_remaining = mavlink_msg_sys_status_get_battery_remaining(msg);
#else
	memcpy(sys_status, MAVLINK_PAYLOAD(msg), 31);
#endif
}
