int __fastcall softreset_one_chip_kas(_DWORD *a1, __int16 a2)
{
  int v4; // r0
  int v5; // r3
  void (__fastcall *v6)(_DWORD *, int *); // r2
  int v7; // r3
  void (__fastcall *v8)(_DWORD *, int *); // r2
  _BYTE v10[32]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+4Ch] [bp-FFCh]
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  V_INT((int)v10, "chain");
  v4 = logfmt_raw((int)&v11, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "softreset_one_chip_kas",
    22,
    640,
    40,
    &v11);
  v5 = a1[81];
  v13 = 4456448;
  v14 = 0;
  v12 = 0;
  v11 = 3;
  v6 = (void (__fastcall *)(_DWORD *, int *))a1[60];
  BYTE1(v13) = v5 * a2;
  v6(a1, &v11);
  v7 = a1[81];
  v13 = 655360;
  v14 = 255;
  v12 = 0;
  v11 = 0;
  v8 = (void (__fastcall *)(_DWORD *, int *))a1[61];
  BYTE1(v13) = v7 * a2;
  v8(a1, &v11);
  usleep((__useconds_t)&stru_1387C.st_value);
  sub_8439C(a1, 36);
  sub_844C4((int)a1, 0, 0, a2);
  return 0;
}
