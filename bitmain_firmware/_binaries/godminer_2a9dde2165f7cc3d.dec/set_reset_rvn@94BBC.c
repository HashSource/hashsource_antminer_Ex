int __fastcall set_reset_rvn(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(int, int *); // r3
  void (__fastcall *v4)(int, int *); // r3
  int v6; // [sp+10h] [bp-1000h] BYREF
  int v7; // [sp+14h] [bp-FFCh]
  int v8; // [sp+18h] [bp-FF8h]
  int v9; // [sp+1Ch] [bp-FF4h]

  V_LOCK(a1);
  v2 = logfmt_raw((int)&v6, 0x1000u);
  V_UNLOCK(v2);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    174,
    "set_reset_rvn",
    13,
    190,
    40,
    &v6);
  v8 = 0;
  v6 = -1414856447;
  v9 = 0;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 240);
  v7 = 0;
  LOBYTE(v8) = 1;
  HIWORD(v8) = 252;
  v3(a1, &v6);
  usleep(0x2710u);
  v8 = 1;
  v9 = 0;
  v7 = 0;
  v6 = 29;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 240);
  HIWORD(v8) = 68;
  v4(a1, &v6);
  usleep(0x2710u);
  v8 = 4456449;
  v9 = 0;
  v7 = 0;
  v6 = 31;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep(0x2710u);
  v8 = 16515073;
  v9 = 0;
  v7 = 0;
  v6 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v6);
  usleep(0x2710u);
  return 0;
}
