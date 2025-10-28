int __fastcall disable_cores_rvn(int a1)
{
  int v2; // r0
  _BYTE v4[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v4, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "disable_cores_rvn",
    17,
    787,
    20,
    v4);
  sub_92A6C(a1, 160, 0);
  usleep((__useconds_t)&stru_1869C.st_value);
  return 0;
}
