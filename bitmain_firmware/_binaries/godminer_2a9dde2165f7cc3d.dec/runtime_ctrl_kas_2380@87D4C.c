void *runtime_ctrl_kas_2380()
{
  void *v0; // r0
  void *v1; // r6
  _QWORD v3[121]; // [sp+0h] [bp-3CCh] BYREF

  memset(v3, 0, sizeof(v3));
  LODWORD(v3[34]) = 3363659;
  LODWORD(v3[36]) = 7561579;
  HIDWORD(v3[42]) = 500;
  LODWORD(v3[43]) = 500;
  v0 = calloc(1u, 0x3C8u);
  LODWORD(v3[0]) = backend_init_base;
  HIDWORD(v3[0]) = reset_base;
  LODWORD(v3[2]) = dhash_mining_start_base;
  LODWORD(v3[3]) = dhash_mining_reset_base;
  LODWORD(v3[4]) = push_work_base;
  HIDWORD(v3[2]) = dhash_mining_stop_base;
  LODWORD(v3[5]) = pop_ans_base;
  LODWORD(v3[7]) = softreset_all_chip_kas;
  HIDWORD(v3[8]) = packet_2_nonce_kas;
  HIDWORD(v3[3]) = backend_exit_base;
  HIDWORD(v3[9]) = global_idx_init_kas;
  HIDWORD(v3[10]) = set_baud_kas;
  LODWORD(v3[16]) = get_chip_status_kas;
  HIDWORD(v3[4]) = async_push_work_base;
  LODWORD(v3[17]) = get_sale_hashrate_kas;
  LODWORD(v3[18]) = get_qualify_nonce_num_kas;
  HIDWORD(v3[5]) = try_pop_ans_base;
  LODWORD(v3[19]) = read_sensor_temp_local_kas;
  LODWORD(v3[8]) = work_2_packet_kas;
  HIDWORD(v3[19]) = read_sensor_temp_remote_kas;
  LODWORD(v3[9]) = check_nonce_kas;
  LODWORD(v3[20]) = parameter_update_kas;
  LODWORD(v3[10]) = global_idx_free_kas;
  HIDWORD(v3[20]) = overclock_update_kas;
  LODWORD(v3[15]) = sub_840A8;
  LODWORD(v3[21]) = get_pcba_test_level_kas;
  HIDWORD(v3[16]) = get_theory_hashrate_kas;
  HIDWORD(v3[21]) = get_packet_remain_len_kas;
  HIDWORD(v3[17]) = get_qualify_hashrate_kas;
  HIDWORD(v3[23]) = set_frequency_kas;
  HIDWORD(v3[18]) = set_sensor_extern_mode_kas;
  HIDWORD(v3[24]) = sub_85934;
  HIDWORD(v3[25]) = read_temperature_kas;
  LODWORD(v3[29]) = set_chipaddr_base;
  LODWORD(v3[30]) = set_chip_reg_base;
  LODWORD(v3[26]) = top_init_kas;
  LODWORD(v3[32]) = sync_get_status_base2;
  HIDWORD(v3[33]) = sync_get_core_reg_base3;
  v3[37] = 0x100002380LL;
  v3[38] = 0x2D0000005CLL;
  HIDWORD(v3[40]) = 2;
  HIDWORD(v3[45]) = 2;
  v3[46] = 0x500000005FLL;
  LODWORD(v3[27]) = dhash_start_kas;
  v3[47] = 0x1FFFFFFECLL;
  HIDWORD(v3[29]) = set_inactive_base;
  LODWORD(v3[50]) = 36;
  HIDWORD(v3[98]) = 200;
  HIDWORD(v3[30]) = set_core_reg_base_9;
  LODWORD(v3[31]) = set_core_reg_base_9;
  v3[99] = 0x800000022LL;
  HIDWORD(v3[32]) = sync_get_chip_reg_base3;
  v3[100] = 0xE00000036LL;
  HIDWORD(v3[44]) = &sensor_kas_2380;
  LODWORD(v3[116]) = 1420;
  HIDWORD(v3[31]) = set_core_enable_base;
  v1 = v0;
  HIDWORD(v3[57]) = 1;
  v3[115] = 0x43C8000042480000LL;
  LOBYTE(v3[117]) = 15;
  LODWORD(v3[119]) = 1;
  v3[118] = 142606;
  memcpy(v0, v3, 0x3C8u);
  return v1;
}
