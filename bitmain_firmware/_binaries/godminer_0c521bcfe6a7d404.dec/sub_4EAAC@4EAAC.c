int __fastcall sub_4EAAC(int a1)
{
  unsigned int v1; // r4
  int all_created_runtime; // r11
  int v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v13; // [sp+2Ch] [bp-1060h]
  int v14; // [sp+38h] [bp-1054h]
  int v15; // [sp+44h] [bp-1048h] BYREF
  _BYTE v16[32]; // [sp+48h] [bp-1044h] BYREF
  int v17; // [sp+68h] [bp-1024h] BYREF
  _BYTE v18[4100]; // [sp+88h] [bp-1004h] BYREF

  v1 = a1 + 1150;
  all_created_runtime = get_all_created_runtime(&v15);
  V_LOCK(all_created_runtime);
  v3 = logfmt_raw((int)v18, 0x1000u);
  V_UNLOCK(v3);
  v4 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-"
         "origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
         182,
         "set_voltage_MP2973",
         18,
         45,
         40,
         v18);
  if ( v1 <= 0xA5A )
  {
    v5 = 2350;
    if ( v1 >= 0x92E )
      v5 = v1;
    v13 = v5;
  }
  else
  {
    v13 = 2650;
  }
  if ( v1 != v13 )
  {
    V_LOCK(v4);
    v6 = logfmt_raw((int)v18, 0x1000u);
    V_UNLOCK(v6);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
      182,
      "set_voltage_MP2973",
      18,
      48,
      80,
      v18);
  }
  if ( v15 <= 0 )
    return 0;
  v7 = 0;
  v14 = 0;
  do
  {
    v9 = 3;
    do
    {
      v10 = set_chain_mps_voltage(*(_DWORD *)(*(_DWORD *)(all_created_runtime + 4 * v7) + 224), (unsigned __int16)v13);
      if ( !v10 )
      {
        V_LOCK(0);
        V_INT((int)&v17, "chain");
        v8 = logfmt_raw((int)v18, 0x1000u);
        V_UNLOCK(v8);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
          182,
          "set_voltage_MP2973",
          18,
          59,
          20,
          v18);
        goto LABEL_11;
      }
      V_LOCK(v10);
      V_INT((int)v16, "chain");
      v11 = logfmt_raw((int)v18, 0x1000u);
      V_UNLOCK(v11);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/machine_runtime/zec_1746/machine_runtime_zec_1746.c",
        182,
        "set_voltage_MP2973",
        18,
        56,
        100,
        v18);
      --v9;
    }
    while ( v9 );
    v14 = 19;
LABEL_11:
    ++v7;
  }
  while ( v15 > v7 );
  return v14;
}
