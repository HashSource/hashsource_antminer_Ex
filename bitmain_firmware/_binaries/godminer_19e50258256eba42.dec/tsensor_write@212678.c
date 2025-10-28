int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, char a3, int a4, unsigned int a5)
{
  unsigned __int8 v9; // [sp+1Bh] [bp-1821h] BYREF
  unsigned int v10; // [sp+1Ch] [bp-1820h]
  char v11[24]; // [sp+24h] [bp-1818h] BYREF
  _BYTE v12[24]; // [sp+824h] [bp-1018h] BYREF
  unsigned __int8 v13; // [sp+1827h] [bp-15h] BYREF
  unsigned int i; // [sp+1828h] [bp-14h]
  int v15; // [sp+182Ch] [bp-10h]
  int v16; // [sp+1830h] [bp-Ch]
  int v17; // [sp+1834h] [bp-8h]

  v10 = a1;
  v9 = a2;
  v16 = 0;
  i = 0;
  v15 = 0;
  if ( a1 <= 0xF )
  {
    v17 = sub_213004(v10, v9);
    if ( v17 == -2147482112 )
    {
      v16 = tsensor_open(v10, (int)&v9, 1u);
      if ( v16 < 0 )
      {
        snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", v10, v9);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
          172,
          "tsensor_write",
          13,
          121,
          100,
          v12);
        return v16;
      }
      v17 = sub_213004(v10, v9);
      if ( v17 == -2147482112 )
      {
        snprintf(v11, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", v10, v9);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
          172,
          "tsensor_write",
          13,
          128,
          100,
          v12);
        return v16;
      }
    }
    for ( i = 0; a5 > i; ++i )
    {
      v13 = i + a3;
      v16 = iic_write_reg(*(_DWORD *)&byte_C26090[68 * v10 + 8 + 8 * v17], &v13, 1, a4 + i, 1u);
      if ( v16 != 1 )
      {
        snprintf(v11, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", v10, v9, v13);
        V_LOCK();
        logfmt_raw(v12, 0x1000u, 0, v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
          172,
          "tsensor_write",
          13,
          140,
          100,
          v12);
        return -2147482112;
      }
    }
    return a5;
  }
  else
  {
    snprintf(v11, 0x800u, " Bad T-sensor param, input chain is %d", v10);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_write",
      13,
      112,
      100,
      v12);
    return -2147482111;
  }
}
