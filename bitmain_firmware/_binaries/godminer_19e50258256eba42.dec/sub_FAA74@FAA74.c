int __fastcall sub_FAA74(int a1, int a2)
{
  _BYTE v6[8]; // [sp+1Ch] [bp-1008h] BYREF
  int i; // [sp+101Ch] [bp-8h]

  for ( i = 31; i >= 0; --i )
  {
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, "%02x Vs %02x", *(unsigned __int8 *)(a1 + i), *(unsigned __int8 *)(a2 + i));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dcr_1727/backend_dcr_1727.c",
      171,
      "fulltest_dcr",
      12,
      488,
      20,
      v6);
    if ( *(unsigned __int8 *)(a1 + i) < (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 1;
    if ( *(unsigned __int8 *)(a1 + i) > (unsigned int)*(unsigned __int8 *)(a2 + i) )
      return 0;
  }
  return 1;
}
