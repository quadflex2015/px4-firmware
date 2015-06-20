/* builtin command list - automatically generated, do not edit */
#include <nuttx/config.h>
#include <nuttx/binfmt/builtin.h>
extern int sercon_main(int argc, char *argv[]);
extern int serdis_main(int argc, char *argv[]);
extern int adc_main(int argc, char *argv[]);
extern int blinkm_main(int argc, char *argv[]);
extern int bl_update_main(int argc, char *argv[]);
extern int boardinfo_main(int argc, char *argv[]);
extern int bottle_drop_main(int argc, char *argv[]);
extern int commander_main(int argc, char *argv[]);
extern int config_main(int argc, char *argv[]);
extern int dataman_main(int argc, char *argv[]);
extern int dumpfile_main(int argc, char *argv[]);
extern int ekf_att_pos_estimator_main(int argc, char *argv[]);
extern int esc_calib_main(int argc, char *argv[]);
extern int ets_airspeed_main(int argc, char *argv[]);
extern int flow_position_estimator_main(int argc, char *argv[]);
extern int fmu_main(int argc, char *argv[]);
extern int frsky_telemetry_main(int argc, char *argv[]);
extern int fw_att_control_main(int argc, char *argv[]);
extern int fw_pos_control_l1_main(int argc, char *argv[]);
extern int gimbal_main(int argc, char *argv[]);
extern int gpio_led_main(int argc, char *argv[]);
extern int gps_main(int argc, char *argv[]);
extern int hil_main(int argc, char *argv[]);
extern int hmc5883_main(int argc, char *argv[]);
extern int hott_sensors_main(int argc, char *argv[]);
extern int hott_telemetry_main(int argc, char *argv[]);
extern int l3gd20_main(int argc, char *argv[]);
extern int land_detector_main(int argc, char *argv[]);
extern int ll40ls_main(int argc, char *argv[]);
extern int lsm303d_main(int argc, char *argv[]);
extern int mavlink_main(int argc, char *argv[]);
extern int mb12xx_main(int argc, char *argv[]);
extern int mc_att_control_main(int argc, char *argv[]);
extern int mc_pos_control_main(int argc, char *argv[]);
extern int meas_airspeed_main(int argc, char *argv[]);
extern int mixer_main(int argc, char *argv[]);
extern int mkblctrl_main(int argc, char *argv[]);
extern int mpu6000_main(int argc, char *argv[]);
extern int ms5611_main(int argc, char *argv[]);
extern int mtd_main(int argc, char *argv[]);
extern int navigator_main(int argc, char *argv[]);
extern int nshterm_main(int argc, char *argv[]);
extern int oreoled_main(int argc, char *argv[]);
extern int param_main(int argc, char *argv[]);
extern int perf_main(int argc, char *argv[]);
extern int preflight_check_main(int argc, char *argv[]);
extern int pwm_main(int argc, char *argv[]);
extern int px4flow_main(int argc, char *argv[]);
extern int px4io_main(int argc, char *argv[]);
extern int reboot_main(int argc, char *argv[]);
extern int rgbled_main(int argc, char *argv[]);
extern int rover_steering_control_main(int argc, char *argv[]);
extern int sdlog2_main(int argc, char *argv[]);
extern int sensors_main(int argc, char *argv[]);
extern int sf0x_main(int argc, char *argv[]);
extern int tone_alarm_main(int argc, char *argv[]);
extern int top_main(int argc, char *argv[]);
extern int trone_main(int argc, char *argv[]);
extern int uavcan_main(int argc, char *argv[]);
extern int uorb_main(int argc, char *argv[]);
extern int ver_main(int argc, char *argv[]);
extern int vtol_att_control_main(int argc, char *argv[]);
const struct builtin_s g_builtins[] = {
    {"sercon", SCHED_PRIORITY_DEFAULT, 2048, sercon_main},
    {"serdis", SCHED_PRIORITY_DEFAULT, 2048, serdis_main},
    {"adc", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, adc_main},
    {"blinkm", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, blinkm_main},
    {"bl_update", SCHED_PRIORITY_DEFAULT, 4096, bl_update_main},
    {"boardinfo", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, boardinfo_main},
    {"bottle_drop", SCHED_PRIORITY_DEFAULT, 1200, bottle_drop_main},
    {"commander", SCHED_PRIORITY_DEFAULT, 5000, commander_main},
    {"config", SCHED_PRIORITY_DEFAULT, 4096, config_main},
    {"dataman", SCHED_PRIORITY_DEFAULT, 1200, dataman_main},
    {"dumpfile", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, dumpfile_main},
    {"ekf_att_pos_estimator", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, ekf_att_pos_estimator_main},
    {"esc_calib", SCHED_PRIORITY_DEFAULT, 4096, esc_calib_main},
    {"ets_airspeed", SCHED_PRIORITY_DEFAULT, 1200, ets_airspeed_main},
    {"flow_position_estimator", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, flow_position_estimator_main},
    {"fmu", SCHED_PRIORITY_DEFAULT, 1200, fmu_main},
    {"frsky_telemetry", SCHED_PRIORITY_DEFAULT, 1200, frsky_telemetry_main},
    {"fw_att_control", SCHED_PRIORITY_DEFAULT, 1200, fw_att_control_main},
    {"fw_pos_control_l1", SCHED_PRIORITY_DEFAULT, 1200, fw_pos_control_l1_main},
    {"gimbal", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, gimbal_main},
    {"gpio_led", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, gpio_led_main},
    {"gps", SCHED_PRIORITY_DEFAULT, 1200, gps_main},
    {"hil", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, hil_main},
    {"hmc5883", SCHED_PRIORITY_DEFAULT, 1200, hmc5883_main},
    {"hott_sensors", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, hott_sensors_main},
    {"hott_telemetry", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, hott_telemetry_main},
    {"l3gd20", SCHED_PRIORITY_DEFAULT, 1200, l3gd20_main},
    {"land_detector", SCHED_PRIORITY_DEFAULT, 1200, land_detector_main},
    {"ll40ls", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, ll40ls_main},
    {"lsm303d", SCHED_PRIORITY_DEFAULT, 1200, lsm303d_main},
    {"mavlink", SCHED_PRIORITY_DEFAULT, 1200, mavlink_main},
    {"mb12xx", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, mb12xx_main},
    {"mc_att_control", SCHED_PRIORITY_DEFAULT, 1200, mc_att_control_main},
    {"mc_pos_control", SCHED_PRIORITY_DEFAULT, 1200, mc_pos_control_main},
    {"meas_airspeed", SCHED_PRIORITY_DEFAULT, 1200, meas_airspeed_main},
    {"mixer", SCHED_PRIORITY_DEFAULT, 4096, mixer_main},
    {"mkblctrl", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, mkblctrl_main},
    {"mpu6000", SCHED_PRIORITY_DEFAULT, 1200, mpu6000_main},
    {"ms5611", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, ms5611_main},
    {"mtd", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, mtd_main},
    {"navigator", SCHED_PRIORITY_DEFAULT, 1200, navigator_main},
    {"nshterm", SCHED_PRIORITY_DEFAULT-30, 1500, nshterm_main},
    {"oreoled", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, oreoled_main},
    {"param", SCHED_PRIORITY_DEFAULT, 1800, param_main},
    {"perf", SCHED_PRIORITY_DEFAULT, 1800, perf_main},
    {"preflight_check", SCHED_PRIORITY_DEFAULT, 1800, preflight_check_main},
    {"pwm", SCHED_PRIORITY_DEFAULT, 1800, pwm_main},
    {"px4flow", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, px4flow_main},
    {"px4io", SCHED_PRIORITY_DEFAULT, 1200, px4io_main},
    {"reboot", SCHED_PRIORITY_DEFAULT, 800, reboot_main},
    {"rgbled", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, rgbled_main},
    {"rover_steering_control", SCHED_PRIORITY_DEFAULT, 1200, rover_steering_control_main},
    {"sdlog2", SCHED_PRIORITY_MAX-30, 1200, sdlog2_main},
    {"sensors", SCHED_PRIORITY_MAX-5, 1200, sensors_main},
    {"sf0x", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, sf0x_main},
    {"tone_alarm", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, tone_alarm_main},
    {"top", SCHED_PRIORITY_DEFAULT, 1700, top_main},
    {"trone", SCHED_PRIORITY_DEFAULT, 1200, trone_main},
    {"uavcan", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, uavcan_main},
    {"uorb", SCHED_PRIORITY_DEFAULT, 2048, uorb_main},
    {"ver", SCHED_PRIORITY_DEFAULT, 1024, ver_main},
    {"vtol_att_control", SCHED_PRIORITY_DEFAULT, CONFIG_PTHREAD_STACK_DEFAULT, vtol_att_control_main},
    {NULL, 0, 0, NULL}
};
const int g_builtin_count = 62;
