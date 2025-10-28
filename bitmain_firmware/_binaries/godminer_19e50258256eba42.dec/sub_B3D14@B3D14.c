int __fastcall sub_B3D14(char a1)
{
  _BYTE v4[24]; // [sp+44h] [bp-1058h] BYREF
  int v5; // [sp+1044h] [bp-58h] BYREF
  const char *v6[7]; // [sp+1048h] [bp-54h] BYREF
  int v7; // [sp+1064h] [bp-38h]
  int v8; // [sp+1068h] [bp-34h]
  char *v9; // [sp+106Ch] [bp-30h]
  int v10; // [sp+1070h] [bp-2Ch]
  char *v11; // [sp+1074h] [bp-28h]
  char *flag_from_monitor; // [sp+1078h] [bp-24h]
  int *all_created_runtime; // [sp+107Ch] [bp-20h]

  v5 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v5);
  flag_from_monitor = get_flag_from_monitor(*all_created_runtime);
  v11 = flag_from_monitor + 32;
  v10 = 2;
  if ( (*((_QWORD *)flag_from_monitor + 4) & 4LL) == 0 )
    return 0;
  v9 = flag_from_monitor + 32;
  v8 = 2;
  *((_QWORD *)flag_from_monitor + 5) |= 4uLL;
  if ( !a1 )
    return 0;
  V_LOCK();
  sub_B27A4(v6, "fan error exceed limit");
  logfmt_raw(v4, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "%s", "check_fan_err");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/check_miner_status.c",
    173,
    "check_fan_err",
    13,
    85,
    100,
    v4);
  return 1;
}
