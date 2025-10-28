int __fastcall sub_A7120(int a1)
{
  _BYTE v3[60]; // [sp+20h] [bp-103Ch] BYREF
  int v4; // [sp+1020h] [bp-3Ch] BYREF
  unsigned int seed; // [sp+1024h] [bp-38h] BYREF
  struct timeval tv; // [sp+1028h] [bp-34h] BYREF
  int v7; // [sp+1030h] [bp-2Ch]
  int i; // [sp+1034h] [bp-28h]
  __int64 v9; // [sp+1038h] [bp-24h]

  *(_QWORD *)&dword_5AD510 = 0;
  gettimeofday(&tv, 0);
  seed = 1000000 * tv.tv_sec + tv.tv_usec;
  v9 = (unsigned __int16)rand_r(&seed);
  v4 = 0;
  v7 = str2hex((int)&v4, *(_DWORD *)(a1 + 1096), 8);
  if ( v7 != 4 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "Failed to convert string nonce1 to hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
      173,
      "pre_push_work_rvn_2044",
      22,
      25,
      100,
      v3);
  }
  for ( i = 0; i <= 3; ++i )
    *(_QWORD *)&dword_5AD510 |= *((unsigned __int8 *)&v4 + i) << (8 * (7 - i));
  *(_QWORD *)&dword_5AD510 += v9;
  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "start_nonce_rvn_high: %016llx", dword_5AD510, dword_5AD514);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
    173,
    "pre_push_work_rvn_2044",
    22,
    33,
    40,
    v3);
  return 0;
}
