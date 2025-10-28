int __fastcall sub_79A48(int a1, unsigned __int16 a2)
{
  int v4; // [sp+30h] [bp-1074h]
  _BYTE v6[40]; // [sp+3Ch] [bp-1068h] BYREF
  int v7; // [sp+103Ch] [bp-68h] BYREF
  _DWORD v8[7]; // [sp+1040h] [bp-64h] BYREF
  int v9; // [sp+105Ch] [bp-48h]
  _DWORD v10[7]; // [sp+1060h] [bp-44h] BYREF
  int v11; // [sp+107Ch] [bp-28h]
  _DWORD *all_created_runtime; // [sp+1084h] [bp-20h]
  int j; // [sp+1088h] [bp-1Ch]
  int i; // [sp+108Ch] [bp-18h]
  int k; // [sp+1090h] [bp-14h]
  int v16; // [sp+1094h] [bp-10h]

  v16 = 0;
  v4 = a2;
  all_created_runtime = get_all_created_runtime(&v7);
  if ( v4 <= 740 && v4 >= 680 )
  {
    for ( i = 0; i < v7; ++i )
    {
      for ( j = 0; j < *(_DWORD *)(all_created_runtime[i] + 372); ++j )
      {
        if ( j != 1 && j != 3 )
        {
          for ( k = 0; k <= 2; ++k )
          {
            if ( !backend_eth_2282_vdd_set(*(_DWORD *)(all_created_runtime[i] + 272), j, v4) )
            {
              V_LOCK();
              sub_79394((int)v10, i);
              logfmt_raw(
                v6,
                0x1000u,
                0,
                v11,
                v10[0],
                v10[1],
                v10[2],
                v10[3],
                v10[4],
                v10[5],
                v10[6],
                v11,
                "set chain %d chip %d  VDD voltage %d successfully",
                i,
                j,
                v4);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
                179,
                "set_voltage_eth_2282",
                20,
                118,
                20,
                v6);
              break;
            }
            V_LOCK();
            sub_79394((int)v8, i);
            logfmt_raw(
              v6,
              0x1000u,
              0,
              v9,
              v8[0],
              v8[1],
              v8[2],
              v8[3],
              v8[4],
              v8[5],
              v8[6],
              v9,
              "set chain %d chip %d  VDD voltage %d failed!",
              i,
              j,
              v4);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
              179,
              "set_voltage_eth_2282",
              20,
              113,
              100,
              v6);
          }
          if ( k > 2 )
            v16 = 19;
        }
      }
    }
    *(_DWORD *)(a1 + 124) = v4;
    return v16;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "target_vol(%dmV) of vdd_core is abnormal, rang:[680, 720]", v4);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
      179,
      "set_voltage_eth_2282",
      20,
      99,
      100,
      v6);
    return 47;
  }
}
