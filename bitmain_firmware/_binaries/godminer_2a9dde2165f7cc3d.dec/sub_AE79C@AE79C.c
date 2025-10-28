int sub_AE79C()
{
  int v0; // r8
  int v1; // r3
  int v2; // r7
  int v3; // r4
  int v4; // r5
  void *v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r1
  _DWORD *v11; // r8
  int v13; // r9
  int v14; // r4
  int v15; // r3
  int v16; // r5
  void *v17; // r0
  int v18; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v20[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( dword_18D880[0] || (dword_18D880[0] = (int)calloc(1u, 0x54u)) != 0 )
  {
    v0 = dword_18D884;
    if ( dword_18D884 <= 0 )
      return 0;
    v1 = 0;
    v2 = dword_18D880[0];
    LOBYTE(v3) = 0;
    while ( 1 )
    {
      v4 = dword_18D880[v1 + 2];
      if ( !*(_DWORD *)(v2 + 4 * v4) )
      {
        v5 = calloc(1u, 0xC8u);
        *(_DWORD *)(v2 + 4 * v4) = v5;
        if ( !v5 )
          break;
      }
      v3 = (unsigned __int8)(v3 + 1);
      v1 = v3;
      if ( v3 >= v0 )
        return 0;
    }
    v6 = snprintf(s, 0x800u, "No memory for configuraion for chain %d.", v4);
    V_LOCK(v6);
    v7 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v7);
    v8 = 215;
    v9 = g_zc;
    LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c";
  }
  else
  {
    strcpy(s, "No memory for configuraion.");
    V_LOCK(*(_DWORD *)"nfiguraion.");
    v18 = logfmt_raw((int)v20, 0x1000u);
    V_UNLOCK(v18);
    v8 = 202;
    v9 = g_zc;
    LOWORD(v10) = 21364;
  }
  HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c" >> 16;
  zlog(v9, v10, 173, "_alloc_memory", 13, v8, 100, v20);
  v11 = (_DWORD *)dword_18D880[0];
  if ( !dword_18D880[0] )
    return -1;
  v13 = dword_18D884;
  if ( dword_18D884 > 0 )
  {
    LOBYTE(v14) = 0;
    v15 = 0;
    do
    {
      v16 = dword_18D880[v15 + 2];
      v17 = (void *)v11[v16];
      if ( v17 )
      {
        free(v17);
        v11[v16] = 0;
      }
      v14 = (unsigned __int8)(v14 + 1);
      v15 = v14;
    }
    while ( v13 > v14 );
  }
  free(v11);
  dword_18D880[0] = 0;
  return -1;
}
