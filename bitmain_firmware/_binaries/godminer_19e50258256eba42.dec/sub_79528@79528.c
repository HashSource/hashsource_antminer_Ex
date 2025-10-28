int __fastcall sub_79528(int a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4, unsigned __int16 a5)
{
  _BYTE v9[40]; // [sp+44h] [bp-10A8h] BYREF
  int v10; // [sp+1044h] [bp-A8h] BYREF
  _DWORD v11[7]; // [sp+1048h] [bp-A4h] BYREF
  int v12; // [sp+1064h] [bp-88h]
  _DWORD v13[7]; // [sp+1068h] [bp-84h] BYREF
  int v14; // [sp+1084h] [bp-68h]
  _DWORD v15[7]; // [sp+1088h] [bp-64h] BYREF
  int v16; // [sp+10A4h] [bp-48h]
  _DWORD v17[7]; // [sp+10A8h] [bp-44h] BYREF
  int v18; // [sp+10C4h] [bp-28h]
  int k; // [sp+10CCh] [bp-20h]
  _DWORD *all_created_runtime; // [sp+10D0h] [bp-1Ch]
  int v21; // [sp+10D4h] [bp-18h]
  int j; // [sp+10D8h] [bp-14h]
  int i; // [sp+10DCh] [bp-10h]

  v21 = 0;
  all_created_runtime = get_all_created_runtime(&v10);
  for ( i = 0; i < v10; ++i )
  {
    for ( j = 0; j < *(_DWORD *)(all_created_runtime[i] + 372); ++j )
    {
      for ( k = 0; k <= 2; ++k )
      {
        if ( j && j != 5 )
        {
          if ( !backend_eth_2282_icc_max_set(
                  *(_DWORD *)(all_created_runtime[i] + 272),
                  j,
                  2 * a2,
                  2 * a3,
                  2 * a4,
                  2 * a5) )
          {
            V_LOCK();
            sub_79394((int)v17, i);
            logfmt_raw(
              v9,
              0x1000u,
              0,
              v18,
              v17[0],
              v17[1],
              v17[2],
              v17[3],
              v17[4],
              v17[5],
              v17[6],
              v18,
              "set chain %d chip %d IIC MAX successfully!",
              i,
              j);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
              179,
              "set_icc_eth_2282",
              16,
              74,
              20,
              v9);
            break;
          }
          V_LOCK();
          sub_79394((int)v15, i);
          logfmt_raw(
            v9,
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
            "set chain %d chip %d IIC MAX failed!",
            i,
            j);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
            179,
            "set_icc_eth_2282",
            16,
            69,
            100,
            v9);
        }
        else
        {
          if ( !backend_eth_2282_icc_max_set(*(_DWORD *)(all_created_runtime[i] + 272), j, a2, a3, a4, a5) )
          {
            V_LOCK();
            sub_79394((int)v13, i);
            logfmt_raw(
              v9,
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
              "set chain %d chip %d IIC MAX successfully!",
              i,
              j);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
              179,
              "set_icc_eth_2282",
              16,
              63,
              20,
              v9);
            break;
          }
          V_LOCK();
          sub_79394((int)v11, i);
          logfmt_raw(
            v9,
            0x1000u,
            0,
            v12,
            v11[0],
            v11[1],
            v11[2],
            v11[3],
            v11[4],
            v11[5],
            v11[6],
            v12,
            "set chain %d chip %d IIC MAX failed!",
            i,
            j);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/eth_2282/machine_runtime_eth_2282.c",
            179,
            "set_icc_eth_2282",
            16,
            58,
            100,
            v9);
        }
      }
      if ( k > 2 )
        v21 = 19;
    }
  }
  return v21;
}
