int __fastcall sub_50C44(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  __int64 *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  void (__fastcall *v20)(_DWORD *, __int64 *); // r5
  int v21; // r0
  int v22; // r1
  _BYTE v24[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v25; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v27[256]; // [sp+138h] [bp-114Ch] BYREF
  int v28; // [sp+238h] [bp-104Ch]
  int v29; // [sp+23Ch] [bp-1048h]
  int v30; // [sp+240h] [bp-1044h]
  int v31; // [sp+244h] [bp-1040h]
  int v32; // [sp+248h] [bp-103Ch]
  int v33; // [sp+24Ch] [bp-1038h]
  int v34; // [sp+250h] [bp-1034h]
  int v35; // [sp+254h] [bp-1030h]
  int v36; // [sp+258h] [bp-102Ch]
  int v37; // [sp+25Ch] [bp-1028h]
  int v38; // [sp+260h] [bp-1024h]
  int v39; // [sp+264h] [bp-1020h]
  int v40; // [sp+268h] [bp-101Ch]
  int v41; // [sp+26Ch] [bp-1018h]
  int v42; // [sp+270h] [bp-1014h]
  _BYTE v43[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v25 = v2;
  strcpy(dest, v5);
  memcpy(v24, a2 + 1, sizeof(v24));
  v6 = a1[55];
  v24[120] = dword_174130;
  v24[121] = BYTE1(dword_174130) | ((_BYTE)v6 << 6);
  memcpy(v27, v24, sizeof(v27));
  v7 = target_to_diff_byte_hns(a2 + 129);
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = *((_DWORD *)a2 + 261);
  v28 = v7;
  v29 = *((_DWORD *)a2 + 258);
  v30 = v8;
  v31 = v9;
  v32 = v10;
  v11 = *((_DWORD *)a2 + 263);
  v12 = *((_DWORD *)a2 + 264);
  v13 = *((_DWORD *)a2 + 265);
  v33 = *((_DWORD *)a2 + 262);
  v34 = v11;
  v35 = v12;
  v36 = v13;
  V_LOCK(v33);
  v14 = logfmt_raw((int)v43, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/dhash_content/hns/hns_2130/hns_2130_content.c",
    176,
    "push_work_hns_2130",
    18,
    46,
    20,
    v43);
  v15 = a2 + 136;
  v16 = *((_DWORD *)a2 + 275);
  v17 = *((_DWORD *)a2 + 276);
  v18 = *((_DWORD *)a2 + 277);
  v19 = *((_DWORD *)a2 + 278);
  v20 = (void (__fastcall *)(_DWORD *, __int64 *))a1[8];
  v37 = v16;
  v38 = v17;
  v39 = v18;
  v40 = v19;
  v21 = *((_DWORD *)v15 + 7);
  v22 = *((_DWORD *)v15 + 8);
  a1[115] = 0;
  v41 = v21;
  v42 = v22;
  v20(a1, &v25);
  return 0;
}
