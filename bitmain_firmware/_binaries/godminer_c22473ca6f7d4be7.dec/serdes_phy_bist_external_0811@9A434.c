int __fastcall serdes_phy_bist_external_0811(
        int a1,
        int a2,
        _BYTE *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6,
        int a7)
{
  int v9; // r7
  char *v11; // r1
  _DWORD *v12; // r11
  int v13; // r10
  int v14; // r10
  int v15; // r1
  int v16; // r9
  int v17; // r9
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r1
  unsigned __int8 *v22; // r8
  unsigned __int8 v23; // r3
  unsigned __int8 v24; // t1
  unsigned int v26; // r3
  unsigned __int8 v27; // r2
  int v28; // r3
  int v29; // r1
  int *v30; // r9
  unsigned __int8 v31; // t1
  unsigned __int8 v32; // [sp+0h] [bp-106Ch]
  int v33; // [sp+20h] [bp-104Ch]
  int v35; // [sp+40h] [bp-102Ch]
  _DWORD v36[7]; // [sp+48h] [bp-1024h] BYREF
  int v37; // [sp+64h] [bp-1008h]
  int v38; // [sp+68h] [bp-1004h] BYREF
  char v39; // [sp+6Ch] [bp-1000h]
  _BYTE _6D[4115]; // [sp+6Dh] [bp-FFFh] BYREF

  v9 = a5;
  V_LOCK();
  LOWORD(v11) = -7948;
  HIWORD(v11) = (unsigned int)&loc_12D594 >> 16;
  LOWORD(v12) = -14512;
  HIWORD(v12) = (unsigned int)&unk_16B55C >> 16;
  V_INT((int)v36, v11, *(int *)(a1 + 140));
  LOWORD(v13) = -22412;
  HIWORD(v13) = (unsigned int)&unk_139BA4 >> 16;
  v33 = v13;
  v14 = 61458;
  logfmt_raw(
    (char *)&v38,
    0x1000u,
    0,
    v37,
    v36[0],
    v36[1],
    v36[2],
    v36[3],
    v36[4],
    v36[5],
    v36[6],
    v37,
    v33,
    "serdes_phy_bist_external_0811");
  V_UNLOCK();
  LOWORD(v15) = -25512;
  HIWORD(v15) = (unsigned int)"one" >> 16;
  zlog(*v12, v15, 154, "serdes_phy_bist_external_0811", 29, 9976, 60, &v38);
  v16 = 61441;
  if ( a4 != 8 )
  {
    v16 = 1;
    v14 = 18;
  }
  sub_5C158(
    a1,
    (unsigned __int8)a3,
    97,
    (a5 << 28) & 0x70000000
  | (a5 << 24) & 0x7000000
  | a5 & 7
  | (a5 << 20) & 0x700000
  | (a5 << 16) & 0x70000
  | (a5 << 12) & 0x7000
  | (a5 << 8) & 0x700
  | (16 * a5) & 0x70);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, -15);
  sub_5D8A4(a1, (unsigned __int8)a3, v14, (2 * a5) & 0xE);
  sub_5D8A4(a1, (unsigned __int8)a3, v16, 0);
  if ( a6 )
  {
    v26 = a6 >> 1;
    if ( a6 >> 1 )
    {
      v27 = 0;
      do
      {
        v26 >>= 1;
        ++v27;
      }
      while ( v26 );
      v17 = v27;
      v35 = v27;
    }
    else
    {
      v35 = 0;
      v17 = 0;
    }
  }
  else
  {
    v35 = 1;
    v17 = 1;
  }
  V_LOCK();
  LOWORD(v18) = -22436;
  if ( !a5 )
  {
    HIWORD(v18) = (unsigned int)&unk_139B8C >> 16;
    v9 = v18;
  }
  LOWORD(v19) = -22428;
  if ( a5 )
  {
    HIWORD(v19) = (unsigned int)&unk_139B94 >> 16;
    v9 = v19;
  }
  LOWORD(v20) = -22404;
  HIWORD(v20) = (unsigned int)&unk_139BAC >> 16;
  logfmt_raw((char *)&v38, 0x1000u, 0, v20, a7, v17, v9);
  V_UNLOCK();
  LOWORD(v21) = -25512;
  HIWORD(v21) = (unsigned int)"one" >> 16;
  zlog(*v12, v21, 154, "serdes_phy_bist_external_0811", 29, 9998, 60, &v38);
  switch ( a6 )
  {
    case 2u:
      if ( a7 )
      {
        div2_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div2_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_20;
    case 4u:
      if ( a7 )
      {
        div4_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div4_seq_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_20;
    case 8u:
      if ( a7 )
      {
        div8_seq_one_lane(a1, a2, (int)a3, 4);
        goto LABEL_35;
      }
      div8_seq_one_lane(a1, a2, (int)a3, 7);
LABEL_20:
      v39 = 28;
      v38 = 336529925;
      goto LABEL_21;
    case 0x20u:
      if ( a7 )
      {
        div32_20210813_500M_one_lane(a1, a2, (int)a3, 4);
LABEL_35:
        v39 = 28;
        v38 = 336529925;
LABEL_36:
        sub_5C158(a1, (unsigned __int8)a3, 98, 16);
        goto LABEL_22;
      }
      div32_20210813_500M_one_lane(a1, a2, (int)a3, 7);
      goto LABEL_20;
  }
  V_LOCK();
  LOWORD(v28) = -22380;
  HIWORD(v28) = (unsigned int)&unk_139BC4 >> 16;
  logfmt_raw((char *)&v38, 0x1000u, 0, v28);
  V_UNLOCK();
  LOWORD(v29) = -25512;
  HIWORD(v29) = (unsigned int)"one" >> 16;
  zlog(*v12, v29, 154, "serdes_phy_bist_external_0811", 29, 10021, 60, &v38);
  v39 = 28;
  v38 = 336529925;
  if ( a7 )
    goto LABEL_36;
LABEL_21:
  sub_5C158(a1, (unsigned __int8)a3, 98, 128);
LABEL_22:
  v22 = (unsigned __int8 *)&v38 + 1;
  v23 = 5;
  while ( a7 )
  {
    enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v23);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
    read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
    sub_5C158(a1, (unsigned __int8)a3, 144, -9);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C158(a1, (unsigned __int8)a3, 144, 8);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454857);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
    usleep((__useconds_t)&loc_F4240);
    check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
    check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
    usleep(0x493E0u);
    sub_5C158(a1, (unsigned __int8)a3, 144, -9);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
    sub_5C158(a1, (unsigned __int8)a3, 144, 0);
    sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
    check_ref_clock_ready(a1, a2, (int)a3);
    check_bist_done_one_lane(a1, a2, (int)a3, 4);
    check_bist_done_one_lane(a1, a2, (int)a3, 7);
    check_bist_error_one_lane(a1, a2, (int)a3, 7);
    if ( _6D == v22 )
      goto LABEL_27;
LABEL_24:
    v24 = *v22++;
    v23 = v24;
  }
  enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v23);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
  read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -9);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C158(a1, (unsigned __int8)a3, 144, 8);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467145);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
  usleep((__useconds_t)&loc_F4240);
  check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
  check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
  usleep(0x493E0u);
  sub_5C158(a1, (unsigned __int8)a3, 144, -9);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467119);
  sub_5C158(a1, (unsigned __int8)a3, 144, 0);
  sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
  check_ref_clock_ready(a1, a2, (int)a3);
  check_bist_done_one_lane(a1, a2, (int)a3, 4);
  check_bist_done_one_lane(a1, a2, (int)a3, 7);
  check_bist_error_one_lane(a1, a2, (int)a3, 4);
  if ( _6D != v22 )
    goto LABEL_24;
LABEL_27:
  if ( v35 == 4 )
  {
    if ( a7 )
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 7);
    else
      enable_rx_equalizer_tuning_one_lane(a1, a2, (int)a3, 4);
    v30 = &v38;
    do
    {
      v31 = *(_BYTE *)v30;
      v30 = (int *)((char *)v30 + 1);
      v32 = v31;
      if ( a7 )
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 7u, v32);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C158(a1, (unsigned __int8)a3, 144, -9);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C158(a1, (unsigned __int8)a3, 144, 8);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454857);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 4);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 7);
        usleep(0x493E0u);
        sub_5C158(a1, (unsigned __int8)a3, 144, -9);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454831);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147454975);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 7);
      }
      else
      {
        enable_rxbist_autostop_one_lane(a1, a2, (unsigned __int8)a3, 4u, v32);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 4u);
        read_rx_debug_reg2_one_lane(a1, a2, a3, 7u);
        sub_5C158(a1, (unsigned __int8)a3, 144, -9);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C158(a1, (unsigned __int8)a3, 144, 8);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C158(a1, (unsigned __int8)a3, 144, -1073741825);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0x40000000);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467145);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
        usleep((__useconds_t)&loc_F4240);
        check_bist_tx_running_one_lane(a1, a2, (int)a3, 7);
        check_bist_rx_running_one_lane(a1, a2, (int)a3, 4);
        usleep(0x493E0u);
        sub_5C158(a1, (unsigned __int8)a3, 144, -9);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467119);
        sub_5C158(a1, (unsigned __int8)a3, 144, 0);
        sub_5C158(a1, (unsigned __int8)a3, 145, -2147467263);
        check_ref_clock_ready(a1, a2, (int)a3);
        check_bist_done_one_lane(a1, a2, (int)a3, 4);
        check_bist_done_one_lane(a1, a2, (int)a3, 7);
        check_bist_error_one_lane(a1, a2, (int)a3, 4);
      }
    }
    while ( v30 != (int *)v22 );
  }
  sub_5C158(a1, (unsigned __int8)a3, 98, 0);
  return 0;
}
