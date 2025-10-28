int __fastcall get_chain_mps_voltage2(int a1, char a2, unsigned __int16 *a3)
{
  char v3; // r0
  _BYTE v8[20]; // [sp+20h] [bp-1014h] BYREF
  _BYTE v9[8]; // [sp+1020h] [bp-14h] BYREF
  unsigned __int16 v10; // [sp+1028h] [bp-Ch]
  unsigned __int16 v11; // [sp+102Ah] [bp-Ah]
  int v12; // [sp+102Ch] [bp-8h]

  v12 = 0;
  *a3 = -1;
  if ( !sub_1F2BA8(a1, a2, 2u) )
  {
    ++v12;
  }
  else
  {
    v3 = sub_1F21D0(a2);
    if ( !sub_1F2B18(a1, v3, 13, v9, 2u) )
    {
      ++v12;
    }
    else
    {
      v11 = v9[0] | (v9[1] << 8);
      v10 = 10 * ((v11 >> 5) & 0x1FF) + 490;
      *a3 = v10;
      printf("chain-%d graw data: %u get_chain_mps_voltage2: %u\n", a1, v11, v10);
    }
  }
  if ( v12 > 0 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "get_chain_mps_voltage2 error, fd %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "get_chain_mps_voltage2",
      22,
      268,
      100,
      v8);
  }
  return v12;
}
