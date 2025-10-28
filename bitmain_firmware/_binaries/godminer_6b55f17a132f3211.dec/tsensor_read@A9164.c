int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  int reg; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  unsigned __int8 v19; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v20; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v22[4072]; // [sp+818h] [bp-1000h] BYREF

  v20 = a2;
  v19 = a3;
  if ( a1 > 0xF )
  {
    reg = -2147482111;
    v15 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v15);
    v16 = logfmt_raw((int)v22, 0x1000u);
    V_UNLOCK(v16);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      171,
      "tsensor_read",
      12,
      155,
      100,
      v22);
    return reg;
  }
  v7 = sub_A8AC8(a1, v20);
  if ( v7 == -2147482112 )
  {
    reg = tsensor_open(a1, &v20, 1u);
    if ( reg < 0 )
    {
      v12 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v20);
      V_LOCK(v12);
      v13 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v13);
      v14 = 164;
      goto LABEL_9;
    }
    v7 = sub_A8AC8(a1, v20);
    if ( v7 == -2147482112 )
    {
      v10 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v20);
      V_LOCK(v10);
      v11 = logfmt_raw((int)v22, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
        171,
        "tsensor_read",
        12,
        171,
        100,
        v22);
      return reg;
    }
  }
  reg = iic_read_reg(*(_DWORD *)&byte_1775C8[68 * a1 + 8 + 8 * v7], (int)&v19, 2, a4, a5);
  if ( reg == a5 )
    return reg;
  reg = -2147482112;
  v17 = snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v20, v19);
  V_LOCK(v17);
  v18 = logfmt_raw((int)v22, 0x1000u);
  V_UNLOCK(v18);
  v14 = 196;
LABEL_9:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    171,
    "tsensor_read",
    12,
    v14,
    100,
    v22);
  return reg;
}
