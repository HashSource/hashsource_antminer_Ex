int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v7; // r0
  int reg; // r8
  int v10; // r8
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  unsigned __int8 v20; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v21; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  _BYTE v23[4072]; // [sp+818h] [bp-1000h] BYREF

  v21 = a2;
  v20 = a3;
  if ( a1 > 0xF )
  {
    reg = -2147482111;
    v16 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v16);
    v17 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v17);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      175,
      "tsensor_read",
      12,
      155,
      100,
      v23);
    return reg;
  }
  v7 = sub_B4EC8(a1, v21);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v10 = tsensor_open(a1, &v21, 1u);
  if ( v10 < 0 )
  {
    v14 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v21);
    V_LOCK(v14);
    v15 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v15);
    v13 = 164;
    goto LABEL_9;
  }
  v7 = sub_B4EC8(a1, v21);
  if ( v7 == -2147482112 )
  {
    v11 = snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v21);
    V_LOCK(v11);
    v12 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v12);
    v13 = 171;
  }
  else
  {
LABEL_3:
    reg = iic_read_reg(*(_DWORD *)&byte_18DA38[68 * a1 + 8 + 8 * v7], (int)&v20, 2, a4, a5);
    if ( reg == a5 )
      return reg;
    v10 = -2147482112;
    v18 = snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v21, v20);
    V_LOCK(v18);
    v19 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v19);
    v13 = 196;
  }
LABEL_9:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    175,
    "tsensor_read",
    12,
    v13,
    100,
    v23);
  return v10;
}
