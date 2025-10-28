int __fastcall sub_45BB8(_DWORD *a1, __int64 *a2)
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
  int v15; // t1
  int v16; // r1
  int v17; // r2
  int v18; // r3
  void (__fastcall *v19)(_DWORD *, __int64 *); // r4
  int v20; // r0
  int v21; // r1
  _BYTE v23[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v24; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v26[256]; // [sp+138h] [bp-114Ch] BYREF
  _DWORD v27[8]; // [sp+238h] [bp-104Ch] BYREF
  _DWORD v28[10]; // [sp+258h] [bp-102Ch] BYREF
  char v29[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 288);
  v24 = v2;
  strcpy(dest, v5);
  memcpy(v23, a2 + 1, sizeof(v23));
  v6 = a1[34];
  v23[120] = dword_166150;
  v23[121] = BYTE1(dword_166150) | ((_BYTE)v6 << 6);
  memcpy(v26, v23, sizeof(v26));
  v7 = target_to_diff_word_hns((int)(a2 + 129));
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = (_DWORD *)((char *)v27 + 3);
  v27[0] = v7;
  v11 = *((_DWORD *)a2 + 261);
  v27[1] = *((_DWORD *)a2 + 258);
  v27[2] = v8;
  v27[3] = v9;
  v27[4] = v11;
  v12 = *((_DWORD *)a2 + 263);
  v13 = *((_DWORD *)a2 + 264);
  v14 = *((_DWORD *)a2 + 265);
  v27[5] = *((_DWORD *)a2 + 262);
  v27[6] = v12;
  v27[7] = v13;
  v28[0] = v14;
  V_LOCK();
  logfmt_raw(v29, 0x1000u, 0, "start nonce: %08x target_diff: %d", dword_166150, v27[0]);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_hns/frontend_hns.c",
    157,
    "push_work_hns",
    13,
    490,
    60,
    v29);
  printf("%s[%3d] ", "target", 32);
  do
  {
    v15 = *((unsigned __int8 *)v10 + 1);
    v10 = (_DWORD *)((char *)v10 + 1);
    printf("%02x", v15);
  }
  while ( v10 != (_DWORD *)((char *)v28 + 3) );
  putchar(10);
  v16 = *((_DWORD *)a2 + 320);
  v17 = *((_DWORD *)a2 + 321);
  v18 = *((_DWORD *)a2 + 322);
  v19 = (void (__fastcall *)(_DWORD *, __int64 *))a1[6];
  v28[1] = *((_DWORD *)a2 + 319);
  v28[2] = v16;
  v28[3] = v17;
  v28[4] = v18;
  v20 = *((_DWORD *)a2 + 323);
  v21 = *((_DWORD *)a2 + 324);
  a1[76] = 1;
  v28[5] = v20;
  v28[6] = v21;
  v19(a1, &v24);
  return 0;
}
