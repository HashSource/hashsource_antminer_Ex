int __fastcall sub_51F54(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v8; // [sp+10h] [bp-1014h] BYREF
  int v9; // [sp+14h] [bp-1010h] BYREF
  struct timeval tv; // [sp+18h] [bp-100Ch] BYREF
  _BYTE v11[4100]; // [sp+20h] [bp-1004h] BYREF

  qword_174268 = 0;
  gettimeofday(&tv, 0);
  v8 = tv.tv_usec + (_DWORD)&loc_F4240 * tv.tv_sec;
  v2 = (unsigned __int16)rand_r((unsigned int *)&v8);
  v3 = *(_DWORD *)(a1 + 1096);
  v9 = 0;
  v4 = str2hex((int)&v9, v3, 8);
  if ( v4 != 4 )
  {
    V_LOCK(v4);
    v5 = logfmt_raw((int)v11, 0x1000u);
    V_UNLOCK(v5);
    v4 = zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
           176,
           "pre_push_work_rvn_2020",
           22,
           25,
           100,
           v11);
  }
  qword_174268 += v2;
  V_LOCK(v4);
  v6 = logfmt_raw((int)v11, 0x1000u);
  V_UNLOCK(v6);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
    176,
    "pre_push_work_rvn_2020",
    22,
    33,
    40,
    v11);
  return 0;
}
