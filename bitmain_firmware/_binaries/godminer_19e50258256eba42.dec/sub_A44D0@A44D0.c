int __fastcall sub_A44D0(int a1, const char **a2)
{
  const char *v2; // r1
  const char *v3; // r2
  const char *v4; // r3
  const char *v5; // r1
  _BYTE v9[52]; // [sp+18h] [bp-1274h] BYREF
  _BYTE s[256]; // [sp+1018h] [bp-274h] BYREF
  __int64 v11; // [sp+1118h] [bp-174h] BYREF
  char v12[32]; // [sp+1120h] [bp-16Ch] BYREF
  _BYTE dest[256]; // [sp+1140h] [bp-14Ch] BYREF
  int v14; // [sp+1240h] [bp-4Ch]
  _BYTE v15[32]; // [sp+1244h] [bp-48h] BYREF
  const char *v16; // [sp+1264h] [bp-28h]
  const char *v17; // [sp+1268h] [bp-24h]
  const char *v18; // [sp+126Ch] [bp-20h]
  const char *v19; // [sp+1270h] [bp-1Ch]
  const char *v20; // [sp+1274h] [bp-18h]
  const char *v21; // [sp+1278h] [bp-14h]

  v11 = *(_QWORD *)a2;
  strcpy(v12, a2[281]);
  memset(s, 0, sizeof(s));
  memcpy(s, a2 + 2, sizeof(s));
  s[120] = dword_5AD3DC;
  s[121] = BYTE1(dword_5AD3DC) | ((unsigned __int8)*(_DWORD *)(a1 + 264) << 6);
  memcpy(dest, s, sizeof(dest));
  v14 = target_to_diff_byte_hns((int)(a2 + 258));
  memcpy(v15, a2 + 258, sizeof(v15));
  V_LOCK();
  logfmt_raw(v9, 0x1000u, 0, "start nonce: %08x target_diff: %d", dword_5AD3DC, v14);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/hns/hns_2130/hns_2130_content.c",
    173,
    "push_work_hns_2130",
    18,
    46,
    20,
    v9);
  v2 = a2[276];
  v3 = a2[277];
  v4 = a2[278];
  v16 = a2[275];
  v17 = v2;
  v18 = v3;
  v19 = v4;
  v5 = a2[280];
  v20 = a2[279];
  v21 = v5;
  *(_DWORD *)(a1 + 532) = 0;
  (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v11);
  return 0;
}
