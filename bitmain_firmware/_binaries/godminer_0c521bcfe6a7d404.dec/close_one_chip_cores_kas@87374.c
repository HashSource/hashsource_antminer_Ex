int __fastcall close_one_chip_cores_kas(int a1, char a2)
{
  int v4; // r0
  int v5; // r3
  _BYTE v7[32]; // [sp+28h] [bp-1020h] BYREF
  _DWORD v8[2]; // [sp+48h] [bp-1000h] BYREF
  int v9; // [sp+50h] [bp-FF8h]
  int v10; // [sp+54h] [bp-FF4h]

  V_LOCK(a1);
  V_INT((int)v7, "chain");
  v4 = logfmt_raw((int)v8, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    174,
    "close_one_chip_cores_kas",
    24,
    659,
    40,
    v8);
  v5 = *(_DWORD *)(a1 + 324);
  v9 = 1835008;
  v10 = 0;
  v8[1] = 0;
  v8[0] = -1069408496;
  BYTE1(v9) = v5 * a2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v8);
  return 0;
}
