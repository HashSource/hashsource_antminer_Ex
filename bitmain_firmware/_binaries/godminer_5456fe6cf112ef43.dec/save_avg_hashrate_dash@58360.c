int __fastcall save_avg_hashrate_dash(int a1)
{
  double v1; // d0
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  unsigned __int8 v15; // [sp+16h] [bp-1006h] BYREF
  char v16; // [sp+17h] [bp-1005h] BYREF
  _BYTE v17[4100]; // [sp+18h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 140);
  v15 = 0;
  v16 = 0;
  result = eeprom_read(v3, 195, &v15, 1);
  if ( v15 != 165 )
  {
    result = is_eeprom_loaded(result);
    if ( result )
    {
      V_LOCK(result);
      v5 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v5);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        728,
        20,
        v17);
      v6 = *(_DWORD *)(a1 + 140);
      v16 = (unsigned __int16)(int)(v1 / 1000.0 / 1000.0 / 1000.0) >> 8;
      v7 = eeprom_write(v6, 196, &v16, 1);
      V_LOCK(v7);
      v8 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v8);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        731,
        20,
        v17);
      v9 = *(_DWORD *)(a1 + 140);
      v16 = (int)(v1 / 1000.0 / 1000.0 / 1000.0);
      v10 = eeprom_write(v9, 197, &v16, 1);
      V_LOCK(v10);
      v11 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_dash/backend_dash.c",
        156,
        "save_avg_hashrate_dash",
        22,
        734,
        20,
        v17);
      v12 = *(_DWORD *)(a1 + 140);
      v16 = -91;
      v13 = eeprom_write(v12, 195, &v16, 1);
      V_LOCK(v13);
      v14 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v14);
      result = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godmi"
                 "ner-origin_master/backend/backend_dash/backend_dash.c",
                 156,
                 "save_avg_hashrate_dash",
                 22,
                 737,
                 20,
                 v17);
      *(double *)(a1 + 312) = v1;
      *(_BYTE *)(a1 + 310) = 1;
    }
  }
  return result;
}
