int __fastcall set_voltage_MP2973_base(char a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r3
  int v7; // [sp+34h] [bp-1070h]
  int v9; // [sp+38h] [bp-106Ch]
  _BYTE v11[32]; // [sp+44h] [bp-1060h] BYREF
  int v12; // [sp+1044h] [bp-60h] BYREF
  _DWORD v13[7]; // [sp+1048h] [bp-5Ch] BYREF
  int v14; // [sp+1064h] [bp-40h]
  _DWORD v15[7]; // [sp+1068h] [bp-3Ch] BYREF
  int v16; // [sp+1084h] [bp-20h]
  _DWORD *all_created_runtime; // [sp+1088h] [bp-1Ch]
  int j; // [sp+108Ch] [bp-18h]
  int i; // [sp+1090h] [bp-14h]
  int v20; // [sp+1094h] [bp-10h]

  v20 = 0;
  all_created_runtime = get_all_created_runtime(&v12);
  v3 = a2;
  if ( a2 >= 0xA5A )
    v3 = 2650;
  v9 = v3;
  v4 = a3;
  if ( a3 >= 0xA5A )
    v4 = 2650;
  v7 = v4;
  for ( i = 0; i < v12; ++i )
  {
    for ( j = 0; j <= 2; ++j )
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(all_created_runtime[i] + 272), a1, v9, v7) )
      {
        V_LOCK();
        sub_98BB8((int)v15, i);
        logfmt_raw(
          v11,
          0x1000u,
          0,
          v16,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v16,
          "set voltage to %d-%d successfully",
          v9,
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "set_voltage_MP2973_base",
          23,
          167,
          40,
          v11);
        printf("chain-%d set voltage to %d-%d successfully\n", i, v9, v7);
        break;
      }
      V_LOCK();
      sub_98BB8((int)v13, i);
      logfmt_raw(
        v11,
        0x1000u,
        0,
        v14,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v14,
        "set_chain_mps_voltage failed");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "set_voltage_MP2973_base",
        23,
        164,
        100,
        v11);
    }
    if ( j > 2 )
      v20 = 19;
  }
  return v20;
}
