int __fastcall sub_AAD90(int a1, const char **a2)
{
  _BYTE v5[20]; // [sp+18h] [bp-11D4h] BYREF
  int src; // [sp+1018h] [bp-1D4h] BYREF
  _BYTE s[180]; // [sp+101Ch] [bp-1D0h] BYREF
  __int64 v8; // [sp+10D0h] [bp-11Ch] BYREF
  char v9[32]; // [sp+10D8h] [bp-114h] BYREF
  _BYTE dest[180]; // [sp+10F8h] [bp-F4h] BYREF
  int v11; // [sp+11ACh] [bp-40h]
  _BYTE v12[32]; // [sp+11B0h] [bp-3Ch] BYREF
  _BYTE v13[8]; // [sp+11D0h] [bp-1Ch] BYREF

  v8 = *(_QWORD *)a2;
  strcpy(v9, a2[281]);
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "start nonce: %08x", dword_5AD5CC);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/dcr/dcr_1727/dcr_1727_content.c",
    173,
    "push_work_dcr_1727",
    18,
    64,
    20,
    v5);
  memcpy(s, a2 + 2, 0x8Cu);
  memcpy(&s[140], (char *)a2 + 153, 0x23u);
  src = (*(_DWORD *)(a1 + 264) << 22) | dword_5AD5CC;
  memcpy(&s[140], &src, 3u);
  memcpy(dest, s, sizeof(dest));
  v11 = target_to_diff_dcr((int)(a2 + 258));
  memcpy(v12, a2 + 258, sizeof(v12));
  memcpy(v13, a2 + 275, sizeof(v13));
  (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v8);
  return 0;
}
