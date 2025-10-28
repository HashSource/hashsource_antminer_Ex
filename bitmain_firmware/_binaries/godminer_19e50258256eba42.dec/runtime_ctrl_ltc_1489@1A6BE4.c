void *runtime_ctrl_ltc_1489()
{
  _BYTE v1[20]; // [sp+10h] [bp-1554h] BYREF
  _QWORD v2[155]; // [sp+1010h] [bp-554h] BYREF
  void *dest; // [sp+155Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "runtime_ctrl_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v1);
  memset(v2, 0, sizeof(v2));
  LODWORD(v2[0]) = backend_init_base;
  HIDWORD(v2[0]) = reset_base;
  LODWORD(v2[2]) = dhash_mining_start_base;
  LODWORD(v2[3]) = dhash_mining_stop_base;
  HIDWORD(v2[3]) = dhash_mining_reset_base;
  LODWORD(v2[4]) = backend_exit_base;
  HIDWORD(v2[4]) = push_work_base;
  LODWORD(v2[5]) = async_push_work_base;
  HIDWORD(v2[5]) = pop_ans_base;
  LODWORD(v2[6]) = try_pop_ans_base;
  HIDWORD(v2[7]) = OpReagentService::convertCloseToRfid;
  HIDWORD(v2[9]) = setup_all_chip_ltc;
  LODWORD(v2[10]) = work_2_packet_ltc;
  HIDWORD(v2[10]) = packet_2_nonce_ltc;
  LODWORD(v2[11]) = check_nonce_ltc;
  HIDWORD(v2[11]) = global_idx_init_ltc;
  LODWORD(v2[12]) = global_idx_free_ltc;
  HIDWORD(v2[12]) = set_baud_ltc;
  v2[13] = 0x1A5484001A5440LL;
  v2[14] = 0x1A554C001A5508LL;
  v2[15] = 0x1A55A0001A557CLL;
  v2[16] = 0x1A5AB8001A5AF8LL;
  LODWORD(v2[17]) = 1725940;
  LODWORD(v2[18]) = get_chip_status_ltc;
  HIDWORD(v2[18]) = get_theory_hashrate_ltc;
  LODWORD(v2[19]) = get_sale_hashrate_ltc;
  HIDWORD(v2[19]) = get_qualify_hashrate_ltc;
  LODWORD(v2[20]) = get_qualify_nonce_num_ltc;
  HIDWORD(v2[20]) = set_sensor_extern_mode_ltc;
  LODWORD(v2[21]) = read_sensor_temp_local_ltc;
  HIDWORD(v2[21]) = read_sensor_temp_remote_ltc;
  LODWORD(v2[22]) = parameter_update_ltc;
  HIDWORD(v2[22]) = overclock_update_ltc;
  LODWORD(v2[23]) = get_pcba_test_level_ltc;
  HIDWORD(v2[23]) = get_packet_remain_len_ltc;
  LODWORD(v2[25]) = adjust_working_freq_ltc;
  HIDWORD(v2[25]) = 1725640;
  LODWORD(v2[26]) = set_frequency_by_temp_single_base;
  HIDWORD(v2[26]) = set_frequency_single_base;
  HIDWORD(v2[27]) = sub_1A4B0C;
  HIDWORD(v2[28]) = 1723288;
  LODWORD(v2[29]) = top_init_ltc;
  LODWORD(v2[30]) = dhash_start_ltc;
  LODWORD(v2[36]) = set_chipaddr_base;
  HIDWORD(v2[36]) = set_inactive_base;
  LODWORD(v2[37]) = set_chip_reg_ltc;
  HIDWORD(v2[37]) = set_core_reg_ltc;
  LODWORD(v2[38]) = set_core_reg_ltc;
  HIDWORD(v2[38]) = set_core_enable_ltc;
  LODWORD(v2[39]) = sync_get_status_ltc;
  HIDWORD(v2[39]) = sync_get_chip_reg_ltc;
  LODWORD(v2[42]) = sync_get_core_reg_ltc;
  HIDWORD(v2[42]) = 14156;
  memset(&v2[43], 0, 12);
  HIDWORD(v2[44]) = &unk_63746C;
  v2[45] = 0x148900000000LL;
  v2[46] = 0x7800000001LL;
  v2[47] = 0x3A800000075LL;
  LODWORD(v2[48]) = 8;
  LODWORD(v2[49]) = 2;
  v2[51] = qword_5A9370;
  v2[53] = sensor_info_ltc_1489;
  v2[54] = qword_5A935C;
  v2[55] = qword_5A9364;
  LODWORD(v2[56]) = unk_5A936C;
  HIDWORD(v2[58]) = 2;
  LODWORD(v2[59]) = 27;
  HIDWORD(v2[70]) = 2;
  HIDWORD(v2[108]) = 216;
  v2[109] = 0x400000070LL;
  v2[110] = 0x900000056LL;
  LODWORD(v2[111]) = 8;
  v2[127] = 0x44D1600042480000LL;
  HIDWORD(v2[129]) = 1500;
  v2[131] = 949793;
  LODWORD(v2[132]) = 1;
  dest = calloc(1u, 0x4D8u);
  memcpy(dest, v2, 0x4D8u);
  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "runtime_ctrl_ltc() out");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "runtime_ctrl_ltc_1489",
    21,
    1064,
    40,
    v1);
  return dest;
}
