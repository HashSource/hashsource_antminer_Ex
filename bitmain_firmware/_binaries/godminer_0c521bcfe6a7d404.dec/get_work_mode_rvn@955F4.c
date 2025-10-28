int __fastcall get_work_mode_rvn(int a1)
{
  int v2; // r0
  char *v3; // r11
  int v4; // r0
  int v5; // r0
  char *v6; // r6
  char *v7; // r4
  int v8; // r0
  _BYTE v10[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK(a1);
  v2 = logfmt_raw((int)v10, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "get_work_mode_rvn",
    17,
    281,
    0x14u,
    v10);
  v3 = (char *)malloc(0x300u);
  v4 = sub_9305C(a1, 255, 28, v3);
  if ( v4 > 0 )
  {
    v5 = 3 * v4;
    v6 = &v3[4 * v5];
    v7 = v3;
    do
    {
      V_LOCK(v5);
      v7 += 12;
      v8 = logfmt_raw((int)v10, 0x1000u);
      V_UNLOCK(v8);
      v5 = zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmi"
             "ner-origin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
             174,
             "get_work_mode_rvn",
             17,
             287,
             20,
             v10);
    }
    while ( v7 != v6 );
  }
  free(v3);
  return 0;
}
