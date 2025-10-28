int __fastcall save_mps_param(int a1, char a2)
{
  char v2; // r0
  char v3; // r0
  char v4; // r0
  _BYTE v8[16]; // [sp+1Ch] [bp-1010h] BYREF
  _BYTE v9[8]; // [sp+101Ch] [bp-10h] BYREF
  int v10; // [sp+1024h] [bp-8h]

  v10 = 0;
  v9[0] = 0;
  v2 = sub_14C444(a2);
  if ( !sub_14CD54(a1, v2, 0, v9, 1u) )
  {
    ++v10;
  }
  else
  {
    v3 = sub_14C444(a2);
    if ( !sub_14CDF8(a1, v3, 0, v9, 1u) )
    {
      ++v10;
    }
    else if ( v9[0] )
    {
      ++v10;
    }
    else
    {
      v4 = sub_14C444(a2);
      if ( !sub_14CD54(a1, v4, 21, 0, 0) )
        ++v10;
    }
  }
  if ( v10 > 0 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "save_mps_param error, fd %d, which %d", a1, (unsigned __int8)a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2282/backend_eth_2282_vdd.c",
      175,
      "save_mps_param",
      14,
      969,
      100,
      v8);
  }
  return v10;
}
