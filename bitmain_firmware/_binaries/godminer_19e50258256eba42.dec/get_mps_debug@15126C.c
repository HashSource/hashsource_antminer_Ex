int __fastcall get_mps_debug(int a1, char a2, unsigned __int8 *a3)
{
  char v3; // r0
  char v4; // r0
  char v5; // r0
  _BYTE v10[20]; // [sp+20h] [bp-1014h] BYREF
  _BYTE v11[12]; // [sp+1020h] [bp-14h] BYREF
  int v12; // [sp+102Ch] [bp-8h]

  v12 = 0;
  *a3 = -1;
  v11[0] = 0;
  v3 = sub_14C444(a2);
  if ( !sub_14CD54(a1, v3, 0, v11, 1u) )
  {
    ++v12;
  }
  else
  {
    v4 = sub_14C444(a2);
    if ( !sub_14CDF8(a1, v4, 0, v11, 1u) )
    {
      ++v12;
    }
    else if ( v11[0] )
    {
      ++v12;
    }
    else
    {
      v5 = sub_14C444(a2);
      if ( !sub_14CDF8(a1, v5, 1, v11, 1u) )
      {
        ++v12;
      }
      else
      {
        v11[11] = v11[0];
        *a3 = v11[0];
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "chain-%d chip-%d get_mps_debug: %02x", a1, (unsigned __int8)a2, *a3);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
          175,
          "get_mps_debug",
          13,
          1154,
          40,
          v10);
      }
    }
  }
  if ( v12 > 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "chain-%d chip-%d get_mps_debug error", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "get_mps_debug",
      13,
      1157,
      100,
      v10);
  }
  return v12;
}
