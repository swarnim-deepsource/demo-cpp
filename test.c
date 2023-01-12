static struct lifeline_battery_val_t last_batt_val;
static uint32_t n_error_gauge_read = 0;

static int lifeline_battery_get_battery_lvl(int * lvl, int * mv, int * T_kelvin) {
    int gauge_readout[5] = {0,0,0,0,0};
    if (gauge_driver_register_read(gauge_readout) != 0) {}
}
