int __fastcall get_mps_rail2_voltage(int a1, char a2, unsigned __int16 *a3)
{
  char v3; // r0
  char v4; // r0
  char v5; // r0
  _BYTE v10[20]; // [sp+20h] [bp-1014h] BYREF
  _BYTE v11[8]; // [sp+1020h] [bp-14h] BYREF
  unsigned __int16 v12; // [sp+1028h] [bp-Ch]
  unsigned __int16 v13; // [sp+102Ah] [bp-Ah]
  int v14; // [sp+102Ch] [bp-8h]

  v14 = 0;
  *a3 = -1;
  v11[0] = 1;
  v3 = sub_14C444(a2);
  if ( !sub_14CD54(a1, v3, 0, v11, 1u) )
  {
    ++v14;
  }
  else
  {
    v4 = sub_14C444(a2);
    if ( !sub_14CDF8(a1, v4, 0, v11, 1u) )
    {
      ++v14;
    }
    else if ( v11[0] == 1 )
    {
      v5 = sub_14C444(a2);
      if ( !sub_14CDF8(a1, v5, 33, v11, 2u) )
      {
        ++v14;
      }
      else
      {
        v13 = v11[0] | (v11[1] << 8);
        v12 = 5 * ((v13 & 0x1FF) + 49);
        *a3 = v12;
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain-%d raw data: %u get_mps_rail2_voltage: %u", a1, v13, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
          175,
          "get_mps_rail2_voltage",
          21,
          591,
          20,
          v10);
      }
    }
    else
    {
      ++v14;
    }
  }
  if ( v14 > 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "get_chain_mps_voltage2 error, fd %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "get_mps_rail2_voltage",
      21,
      595,
      100,
      v10);
  }
  return v14;
}
