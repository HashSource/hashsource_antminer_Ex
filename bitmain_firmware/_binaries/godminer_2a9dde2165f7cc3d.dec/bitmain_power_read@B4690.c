int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r4
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r6
  unsigned __int8 *v11; // r8
  int v12; // r4
  int v13; // t1
  int v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v22; // [sp+14h] [bp-1848h]
  int v23; // [sp+1Ch] [bp-1840h] BYREF
  char v24; // [sp+20h] [bp-183Ch]
  char v25; // [sp+21h] [bp-183Bh]
  __int16 v26; // [sp+22h] [bp-183Ah]
  unsigned __int8 v27[52]; // [sp+24h] [bp-1838h] BYREF
  char s[2040]; // [sp+58h] [bp-1804h] BYREF
  _BYTE v29[4100]; // [sp+858h] [bp-1004h] BYREF

  memset(v27, 0, 0x32u);
  v24 = a1;
  v26 = a1 + 12 + a3;
  v25 = a3;
  v23 = 101100117;
  if ( dword_18D94C )
  {
    v22 = 0;
  }
  else
  {
    v22 = sub_B3474();
    if ( v22 < 0 )
    {
      v17 = snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_power_read");
      V_LOCK(v17);
      v18 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v18);
      v19 = 887;
LABEL_12:
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "bitmain_power_read",
        18,
        v19,
        100,
        v29);
      return v22;
    }
  }
  v5 = sub_B2AE8(dword_18D948, (unsigned __int8 *)&v23, 8u, v27, a3 + 7);
  LOBYTE(v6) = v5;
  if ( v5 )
  {
    v22 = -2147482880;
    strcpy(s, "set DA conversion N failed");
    V_LOCK(*(_DWORD *)"n N failed");
    v20 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v20);
    v19 = 897;
    goto LABEL_12;
  }
  v7 = 0;
  do
  {
    v6 = (unsigned __int8)(v6 + 1);
    v8 = snprintf(s, 0x800u, "read_back_data[%d]: %02X", v7, v27[v7]);
    V_LOCK(v8);
    v9 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
      176,
      "bitmain_power_read",
      18,
      905,
      100,
      v29);
    v7 = v6;
  }
  while ( v6 <= a3 + 6 );
  if ( a3 )
  {
    v10 = a2 + (unsigned __int8)(a3 - 1);
    v11 = &v27[4];
    v12 = a2 - 1;
    do
    {
      v13 = *++v11;
      *(_BYTE *)++v12 = v13;
      v14 = snprintf(s, 0x800u, "buf[%d]: %02X", v12 - a2, v13);
      V_LOCK(v14);
      v15 = logfmt_raw((int)v29, 0x1000u);
      V_UNLOCK(v15);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/device/hal/power/bitmain_power_APW9.c",
        176,
        "bitmain_power_read",
        18,
        910,
        100,
        v29);
    }
    while ( v12 != v10 );
  }
  return v22;
}
