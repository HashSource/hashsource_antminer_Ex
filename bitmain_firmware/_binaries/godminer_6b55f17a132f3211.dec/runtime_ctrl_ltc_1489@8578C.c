void *__fastcall runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r0
  void *v3; // r0
  int v4; // r0
  void *v6; // [sp+14h] [bp-13C0h]
  _QWORD v7[119]; // [sp+18h] [bp-13BCh] BYREF
  _BYTE v8[4100]; // [sp+3D0h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    170,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v8);
  memset(v7, 0, sizeof(v7));
  HIDWORD(v7[32]) = 14156;
  v7[41] = 0x1F4000000D2LL;
  HIDWORD(v7[34]) = 6517868;
  v7[43] = sensor_info_ltc_1489;
  v7[44] = qword_1637C8;
  v7[45] = qword_1637D0;
  LODWORD(v7[46]) = unk_1637D8;
  v2 = calloc(1u, 0x3B8u);
  LODWORD(v7[2]) = dhash_mining_start_base;
  HIDWORD(v7[2]) = dhash_mining_stop_base;
  LODWORD(v7[3]) = dhash_mining_reset_base;
  HIDWORD(v7[3]) = backend_exit_base;
  LODWORD(v7[4]) = push_work_base;
  HIDWORD(v7[4]) = async_push_work_base;
  LODWORD(v7[5]) = pop_ans_base;
  HIDWORD(v7[5]) = try_pop_ans_base;
  LODWORD(v7[7]) = softreset_all_chip_ltc;
  HIDWORD(v7[7]) = setup_all_chip_ltc;
  LODWORD(v7[8]) = work_2_packet_ltc;
  HIDWORD(v7[8]) = packet_2_nonce_ltc;
  LODWORD(v7[9]) = check_nonce_ltc;
  HIDWORD(v7[9]) = global_idx_init_ltc;
  LODWORD(v7[10]) = global_idx_free_ltc;
  HIDWORD(v7[10]) = set_baud_ltc;
  LODWORD(v7[11]) = sub_83C94;
  HIDWORD(v7[11]) = sub_83B78;
  LODWORD(v7[12]) = sub_81E30;
  HIDWORD(v7[12]) = sub_818A0;
  LODWORD(v7[13]) = sub_818A8;
  HIDWORD(v7[13]) = sub_838A4;
  LODWORD(v7[14]) = sub_82C24;
  HIDWORD(v7[14]) = sub_834D0;
  LODWORD(v7[15]) = sub_834A8;
  LODWORD(v7[16]) = get_chip_status_ltc;
  v6 = v2;
  LODWORD(v7[0]) = backend_init_base;
  HIDWORD(v7[0]) = reset_base;
  HIDWORD(v7[16]) = get_theory_hashrate_ltc;
  LODWORD(v7[17]) = get_sale_hashrate_ltc;
  HIDWORD(v7[17]) = get_qualify_hashrate_ltc;
  LODWORD(v7[18]) = get_qualify_nonce_num_ltc;
  HIDWORD(v7[18]) = set_sensor_extern_mode_ltc;
  LODWORD(v7[19]) = read_sensor_temp_local_ltc;
  HIDWORD(v7[20]) = overclock_update_ltc;
  HIDWORD(v7[19]) = read_sensor_temp_remote_ltc;
  HIDWORD(v7[21]) = get_packet_remain_len_ltc;
  LODWORD(v7[23]) = adjust_working_freq_ltc;
  LODWORD(v7[21]) = get_pcba_test_level_ltc;
  HIDWORD(v7[24]) = sub_81E48;
  LODWORD(v7[25]) = top_init_ltc;
  HIDWORD(v7[23]) = sub_830DC;
  LODWORD(v7[20]) = parameter_update_ltc;
  LODWORD(v7[28]) = set_inactive_base;
  HIDWORD(v7[28]) = set_chip_reg_ltc;
  HIDWORD(v7[25]) = dhash_start_ltc;
  LODWORD(v7[24]) = sub_8421C;
  LODWORD(v7[31]) = sync_get_chip_reg_ltc;
  LODWORD(v7[32]) = sync_get_core_reg_ltc;
  LODWORD(v7[30]) = set_core_enable_ltc;
  HIDWORD(v7[35]) = 5257;
  HIDWORD(v7[27]) = set_chipaddr_base;
  v7[37] = 0x3A800000075LL;
  LODWORD(v7[49]) = 27;
  HIDWORD(v7[97]) = 216;
  LODWORD(v7[29]) = set_core_reg_ltc;
  HIDWORD(v7[29]) = set_core_reg_ltc;
  LODWORD(v7[38]) = 8;
  v7[36] = 0x7800000001LL;
  LODWORD(v7[39]) = 2;
  HIDWORD(v7[48]) = 2;
  HIDWORD(v7[30]) = sync_get_status_ltc;
  HIDWORD(v7[60]) = 2;
  v7[98] = 0x400000070LL;
  LODWORD(v7[118]) = 1;
  v7[117] = 949793;
  v7[99] = 0x900000056LL;
  LODWORD(v7[100]) = 8;
  v7[114] = 0x44D1600042480000LL;
  LODWORD(v7[115]) = 1500;
  v3 = memcpy(v2, v7, 0x3B8u);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    170,
    "runtime_ctrl_ltc_1489",
    21,
    1060,
    40,
    v8);
  return v6;
}
