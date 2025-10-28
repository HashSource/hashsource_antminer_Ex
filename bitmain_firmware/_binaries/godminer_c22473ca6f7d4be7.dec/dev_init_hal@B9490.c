int __fastcall dev_init_hal(int a1)
{
  int v1; // r4
  _DWORD *v2; // r5
  _DWORD *v3; // r10
  int v4; // r6
  unsigned int hash_on_plug; // r9
  int v6; // r3
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r1
  unsigned __int8 v21; // [sp+1Fh] [bp-1005h] BYREF
  char v22[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = platform_init();
  if ( v1 )
  {
    V_LOCK();
    LOWORD(v17) = -824;
    HIWORD(v17) = (unsigned int)"or" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v18) = -14512;
    HIWORD(v18) = (unsigned int)&unk_16B55C >> 16;
    LOWORD(v19) = -1132;
    HIWORD(v19) = (unsigned int)"_standard" >> 16;
    zlog(*v18, v19, 157, "dev_init_hal", 12, 52, 100, v22);
    return -1;
  }
  LOWORD(v2) = -14664;
  HIWORD(v2) = (unsigned int)&unk_16B4C8 >> 16;
  LOWORD(v3) = -14512;
  LOWORD(v4) = -10948;
  *v2 = 0;
  HIWORD(v3) = (unsigned int)&unk_16B55C >> 16;
  HIWORD(v4) = (unsigned int)&unk_16C33C >> 16;
  hash_on_plug = get_hash_on_plug();
  while ( 1 )
  {
    while ( ((hash_on_plug >> v1) & 1) == 0 )
    {
      if ( ++v1 == 16 )
        goto LABEL_10;
    }
    v6 = *v2;
    *(_DWORD *)(v4 + 8 * *v2) = v1;
    *(_BYTE *)(v4 + 8 * v6 + 4) = 1;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "chain_offset %d, chain %d", *v2, *(_DWORD *)(v4 + 8 * *v2));
    V_UNLOCK();
    LOWORD(v7) = -1132;
    HIWORD(v7) = (unsigned int)"_standard" >> 16;
    zlog(*v3, v7, 157, "dev_init_hal", 12, 62, 60, v22);
    if ( open_pic((unsigned __int8)v1) < 0 )
    {
      V_LOCK();
      logfmt_raw(v22, 0x1000u, 0, "chain_offset %d, chain %d, open pic error!", *v2, *(_DWORD *)(v4 + 8 * *v2));
      V_UNLOCK();
      v13 = *v3;
      v14 = 65;
      goto LABEL_12;
    }
    pic1704_reset(v1);
    usleep(0x493E0u);
    pic1704_jump_to_app(v1);
    usleep(0x493E0u);
    if ( a1 != 7 )
      break;
LABEL_9:
    ++v1;
    ++*v2;
    if ( v1 == 16 )
    {
LABEL_10:
      fpga_reset();
      V_LOCK();
      LOWORD(v10) = -620;
      HIWORD(v10) = (unsigned int)":%d" >> 16;
      logfmt_raw(v22, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v11) = -1132;
      HIWORD(v11) = (unsigned int)"_standard" >> 16;
      zlog(*v3, v11, 157, "dev_init_hal", 12, 92, 60, v22);
      enable_bypass_mode();
      dev_config_hal((int)"ckoo_hash_init");
      return 0;
    }
  }
  if ( pic1704_get_sw_version(*(_BYTE *)(v4 + 8 * *v2), &v21) )
  {
    V_LOCK();
    LOWORD(v8) = -676;
    HIWORD(v8) = (unsigned int)"en:%d, fixture_without_header_len:%d, fixture_actual_len:%d" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v8, *v2, *(_DWORD *)(v4 + 8 * *v2), v21);
    V_UNLOCK();
    LOWORD(v9) = -1132;
    HIWORD(v9) = (unsigned int)"_standard" >> 16;
    zlog(*v3, v9, 157, "dev_init_hal", 12, 83, 60, v22);
    goto LABEL_9;
  }
  V_LOCK();
  LOWORD(v16) = -728;
  HIWORD(v16) = (unsigned int)"on fail for chain %d.\n" >> 16;
  logfmt_raw(v22, 0x1000u, 0, v16, *v2, *(_DWORD *)(v4 + 8 * *v2));
  V_UNLOCK();
  v13 = *v3;
  v14 = 77;
LABEL_12:
  LOWORD(v15) = -1132;
  HIWORD(v15) = (unsigned int)"_standard" >> 16;
  zlog(v13, v15, 157, "dev_init_hal", 12, v14, 100, v22);
  return -1;
}
