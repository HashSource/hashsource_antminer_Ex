void *__fastcall runtime_ctrl_ltc_1489(int a1)
{
  int v1; // r0
  void *v2; // r0
  void *v3; // r0
  int v4; // r0
  void *v6; // [sp+14h] [bp-13D0h]
  _QWORD v7[121]; // [sp+18h] [bp-13CCh] BYREF
  _BYTE v8[4100]; // [sp+3E0h] [bp-1004h] BYREF

  V_LOCK(a1);
  v1 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v1);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "runtime_ctrl_ltc_1489",
    21,
    957,
    40,
    v8);
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[34]) = 14156;
  HIDWORD(v7[42]) = 210;
  LODWORD(v7[43]) = 500;
  LODWORD(v7[36]) = 6517868;
  HIDWORD(v7[44]) = sensor_info_ltc_1489;
  v7[45] = qword_171A68;
  v7[46] = qword_171A70;
  v7[47] = qword_171A78;
  v2 = calloc(1u, 0x3C8u);
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
  LODWORD(v7[11]) = sub_8F100;
  HIDWORD(v7[11]) = sub_8EFE4;
  LODWORD(v7[12]) = sub_8D2D8;
  HIDWORD(v7[12]) = sub_8CD48;
  LODWORD(v7[13]) = sub_8CD50;
  HIDWORD(v7[13]) = sub_8ED10;
  LODWORD(v7[14]) = sub_8E0CC;
  HIDWORD(v7[14]) = sub_8E93C;
  LODWORD(v7[15]) = sub_8E914;
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
  HIDWORD(v7[25]) = sub_8D2F0;
  LODWORD(v7[26]) = top_init_ltc;
  HIDWORD(v7[23]) = sub_8E548;
  LODWORD(v7[20]) = parameter_update_ltc;
  HIDWORD(v7[29]) = set_inactive_base;
  LODWORD(v7[30]) = set_chip_reg_ltc;
  LODWORD(v7[27]) = dhash_start_ltc;
  HIDWORD(v7[24]) = sub_8F684;
  HIDWORD(v7[32]) = sync_get_chip_reg_ltc;
  HIDWORD(v7[33]) = sync_get_core_reg_ltc;
  HIDWORD(v7[31]) = set_core_enable_ltc;
  v7[37] = 0x100001489LL;
  v7[38] = 0x7500000078LL;
  LODWORD(v7[29]) = set_chipaddr_base;
  v7[39] = 0x8000003A8LL;
  LODWORD(v7[50]) = 27;
  HIDWORD(v7[98]) = 216;
  HIDWORD(v7[30]) = set_core_reg_ltc;
  LODWORD(v7[31]) = set_core_reg_ltc;
  HIDWORD(v7[40]) = 2;
  HIDWORD(v7[49]) = 2;
  LODWORD(v7[32]) = sync_get_status_ltc;
  HIDWORD(v7[61]) = 2;
  v7[99] = 0x400000070LL;
  LODWORD(v7[119]) = 1;
  v7[118] = 949793;
  v7[100] = 0x900000056LL;
  LODWORD(v7[101]) = 8;
  v7[115] = 0x44D1600042480000LL;
  LODWORD(v7[116]) = 1500;
  v3 = memcpy(v2, v7, 0x3C8u);
  V_LOCK(v3);
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    174,
    "runtime_ctrl_ltc_1489",
    21,
    1060,
    40,
    v8);
  return v6;
}
