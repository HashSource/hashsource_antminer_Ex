int __fastcall tsensor_open(unsigned int a1, int a2, unsigned __int8 a3)
{
  int v4; // r1
  char v9[24]; // [sp+24h] [bp-1818h] BYREF
  _BYTE v10[24]; // [sp+824h] [bp-1018h] BYREF
  unsigned int v11; // [sp+1824h] [bp-18h] BYREF
  __int16 v12; // [sp+1828h] [bp-14h]
  char v13; // [sp+182Ah] [bp-12h]
  char v14; // [sp+182Bh] [bp-11h]
  int v15; // [sp+182Ch] [bp-10h]
  unsigned __int8 i; // [sp+1833h] [bp-9h]
  int v17; // [sp+1834h] [bp-8h]

  v15 = -2147482111;
  if ( a1 <= 0xF )
  {
    if ( a3 <= 7u )
    {
      for ( i = 0; i < (unsigned int)a3; ++i )
      {
        v17 = sub_213004(a1, *(_BYTE *)(a2 + i));
        if ( v17 == -2147482112 )
        {
          v11 = a1;
          v12 = 0;
          v13 = ((*(unsigned __int8 *)(a2 + i) + a1) >> 3) & 0xF;
          v14 = (*(_BYTE *)(a2 + i) + a1) & 7;
          v15 = iic_init((int)&v11);
          if ( v15 < 0 )
          {
            snprintf(v9, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *(unsigned __int8 *)(a2 + i));
            V_LOCK();
            logfmt_raw(v10, 0x1000u, 0, v9);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
              172,
              "tsensor_open",
              12,
              75,
              100,
              v10);
            return v15;
          }
          v4 = byte_C26090[68 * a1];
          byte_C26090[68 * a1] = v4 + 1;
          v17 = v4;
          byte_C26090[68 * a1 + 4 + 8 * v4] = *(_BYTE *)(a2 + i);
          *(_DWORD *)&byte_C26090[68 * a1 + 8 + 8 * v17] = v15;
        }
      }
      return 0;
    }
    else
    {
      snprintf(v9, 0x800u, " Bad T-sensor param, input num is %d", a3);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
        172,
        "tsensor_open",
        12,
        56,
        100,
        v10);
      return -2147482111;
    }
  }
  else
  {
    snprintf(v9, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, v9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_open",
      12,
      55,
      100,
      v10);
    return -2147482111;
  }
}
