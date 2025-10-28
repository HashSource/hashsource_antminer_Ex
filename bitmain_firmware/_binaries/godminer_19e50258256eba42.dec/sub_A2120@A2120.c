int __fastcall sub_A2120(int a1, int *a2)
{
  int v2; // r2
  _BYTE v4[36]; // [sp+20h] [bp-1024h] BYREF
  __int64 seed; // [sp+1020h] [bp-24h] BYREF
  struct timeval tv; // [sp+1028h] [bp-1Ch] BYREF
  int v7; // [sp+1030h] [bp-14h]
  int v8; // [sp+1034h] [bp-10h]
  int v9; // [sp+1038h] [bp-Ch]
  int v10; // [sp+103Ch] [bp-8h]

  v10 = 0;
  v9 = 0;
  v8 = *(_DWORD *)(a1 + 1132);
  *(_QWORD *)a1 = *a2;
  gettimeofday(&tv, 0);
  LODWORD(seed) = 1000000 * tv.tv_sec + tv.tv_usec;
  seed = (int)seed;
  v7 = rand_r((unsigned int *)&seed);
  v2 = dword_5AD388++;
  if ( (v2 & 0xFFFFF00u) > 0xFFFFEFF )
    dword_5AD388 = 0;
  dword_5AD388 = v7 & 0xFFFFF00;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "start_nonce_eth_high: %08x", dword_5AD388);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/eth_2282/eth_2282/eth_2282_content.c",
    178,
    "pre_push_work_eth_2282",
    22,
    40,
    20,
    v4);
  return 0;
}
