int __fastcall top_init_kas(int a1)
{
  _BYTE v3[52]; // [sp+30h] [bp-1034h] BYREF
  _DWORD v4[7]; // [sp+1030h] [bp-34h] BYREF
  int v5; // [sp+104Ch] [bp-18h]
  void *v6; // [sp+1054h] [bp-10h]

  V_LOCK();
  sub_1622D8((int)v4, *(int *)(a1 + 272));
  logfmt_raw(v3, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s start", "top_init_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "top_init_kas",
    12,
    1076,
    60,
    v3);
  *(_DWORD *)(a1 + 468) = sub_170A10(*(_DWORD *)(a1 + 528), *(_DWORD *)(a1 + 372));
  (*(void (__fastcall **)(int, _DWORD, _DWORD))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), *(_DWORD *)(a1 + 372));
  v6 = malloc(0x450u);
  sub_16C268(a1, 0, v6);
  set_core_enable_kas(a1, 23130);
  sub_1637C8(a1, 0x7Fu);
  set_work_len_kas(a1);
  set_nonce_len_kas(a1);
  set_nonce_count_zero_kas(a1);
  set_nonce_overflow_kas(a1, 0);
  sub_170F10(a1);
  return 0;
}
