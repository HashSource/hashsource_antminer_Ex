void *runtime_ctrl_ltc_1489()
{
  void *v0; // r8
  _QWORD v2[145]; // [sp+10h] [bp-148Ch] BYREF
  char v3[4100]; // [sp+498h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "runtime_ctrl_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v3);
  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = backend_init_base;
  HIDWORD(v2[0]) = reset_base;
  LODWORD(v2[2]) = dhash_mining_start_base;
  LODWORD(v2[3]) = dhash_mining_reset_base;
  HIDWORD(v2[2]) = dhash_mining_stop_base;
  HIDWORD(v2[3]) = backend_exit_base;
  LODWORD(v2[4]) = push_work_base;
  HIDWORD(v2[4]) = async_push_work_base;
  LODWORD(v2[5]) = pop_ans_base;
  LODWORD(v2[7]) = softreset_all_chip_ltc;
  HIDWORD(v2[5]) = try_pop_ans_base;
  HIDWORD(v2[7]) = setup_all_chip_ltc;
  LODWORD(v2[8]) = work_2_packet_ltc;
  HIDWORD(v2[8]) = packet_2_nonce_ltc;
  LODWORD(v2[9]) = check_nonce_ltc;
  LODWORD(v2[10]) = global_idx_free_ltc;
  HIDWORD(v2[9]) = global_idx_init_ltc;
  HIDWORD(v2[10]) = set_baud_ltc;
  LODWORD(v2[11]) = sub_A06C8;
  HIDWORD(v2[11]) = sub_A05AC;
  LODWORD(v2[12]) = sub_9E8A0;
  LODWORD(v2[13]) = sub_9E318;
  HIDWORD(v2[12]) = sub_9E310;
  HIDWORD(v2[13]) = sub_A02D8;
  LODWORD(v2[14]) = sub_9F694;
  HIDWORD(v2[14]) = sub_9FF04;
  LODWORD(v2[15]) = sub_9FEDC;
  HIDWORD(v2[16]) = get_theory_hashrate_ltc;
  LODWORD(v2[16]) = get_chip_status_ltc;
  LODWORD(v2[17]) = get_sale_hashrate_ltc;
  HIDWORD(v2[17]) = get_qualify_hashrate_ltc;
  LODWORD(v2[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(v2[18]) = set_sensor_extern_mode_ltc;
  HIDWORD(v2[19]) = read_sensor_temp_remote_ltc;
  LODWORD(v2[19]) = read_sensor_temp_local_ltc;
  LODWORD(v2[20]) = parameter_update_ltc;
  HIDWORD(v2[20]) = overclock_update_ltc;
  LODWORD(v2[21]) = get_pcba_test_level_ltc;
  HIDWORD(v2[21]) = get_packet_remain_len_ltc;
  HIDWORD(v2[23]) = sub_9FB10;
  LODWORD(v2[23]) = adjust_working_freq_ltc;
  LODWORD(v2[24]) = set_frequency_by_temp_single_base;
  HIDWORD(v2[24]) = set_frequency_single_base;
  HIDWORD(v2[25]) = sub_A0BF8;
  HIDWORD(v2[26]) = sub_9E8B8;
  LODWORD(v2[28]) = dhash_start_ltc;
  LODWORD(v2[27]) = top_init_ltc;
  LODWORD(v2[32]) = set_chipaddr_base;
  HIDWORD(v2[32]) = set_inactive_base;
  LODWORD(v2[33]) = set_chip_reg_ltc;
  HIDWORD(v2[34]) = set_core_enable_ltc;
  HIDWORD(v2[35]) = sync_get_chip_reg_ltc;
  LODWORD(v2[35]) = sync_get_status_ltc;
  HIDWORD(v2[37]) = sync_get_core_reg_ltc;
  LODWORD(v2[38]) = 14156;
  LODWORD(v2[40]) = 6517868;
  v2[42] = 0x7500000078LL;
  v2[41] = 0x100001489LL;
  v2[43] = 0x8000003A8LL;
  HIDWORD(v2[44]) = 2;
  HIDWORD(v2[33]) = set_core_reg_ltc;
  LODWORD(v2[34]) = set_core_reg_ltc;
  HIDWORD(v2[53]) = 2;
  HIDWORD(v2[65]) = 2;
  HIDWORD(v2[46]) = 210;
  LODWORD(v2[47]) = 500;
  LODWORD(v2[106]) = 8;
  HIDWORD(v2[48]) = sensor_info_ltc_1489;
  v2[49] = qword_192AF4;
  v2[50] = qword_192AFC;
  LODWORD(v2[125]) = 1;
  v2[51] = qword_192B04;
  v2[124] = 949793;
  LODWORD(v2[54]) = 27;
  HIDWORD(v2[121]) = 1112014848;
  v2[122] = 0x5DC44D16000LL;
  v2[104] = 0x400000070LL;
  v2[105] = 0x900000056LL;
  HIDWORD(v2[103]) = 216;
  v0 = calloc(1u, 0x488u);
  memcpy(v0, v2, 0x488u);
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "runtime_ctrl_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "runtime_ctrl_ltc_1489",
    21,
    1064,
    40,
    v3);
  return v0;
}
