int __fastcall task_check_miner_status(int a1)
{
  bool v1; // r3
  int v3; // [sp+3Ch] [bp-10D8h]
  int v4; // [sp+40h] [bp-10D4h]
  int v5; // [sp+48h] [bp-10CCh]
  int v6; // [sp+50h] [bp-10C4h]
  int v7; // [sp+58h] [bp-10BCh]
  __int64 v8; // [sp+70h] [bp-10A4h] BYREF
  int v9; // [sp+78h] [bp-109Ch]
  int v10; // [sp+7Ch] [bp-1098h]
  int v11; // [sp+84h] [bp-1090h]
  _BYTE v12[12]; // [sp+88h] [bp-108Ch] BYREF
  int v13; // [sp+1088h] [bp-8Ch] BYREF
  unsigned __int8 v14; // [sp+108Fh] [bp-85h] BYREF
  __int64 v15; // [sp+1090h] [bp-84h] BYREF
  int v16; // [sp+1098h] [bp-7Ch]
  int v17; // [sp+109Ch] [bp-78h]
  const char *v18[7]; // [sp+10A0h] [bp-74h] BYREF
  int v19; // [sp+10BCh] [bp-58h]
  int v20; // [sp+10C4h] [bp-50h]
  __int64 *v21; // [sp+10C8h] [bp-4Ch]
  int v22; // [sp+10CCh] [bp-48h]
  __int64 *v23; // [sp+10D0h] [bp-44h]
  int v24; // [sp+10D4h] [bp-40h]
  __int64 *v25; // [sp+10D8h] [bp-3Ch]
  int v26; // [sp+10DCh] [bp-38h]
  __int64 *v27; // [sp+10E0h] [bp-34h]
  bool v28; // [sp+10E5h] [bp-2Fh]
  char v29; // [sp+10E6h] [bp-2Eh]
  char v30; // [sp+10E7h] [bp-2Dh]
  _DWORD *all_created_runtime; // [sp+10E8h] [bp-2Ch]
  unsigned __int8 v32; // [sp+10EFh] [bp-25h]
  bool v33; // [sp+10F0h] [bp-24h]
  bool v34; // [sp+10F1h] [bp-23h]
  char v35; // [sp+10F2h] [bp-22h]
  unsigned __int8 v36; // [sp+10F3h] [bp-21h]
  int i; // [sp+10F4h] [bp-20h]

  v11 = a1;
  v14 = 0;
  if ( byte_5AD669 != 1 )
  {
    sub_B47C4();
    byte_5AD669 = 1;
  }
  pthread_mutex_lock(&stru_5AD66C);
  v35 = byte_5AD668 == 0;
  sub_B2B78((int)&v8, byte_5AD668 == 0);
  v15 = v8;
  v16 = v9;
  v17 = v10;
  v27 = &v15;
  v26 = 1;
  v7 = v8 & 2;
  v34 = v7 != 0;
  if ( (v8 & 2) != 0 )
    set_miner_6060info_status_high_temp_err(1);
  v25 = &v15;
  v24 = 2;
  v6 = v15 & 4;
  v33 = v6 != 0;
  if ( (v15 & 4) != 0 )
    set_miner_6060info_status_low_temp_err(1);
  v32 = sub_B3D14(v35);
  v13 = 0;
  all_created_runtime = get_all_created_runtime(&v13);
  for ( i = 0; i < v13; ++i )
    v35 = (unsigned __int8)(v35 & *(_BYTE *)(all_created_runtime[i] + 279)) != 0;
  v30 = sub_B3FEC(v35);
  v29 = sub_B415C(v35, &v14);
  if ( v35 )
    no_connection_with_pool = v29 != 0;
  v21 = &v15;
  v20 = 3;
  v4 = v15 & 8;
  v28 = v4 != 0;
  v23 = &v15;
  v22 = 4;
  v5 = v15 & 0x10;
  if ( (v15 & 0x10) != 0 )
  {
    v36 = 1;
    set_miner_6060info_uneffective_temp_err(1);
  }
  else
  {
    v36 = 0;
  }
  if ( byte_5AD668 != 1 && (v34 || v33 || v32 || v28 || v36 || v14) )
  {
    byte_5AD668 = 1;
    sub_B3F30();
    V_LOCK();
    sub_B2810(v18, 1);
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v19,
      v18[0],
      v18[1],
      v18[2],
      v18[3],
      v18[4],
      v18[5],
      v18[6],
      v19,
      "high temp %d low temp %d fan err %d read no temp %d, uneffective temp %d, lost connection too long %d",
      v34,
      v33,
      v32,
      v28,
      v36,
      v14,
      v3,
      v4,
      0,
      v5,
      0,
      v6,
      0,
      v7,
      0,
      8,
      0,
      4,
      0);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/check_miner_status.c",
      173,
      "task_check_miner_status",
      23,
      361,
      120,
      v12);
  }
  byte_5AD667 = v34 || v33 || v28 || v36 || v32 || v30 || v29 || byte_5AD668;
  if ( v35 )
  {
    byte_5AD660 = v34;
    byte_5AD661 = v33;
    byte_5AD664 = v32;
    v1 = v30 || byte_5AD668;
    byte_5AD665 = v1;
    byte_5AD666 = v29;
    byte_5AD662 = v28;
    byte_5AD663 = v36;
  }
  pthread_mutex_unlock(&stru_5AD66C);
  sub_B4714(byte_5AD667);
  if ( tmp_ctrl_enable != 1 || v34 || v28 || v36 || v14 )
    return fan_pwm_set_max();
  else
    return set_pwm_by_temp();
}
