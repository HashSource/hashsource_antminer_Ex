int __fastcall sub_45D44(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  _DWORD *v10; // r4
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // t1
  int v17; // r1
  int v18; // r2
  int v19; // r3
  void (__fastcall *v20)(_DWORD *, __int64 *); // r4
  int v21; // r0
  int v22; // r1
  _BYTE v24[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v25; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v27[256]; // [sp+138h] [bp-114Ch] BYREF
  _DWORD v28[5]; // [sp+238h] [bp-104Ch] BYREF
  int v29; // [sp+24Ch] [bp-1038h]
  int v30; // [sp+250h] [bp-1034h]
  int v31; // [sp+254h] [bp-1030h]
  _DWORD v32[10]; // [sp+258h] [bp-102Ch] BYREF
  _BYTE v33[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 288);
  v25 = v2;
  strcpy(dest, v5);
  memcpy(v24, a2 + 1, sizeof(v24));
  v6 = a1[34];
  v24[120] = dword_166150;
  v24[121] = BYTE1(dword_166150) | ((_BYTE)v6 << 6);
  memcpy(v27, v24, sizeof(v27));
  v7 = target_to_diff_word_hns(a2 + 129);
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = (_DWORD *)((char *)v28 + 3);
  v28[0] = v7;
  v11 = *((_DWORD *)a2 + 261);
  v28[1] = *((_DWORD *)a2 + 258);
  v28[2] = v8;
  v28[3] = v9;
  v28[4] = v11;
  v12 = *((_DWORD *)a2 + 263);
  v13 = *((_DWORD *)a2 + 264);
  v14 = *((_DWORD *)a2 + 265);
  v29 = *((_DWORD *)a2 + 262);
  v30 = v12;
  v31 = v13;
  v32[0] = v14;
  V_LOCK(v29);
  v15 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v15);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_hns/frontend_hns.c",
    157,
    "push_work_hns",
    13,
    490,
    60,
    v33);
  printf("%s[%3d] ", "target", 32);
  do
  {
    v16 = *((unsigned __int8 *)v10 + 1);
    v10 = (_DWORD *)((char *)v10 + 1);
    printf("%02x", v16);
  }
  while ( v10 != (_DWORD *)((char *)v32 + 3) );
  putchar(10);
  v17 = *((_DWORD *)a2 + 322);
  v18 = *((_DWORD *)a2 + 323);
  v19 = *((_DWORD *)a2 + 324);
  v20 = (void (__fastcall *)(_DWORD *, __int64 *))a1[6];
  v32[1] = *((_DWORD *)a2 + 321);
  v32[2] = v17;
  v32[3] = v18;
  v32[4] = v19;
  v21 = *((_DWORD *)a2 + 325);
  v22 = *((_DWORD *)a2 + 326);
  a1[76] = 1;
  v32[5] = v21;
  v32[6] = v22;
  v20(a1, &v25);
  return 0;
}
