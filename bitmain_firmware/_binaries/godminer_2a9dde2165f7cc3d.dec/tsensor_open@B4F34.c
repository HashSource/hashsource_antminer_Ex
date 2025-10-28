int __fastcall tsensor_open(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v4; // r11
  unsigned __int8 *v5; // r5
  unsigned __int8 *v6; // r10
  int v7; // r0
  unsigned __int8 *v8; // r4
  int v9; // r2
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r8
  int v13; // r2
  unsigned __int8 v14; // r1
  unsigned __int8 *v15; // r2
  int v16; // r8
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r0
  int v25; // [sp+14h] [bp-1810h]
  unsigned int v26; // [sp+18h] [bp-180Ch] BYREF
  __int16 v27; // [sp+1Ch] [bp-1808h]
  char v28; // [sp+1Eh] [bp-1806h]
  char v29; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  _BYTE v31[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    v20 = snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK(v20);
    v21 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v21);
    v22 = 55;
LABEL_13:
    v16 = -2147482111;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      175,
      "tsensor_open",
      12,
      v22,
      100,
      v31);
    return v16;
  }
  if ( a3 > 7 )
  {
    v23 = snprintf(s, 0x800u, " Bad T-sensor param, input num is %d", a3);
    V_LOCK(v23);
    v24 = logfmt_raw((int)v31, 0x1000u);
    V_UNLOCK(v24);
    v22 = 56;
    goto LABEL_13;
  }
  if ( !a3 )
    return 0;
  v25 = 68 * a1;
  v4 = a2;
  v5 = &a2[(unsigned __int8)(a3 - 1) + 1];
  v6 = &byte_18DA38[68 * a1];
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = sub_B4EB8(a1, *v4);
      v8 = v4++;
      if ( v7 == -2147482112 )
        break;
      if ( v4 == v5 )
        return 0;
    }
    v9 = *(v4 - 1);
    v26 = a1;
    v10 = v9 + a1;
    v27 = 0;
    v28 = (v10 >> 3) & 0xF;
    v29 = v10 & 7;
    v11 = iic_init((int)&v26);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = *v6;
    *v6 = v13 + 1;
    v14 = *(v4 - 1);
    v15 = &byte_18DA38[8 * v13 + v25];
    *((_DWORD *)v15 + 2) = v11;
    v15[4] = v14;
    if ( v4 == v5 )
      return 0;
  }
  v18 = snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *v8);
  V_LOCK(v18);
  v19 = logfmt_raw((int)v31, 0x1000u);
  V_UNLOCK(v19);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    175,
    "tsensor_open",
    12,
    75,
    100,
    v31);
  return v12;
}
