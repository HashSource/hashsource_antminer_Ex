int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r8
  unsigned __int8 *v10; // r6
  int v11; // r0
  int v12; // r3
  int v13; // r6
  int v14; // r0
  int v15; // r0
  int v16; // r2
  int v18; // r0
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  unsigned __int8 v25[8]; // [sp+17h] [bp-1809h] BYREF
  unsigned __int8 v26; // [sp+1Fh] [bp-1801h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  _BYTE v28[4096]; // [sp+820h] [bp-1000h] BYREF

  v25[0] = a2;
  if ( a1 > 0xF )
  {
    LOWORD(v13) = 1537;
    v23 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v23);
    v24 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v24);
    v16 = 112;
LABEL_8:
    HIWORD(v13) = 0x8000;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      175,
      "tsensor_write",
      13,
      v16,
      100,
      v28);
    return v13;
  }
  v8 = sub_B4EB8(a1, v25[0]);
  if ( v8 == -2147482112 )
  {
    v13 = tsensor_open(a1, v25, 1u);
    if ( v13 < 0 )
    {
      v21 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v25[0]);
      V_LOCK(v21);
      v22 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v22);
      v20 = 121;
    }
    else
    {
      v8 = sub_B4EB8(a1, v25[0]);
      if ( v8 != -2147482112 )
        goto LABEL_3;
      v18 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v25[0]);
      V_LOCK(v18);
      v19 = logfmt_raw((int)v28, 0x1000u);
      V_UNLOCK(v19);
      v20 = 128;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      175,
      "tsensor_write",
      13,
      v20,
      100,
      v28);
    return v13;
  }
LABEL_3:
  if ( a5 )
  {
    v9 = a4 + a5;
    v10 = &byte_18DA38[68 * a1 + 8 * v8];
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 2);
      v12 = a4;
      v26 = a3;
      ++a4;
      ++a3;
      if ( iic_write_reg(v11, (int)&v26, 1, v12, 1) != 1 )
        break;
      if ( a4 == v9 )
        return a5;
    }
    LOWORD(v13) = 1536;
    v14 = snprintf(s, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", a1, v25[0], v26);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v28, 0x1000u);
    V_UNLOCK(v15);
    v16 = 140;
    goto LABEL_8;
  }
  return a5;
}
