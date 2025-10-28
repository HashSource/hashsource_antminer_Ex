int __fastcall get_mps_power_mode(int a1, char a2, _BYTE *a3)
{
  char v3; // r0
  char v4; // r0
  char v5; // r0
  _BYTE v10[20]; // [sp+20h] [bp-1014h] BYREF
  _BYTE v11[11]; // [sp+1020h] [bp-14h] BYREF
  unsigned __int8 v12; // [sp+102Bh] [bp-9h]
  int v13; // [sp+102Ch] [bp-8h]

  v13 = 0;
  *a3 = -1;
  v11[0] = 0;
  v3 = sub_14C444(a2);
  if ( !sub_14CD54(a1, v3, 0, v11, 1u) )
  {
    ++v13;
  }
  else
  {
    v4 = sub_14C444(a2);
    if ( !sub_14CDF8(a1, v4, 0, v11, 1u) )
    {
      ++v13;
    }
    else if ( v11[0] )
    {
      ++v13;
    }
    else
    {
      v5 = sub_14C444(a2);
      if ( !sub_14CDF8(a1, v5, 1, v11, 1u) )
      {
        ++v13;
      }
      else
      {
        v12 = v11[0];
        *a3 = v11[0];
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain-%d get_mps_power_mode: 0x%02x", a1, v12, v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
          175,
          "get_mps_power_mode",
          18,
          675,
          40,
          v10);
      }
    }
  }
  if ( v13 > 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "get_mps_power_mode error, fd %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "get_mps_power_mode",
      18,
      678,
      100,
      v10);
  }
  return v13;
}
