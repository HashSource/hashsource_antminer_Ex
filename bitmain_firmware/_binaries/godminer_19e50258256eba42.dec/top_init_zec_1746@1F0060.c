int __fastcall top_init_zec_1746(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  int v6; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_1E0BC0((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "top_init_zec_1746");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "top_init_zec_1746",
    17,
    644,
    40,
    v3);
  v6 = *(_DWORD *)(a1 + 372);
  *(_DWORD *)(a1 + 468) = makeup_chip_addr_zec(*(_DWORD *)(a1 + 528), v6);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), v6);
  sub_1E6FF4(a1, 1);
  return 0;
}
