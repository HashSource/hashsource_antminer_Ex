__int64 __fastcall sub_1B6E7C(_DWORD *a1)
{
  _BYTE v3[12]; // [sp+20h] [bp-104Ch] BYREF
  char v4[68]; // [sp+1020h] [bp-4Ch] BYREF
  unsigned int i; // [sp+1064h] [bp-8h]

  for ( i = 0; i <= 0x1F; ++i )
    sprintf(&v4[2 * i], "%02x", *((unsigned __int8 *)a1 + i + 16));
  V_LOCK();
  logfmt_raw(
    v3,
    0x1000u,
    0,
    "rvn dump work poolid %lld start_nonce %016llx, header_hash %s",
    *a1,
    a1[1],
    a1[20],
    a1[21],
    v4);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
           171,
           "dump_work",
           9,
           127,
           60,
           v3);
}
