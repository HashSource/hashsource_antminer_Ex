int __fastcall sub_87694(int a1, char a2, unsigned __int8 a3)
{
  int v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r0
  _BYTE v11[80]; // [sp+44h] [bp-1050h] BYREF
  int v12; // [sp+1044h] [bp-50h] BYREF
  _WORD s[8]; // [sp+1048h] [bp-4Ch] BYREF
  _DWORD v14[7]; // [sp+1058h] [bp-3Ch] BYREF
  int v15; // [sp+1074h] [bp-20h]
  int i; // [sp+1078h] [bp-1Ch]
  void *ptr; // [sp+107Ch] [bp-18h]

  v12 = 0;
  memset(s, 0, sizeof(s));
  LOBYTE(s[4]) = 1;
  LOBYTE(s[7]) = 0;
  ptr = malloc(0x450u);
  s[5] = a3;
  LOBYTE(s[6]) = a2;
  memset(ptr, 0, 0x450u);
  (*(void (__fastcall **)(int, _WORD *, int, void *, int *))(a1 + 336))(a1, s, 92, ptr, &v12);
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, "%s response_num %d", "ChipSetting_get_single_core_status_KAS_2380", v12);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_single_core_status_KAS_2380",
    43,
    2147,
    40,
    v11);
  for ( i = 0; i < v12; ++i )
  {
    V_LOCK();
    sub_7AAF4((int)v14, *(int *)(a1 + 272));
    v3 = *((unsigned __int8 *)ptr + 12 * i + 4);
    v4 = *((unsigned __int8 *)ptr + 12 * i + 8);
    v5 = sub_7AF00(*((_WORD *)ptr + 6 * i + 3));
    v6 = sub_7AED8(*((_DWORD *)ptr + 3 * i));
    logfmt_raw(
      v11,
      0x1000u,
      0,
      v15,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      v14[5],
      v14[6],
      v15,
      "[Core State] asic %02x core %04x reg %02x state %08x",
      v3,
      v4,
      v5,
      v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_single_core_status_KAS_2380",
      43,
      2150,
      40,
      v11);
  }
  free(ptr);
  return v12;
}
