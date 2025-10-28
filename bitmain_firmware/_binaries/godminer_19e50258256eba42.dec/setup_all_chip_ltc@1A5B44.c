int __fastcall setup_all_chip_ltc(int a1)
{
  _BYTE v4[4100]; // [sp+1Ch] [bp-1018h] BYREF
  void *ptr; // [sp+1020h] [bp-14h]
  int i; // [sp+1028h] [bp-Ch]
  int v7; // [sp+102Ch] [bp-8h]

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    577,
    40,
    v4);
  v7 = *(_DWORD *)(a1 + 372);
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "%s", "setup_all_chip_ltc");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    580,
    60,
    v4);
  if ( !sub_1A4B0C(a1) )
    return 12;
  *(_DWORD *)(a1 + 468) = sub_1A5650(*(_DWORD *)(a1 + 528), v7);
  (*(void (__fastcall **)(int, _DWORD, int))(a1 + 288))(a1, *(_DWORD *)(a1 + 528), v7);
  sub_19CF0C(a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  for ( i = 0; i < *(_DWORD *)(a1 + 376); ++i )
  {
    ptr = malloc(4 * v7);
    v4[4099] = 1;
    chip_setting_working_mode_ltc(a1, 1, 0, 0, i, 0xFFu);
    free(ptr);
  }
  *(_DWORD *)(a1 + 504) = 900;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "get addr after open cores and set frequency.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    649,
    60,
    v4);
  if ( !sub_1A4B0C(a1) )
    return 12;
  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "setup_all_chip_ltc() in");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
    171,
    "setup_all_chip_ltc",
    18,
    653,
    40,
    v4);
  return 0;
}
